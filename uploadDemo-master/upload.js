let express = require('express')
let formidable = require('formidable')
let app = express()
let fs = require('fs-extra')
let path = require('path')
let concat = require('concat-files')
let opn = require('opn')
const AppInfoParser = require('app-info-parser')
const plist = require('plist');
let appMd5Being = false;
let uploadDir = 'nodeServer/uploads'

// 处理静态资源
app.use(express.static(path.join(__dirname)))

// 处理跨域
app.all('*', (req, res, next) => {
    res.header('Access-Control-Allow-Origin', '*')
    res.header(
        'Access-Control-Allow-Headers',
        'Content-Type,Content-Length, Authorization, Accept,X-Requested-With'
    )
    res.header('Access-Control-Allow-Methods', 'PUT,POST,GET,DELETE,OPTIONS')
    res.header('X-Powered-By', ' 3.2.1')
    if (req.method == 'OPTIONS') res.send(200) /*让options请求快速返回*/
    else next()
})

app.get('/', function (req, resp) {
    let query = req.query
    resp.send('success!!')
})
// 检查文件的MD5
app.get('/check/file', (req, resp) => {
    let query = req.query
    let fileName = query.fileName
    let fileMd5Value = query.fileMd5Value

    // 获取文件Chunk列表
    getChunkList(
        path.join(uploadDir, fileMd5Value+'/'+fileName),
        path.join(uploadDir, fileMd5Value),
        data => {
            resp.send(data)
        }
    )
})

// 检查chunk的MD5
app.get('/check/chunk', (req, resp) => {
    let query = req.query
    let chunkIndex = query.index
    let md5 = query.md5

    fs.stat(path.join(uploadDir, md5, chunkIndex), (err, stats) => {
        if (stats) {
            resp.send({
                stat: 1,
                exit: true,
                desc: 'Exit 1'
            })
        } else {
            resp.send({
                stat: 1,
                exit: false,
                desc: 'Exit 0'
            })
        }
    })
})

app.all('/merge', (req, resp) => {
    let query = req.query
    let md5 = query.md5
    let size = query.size
    let fileName = query.fileName
    console.log(md5, fileName)

    mergeFiles(path.join(uploadDir, md5), uploadDir, fileName, size, req)

    let pathIpa = uploadDir + "/" + md5 + "/" + fileName;
    resp.send({
        stat: 1,
        desc: 'folder list'
    })

})

app.all('/upload', (req, resp) => {
    var form = new formidable.IncomingForm({
        uploadDir: 'nodeServer/tmp'
    })
    form.parse(req, function (err, fields, file) {
        let index = fields.index
        let total = fields.total
        let fileMd5Value = fields.fileMd5Value
        let folder = path.resolve(__dirname, 'nodeServer/uploads', fileMd5Value)
        folderIsExit(folder).then(val => {
            let destFile = path.resolve(folder, fields.index)
            console.log('----------->', file.data.path, destFile)
            copyFile(file.data.path, destFile).then(
                successLog => {
                    resp.send({
                        stat: 1,
                        desc: index
                    })
                },
                errorLog => {
                    resp.send({
                        stat: 0,
                        desc: 'Error'
                    })
                }
            )
        })
    })
    // 文件夹是否存在, 不存在则创建文件
    function folderIsExit(folder) {
        console.log('folderIsExit', folder)
        return new Promise(async (resolve, reject) => {
            let result = await fs.ensureDirSync(path.join(folder))
            console.log('result----', result)
            resolve(true)
        })
    }
    // 把文件从一个目录拷贝到别一个目录
    function copyFile(src, dest) {
        let promise = new Promise((resolve, reject) => {
            fs.rename(src, dest, err => {
                if (err) {
                    reject(err)
                } else {
                    resolve('copy file:' + dest + ' success!')
                }
            })
        })
        return promise
    }
})

// 获取文件Chunk列表
async function getChunkList(filePath, folderPath, callback) {

    let isFileExit = await isExist(filePath)
    let result = {}
    // 如果文件(文件名, 如:node-v7.7.4.pkg)已在存在, 不用再继续上传, 真接秒传
    if (isFileExit) {
        const parser = new AppInfoParser(filePath) // or xxx.ipa
        parser.parse().then(result => {
            let typename = filePath.substring(filePath.lastIndexOf('.') + 1);
            var json = {};
            if (typename =='apk') {
                json = {
                    'CFBundleDisplayName': result.application.description,
                    'bundleid': result.package,
                    'version': result.platformBuildVersionName,
                    'icon': result.icon
                }

            } else {
                json = {
                    'CFBundleDisplayName': result.CFBundleDisplayName,
                    'CFBundleShortVersionString': result.CFBundleShortVersionString,
                    'bundleid': result.CFBundleIdentifier,
                    'version': result.CFBundleVersion,
                    'aps-environment': result.mobileProvision.Entitlements['aps-environment'],
                    'ExpirationDate': result.mobileProvision.ExpirationDate,
                    'icon': result.icon
                }
            }

            
            result = {
                stat: 1,
                json: json,
                chunkList:[],
                desc: 'file is exist'
            }
            callback(result)

        }).catch(err => {
            console.log('err ----> ', err)
        })
  
    } else {
        let isFolderExist = await isExist(folderPath)
        let ipaname = filePath.substring(folderPath.lastIndexOf('/') + 1)
        console.log(folderPath)
        // 如果文件夹(md5值后的文件)存在, 就获取已经上传的块
        let fileList = []
        if (isFolderExist) {
            fileList = await listDir(folderPath)

            result = {
                stat: 1,
                chunkList: fileList,
                desc: 'folder list'
            }
            callback(result)
            return
        }
        namepath = folderPath + '/' + ipaname;
        result = {
            stat: 1,
            chunkList: fileList,
            desc: 'folder list'
        }
        callback(result)

    }

}

// 文件或文件夹是否存在
function isExist(filePath) {
    return new Promise((resolve, reject) => {
        fs.stat(filePath, (err, stats) => {
            // 文件不存在
            if (err && err.code === 'ENOENT') {
                resolve(false)
            } else {
                resolve(true)
            }
        })
    })
}

// 列出文件夹下所有文件
function listDir(path) {
    return new Promise((resolve, reject) => {
        fs.readdir(path, (err, data) => {
            if (err) {
                reject(err)
                return
            }
            // 把mac系统下的临时文件去掉
            if (data && data.length > 0 && data[0] === '.DS_Store') {
                data.splice(0, 1)
            }
            resolve(data)
        })
    })
}
// 合并文件
async function mergeFiles(srcDir, targetDir, newFileName, size, ) {
    console.log(...arguments)


    // let targetStream = fs.createWriteStream(path.join(targetDir, newFileName))
    let fileArr = await listDir(srcDir)
    // 把文件名加上文件夹的前缀
    for (let i = 0; i < fileArr.length; i++) {
        if (fileArr[i] != newFileName) {
            fileArr[i] = srcDir + '/' + fileArr[i]
        }
    }
    var namePath = path.join(srcDir, newFileName)
    concat(fileArr, namePath, () => {
        for (let i = 0; i < fileArr.length; i++) {
            if (fs.existsSync(fileArr[i])) {
                //删除文件
                fs.unlinkSync(fileArr[i]);
            } else {
                console.log('inexistence path：', fileArr[i]);
            }
        }
        getIpaJson(srcDir, namePath)
    })
}

function getIpaJson(srcDir, namePath) {
    const parser = new AppInfoParser(namePath) // or xxx.ipa
    parser.parse().then(result => {
        var json = {
            'CFBundleDisplayName': result.CFBundleDisplayName,
            'CFBundleShortVersionString': result.CFBundleShortVersionString,
            'bundleid': result.CFBundleIdentifier,
            'version': result.CFBundleVersion,
            'aps-environment': result.mobileProvision.Entitlements['aps-environment'],
            'ExpirationDate': result.mobileProvision.ExpirationDate,
            'icon': result.icon
        }
        let ipa_download = namePath;
        let base64Data = json.icon.replace(/^data:image\/\w+;base64,/, "");
        const dataBuffer = Buffer.from(base64Data, 'base64');
        let icon_download = srcDir + "/icon.png"
        fs.writeFile(icon_download, dataBuffer, dataBuffer, function (err) {
            if (err) {
                console.log("down fail");
            }
            var obj = plist.parse(fs.readFileSync('info.plist', 'utf8'));
            obj.items[0].assets[0].url = ipa_download
            obj.items[0].assets[1].url = icon_download
            obj.items[0].assets[2].url = icon_download
            obj.items[0].metadata['bundle-version'] = json.version
            obj.items[0].metadata['bundle-identifier'] = json.bundleid
            var newPlistStr = plist.build(obj)
            fs.writeFile(srcDir + '/info.plist', newPlistStr, function (err) {
                if (err) {
                    return console.error(err);
                }
                console.log("数据写入成功！");
            });

        });
    }).catch(err => {
        console.log('err ----> ', err)
    })

}


app.listen(80, () => {
    console.log('服务启动完成，端口监听80！')
    opn('http://182.92.71.101:80/#/appUpdate')
})

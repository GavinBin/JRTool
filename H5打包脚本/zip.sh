#!/bin/bash
#!/usr/bin/php
#请您配置一下样品demo的路径

current_path="$PWD"  # 同 "`pwd`"
path=$(dirname "$PWD")
echo $current_path
#
sampleZipPath=/Users/kl/Desktop/工具箱/1.zip
## 请您配置一下的www生成路径
wwwPath=/Users/kl/Desktop/工具箱
#emmApp=~/Desktop/app
emmApp=~/Desktop/h5app_$(date "+%Y-%-m")

if [  -d "$emmApp" ]; then
cd $emmApp
 for file in `ls `
 do
     echo $file
     rm -r $file
 done
fi

##1.解压zip
unzip -q -o -n $sampleZipPath -d $emmApp
#2.替换WWW包
cd $wwwPath
zip -q -o -r summer.zip www
#3.移动summer.zip
mv summer.zip $emmApp/Web
#4.修改版本号
cd $emmApp/Web
newVersion=Version:1.$(date "+%M.%S")
sed  -i "" 1d WebInfo.txt
sed -i "" '1i\'$'\n\\'$newVersion'' WebInfo.txt
sed -i "" 's/'$newVersion'/& \
/' WebInfo.txt
#5.压缩成zip
cd $emmApp
zip -q -r h5App.zip *
rm -r $emmApp/Web
rm -r $emmApp/AppInfo.txt
open $emmApp


 


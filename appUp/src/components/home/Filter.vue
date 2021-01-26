<template>
  <div>
    <div class="headview">
      <router-link class="home" to="Filter">首页</router-link>
      <a class="yygl">应用管理</a>
      <router-link class="login" to="login">{{name}}</router-link>
    </div>

    <div class="content">
      <div class="updataView">
        <div class="progressView" v-if="loading">
          <a class="progressTitle">应用正在上传,请不要关闭浏览器</a>
          <el-progress
            class="progress"
            :text-inside="true"
            :stroke-width="40"
            :percentage="percentage"
          ></el-progress>
          <p class="progressTitle">{{appname}}</p>
        </div>
        <el-upload
          class="upload-demo"
          v-if="show"
          ref="upload"
          action
          :before-upload="beforeUpload"
          drag
        >
          <i class="el-icon-upload"></i>
          <div class="el-upload__text">
            将文件拖到此处，或
            <em>点击上传</em>
          </div>
        </el-upload>
      </div>
      <div>"注意： 贷款、吸储类应用禁止上传，违反该规则的 App 将被删除。"</div>
    </div>
  </div>
</template>

<script>
import Vue from "vue";
import { Upload, Progress } from "element-ui";
import AppInfoParser from "../lib/app-info-parser.min.js";
import SparkMD5 from "../lib/spark-md5.min.js";
import qs from "Qs";
Vue.use(Upload);
Vue.use(Progress);
let chunkSize = 5 * 1024 * 1024;
let file = null;
let hasUploaded = 0;
let chunks = 0;
let isApk = "";
let downloadurl = "";

export default {
  data() {
    return {
      percentage: 0,
      show: true,
      loading: false,
      showoGuarantor: true,
      appjson: {},
      baseUrl: "",
      appname: "",
      name: "登录"
    };
  },
  mounted() {},
  created() {
    this.name = this.util.getCookie("username");
    this.baseUrl = this.util.baseUrl;
    if (this.name == null) {
      this.name = "登录";
    }
  },
  methods: {
    defineComplete(val) {},
    beforeUpload(files) {
      if (this.util.getCookie("username") == null) {
        alert("请先登录");
        return;
      }

      this.show = false;
      this.loading = true;
      file = files;
      let appsize = file.size / 1000 / 1000;
      appsize = appsize.toFixed(2) + "  MB";
      this.appname = file.name + "   |   " + appsize;
      this.appinfo();
    },
    appinfo() {
      const parser = new AppInfoParser(file);
      parser.parse().then(result => {
        isApk = new RegExp("apk").test(file.name);
        if (isApk) {
          let name = "";
          if (result.application.label.length > 0) {
            name = result.application.label[0];
          }
          var result = {
            CFBundleDisplayName: name,
            bundleid: result.package,
            version: result.versionName,
            icon: result.icon,
            ExpirationDate: "",
            isApk: true
          };
          this.appjson = result;
        } else {
          var date_value = ""
          if(result.ExpirationDate){
          var date = new Date(result.ExpirationDate);
          date_value =
            date.getFullYear() +
            "-" +
            (date.getMonth() + 1) +
            "-" +
            date.getDate() +
            " " +
            date.getHours() +
            ":" +
            date.getMinutes() +
            ":" +
            date.getSeconds();
          }
      if(result.CFBundleDisplayName == null){
         result.CFBundleDisplayName = result.CFBundleName;
      }
      if(result.CFBundleShortVersionString == null){
         result.CFBundleInfoDictionaryVersion = result.CFBundleInfoDictionaryVersion;
      }

          var result = {
            CFBundleDisplayName: result.CFBundleDisplayName,
            CFBundleShortVersionString: result.CFBundleShortVersionString,
            bundleid: result.CFBundleIdentifier,
            version: result.CFBundleVersion,
            "aps-environment":
              result.mobileProvision.Entitlements["aps-environment"],
            ExpirationDate: date_value,
            icon: result.icon,
            isApk: false
          };
          debugger
          //yyyy-MM-dd hh:mm:ss
          this.appjson = result;
        }
        this.upload();
      });
    },
    upload() {
      return new Promise((resolve, reject) => {
        let form = new FormData();
        form.append("data", file); //file对象的slice方法用于切出文件的一部分
        form.append("index", 1); //当前是第几片
        let username = this.util.getCookie("username");

        form.append("username", username);

        var hexHash = SparkMD5.hash(this.appjson.bundleid);
        form.append("bundleid", hexHash);
        form.append("filename", file.name);
        var loaded = 0,
          ot = 0,
          total = 0,
          oloaded = 0; //;

        var xhr = new XMLHttpRequest();
        let _this = this;
        xhr.onload = function uploadSuccess(event) {
          // if (xhr.readyState === 4 && xhr.status === 200) {
          _this.uploadInfo();
          // }
        };

        xhr.upload.onprogress = function setProgress(event) {
          loaded = event.loaded;
          total = event.total;
          var complete = ((event.loaded / event.total) * 100).toFixed(1);
          _this.percentage = Number(complete);
          console.log(complete);
        };
        xhr.open("post", _this.baseUrl + "/upload", true);
        xhr.send(form);
        return;
      });
    },
    uploadInfo() {
      let appsize = file.size / 1000 / 1000;
      appsize = appsize.toFixed(2) + "  MB";
      let _this = this;
      let appjson = JSON.stringify(this.appjson);
      let hexHash = SparkMD5.hash(this.appjson.bundleid);
      let url = this.baseUrl + "/uploadInfo";
      let username = this.util.getCookie("username");
      let usercode = this.util.getCookie("usercode");

      var params = new URLSearchParams();
      params.append("appjson", appjson); //你要传给后台的参数值 key/value
      params.append("bundleid", hexHash);
      params.append("filename", file.name);
      params.append("username", username);
      params.append("usercode", hexHash);
      params.append("appsize", appsize);
      _this
        .$ajax({
          method: "post",
          url: url,
          data: params
        })
        .then(results => {
          if (results.data.status == 0) {
            // 出错
            _this.errormsg = results.msg;
            return;
          } else {
            //成功
            debugger;
            _this.$router.push("/download?appid=" + results.data.data.appid);
          }
        });
    }
  }
};
</script>

<style lang="scss" scoped>
.logo {
  width: 60px;
  height: 60px;
  line-height: 60px;
  img {
    width: 40px;
    height: 40px;
  }
}
.headview {
  width: 100%;
  height: 60px;
  background-color: #009688;
  font-family: 微软雅黑, 黑体;
}
a {
  text-decoration: none;
  padding: 0px 15px;
  color: #fff;
  font: 14px;
  height: 60px;
  line-height: 60px;
}
.login {
  float: right;
}
.updataView {
  background-color: #fff;
  height: 400px;
  min-width: 400px;
  margin: 100px 100px;
  box-shadow: 0 8px 17px 0 rgba(0, 0, 0, 0.2), 0 6px 20px 0 rgba(0, 0, 0, 0.19);
  border-radius: 2px;
  border: 0px;
}
.upload-demo {
  width: 300px;
  height: 300px;
  margin: auto auto;
  padding-top: 100px;
}
.progressView {
  width: 100%;
  height: 400px;
  p {
    text-align: center;
    color: #333;
    margin: 0px;
  }
}
.progressTitle {
  display: block;
  text-align: center;
  color: #333;
  padding-top: 60px;
  margin: 60px auto;
}
.progress {
  padding-top: 60px;
  margin: 0px 16px;
}
</style>
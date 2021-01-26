<template>
  <div>
    <div class="heard" v-if="weixinWeb" id="heaedIcon">点击右上角按钮,然后在弹出的菜单中,点击在safari中打开,即可安装</div>
    <div class="icon">
      <img :src="iconurl" alt />
    </div>
    <div class="titleV">
      <div class="appleicon" v-if="isApk==true" src="@/assets/anzhuo.png" ></div>
      <div class="appleicon" v-if="isApk==false" src="@/assets/apple.png" ></div>
      <p>{{name}}</p>
      <span>企业版</span>
    </div>
    <ul class="content">
      <li>版本：{{version}}</li>
      <li>大小：{{fileSize}}</li>
    </ul>
    <ul class="content">
      <li>更新时间：{{createTime}}</li>
    </ul>

    <div class="qrcode" v-if="ispc">
      <vue-qr class="qrcodeimg" :text="qrcodeurl" :logoScale="50" :size="300"></vue-qr>
    </div>
    <div class="spinner">
      <!-- <div id="showtext">正在安装，请按 Home 键在桌面查看</div>
      <div class="loading"></div>-->
      <a class="btn-u" :href="downloadurl">点击安装</a>
    </div>
  </div>
</template>

<script>
import VueQr from "vue-qr";
import QRCode from "qrcodejs2";
// let baseUrl = "http://localhost:3080";

export default {
  data() {
    return {
      weixinWeb: false,
      codeValue: "sad",
      iconurl: "",
      ispc: false,
      qrcodeurl: "",
      version: "",
      name: "",
      createTime: "",
      filesize: "登录",
      downloadurl: "",
      fileSize: "",
      isApk: true
    };
  },
  created() {
    this.weixinWeb = this.isWeiXin();
    this.baseUrl = this.util.baseUrl;
    this.ispc = this.IsPC();
    if (this.ispc) {
      this.qrcodeurl = this.baseUrl + "/#" + this.$route.fullPath;
    }
    if (this.$route.query.appid) {
      this.getAppInfo(this.$route.query.appid);
    }
  },
  components: {
    VueQr
  },
  mounted() {},
  methods: {
    installClick() {},
    IsPC() {
      /*true则pc，false则mobile*/
      let u = navigator.userAgent;
      let Agents = [
        "Android",
        "iPhone",
        "webOS",
        "BlackBerry",
        "SymbianOS",
        "Windows Phone",
        "iPad",
        "iPod"
      ];
      let flag = true;
      for (let i = 0; i < Agents.length; i++) {
        if (u.indexOf(Agents[i]) > 0) {
          flag = false;
          break;
        }
      }
      return flag;
    },

    isWeiXin() {
      var ua = window.navigator.userAgent.toLowerCase();
      if (ua.match(/MicroMessenger/i) == "micromessenger") {
        return true; // 是微信端
      } else {
        return false;
      }
    },
    getAppInfo(appid) {
      let _this = this;
      var params = new URLSearchParams();
      params.append("appid", appid); //你要传给后台的参数值 key/value
      let url = _this.baseUrl + "/appinfo";
      _this
        .$ajax({
          method: "post",
          url: url,
          data: params
        })
        .then(results => {
          if (results.data.status == 0) {
            // 出错
            _this.errormsg = results.data.msg;
            return;
          } else {
            let result = results.data.data[0];
            _this.createTime = result.createTime;
            _this.name = result.CFBundleDisplayName;
            _this.version = result.version;
            _this.fileSize = result.appsize;
            var arr = [
              _this.baseUrl,
              "nodeServer/uploads",
              result.username,
              result.usercode
            ];
            _this.iconurl = arr.concat("icon.png").join("/");
            var type = /\.[^\.]+$/.exec(result.filename);
            if (type[0] == ".ipa") {
              _this.isApk = false;

              _this.downloadurl =
                "itms-services://?action=download-manifest&url=" +
                arr.concat("info.plist").join("/");
            } else {
              _this.isApk = true;
              _this.downloadurl = arr.concat(result.filename).join("/");
            }
          }
        });
    }
  }
};
</script>

<style lang="scss" scoped>
.icon {
  img {
    width: 100px;
    height: 100px;
    margin: 0px auto;
    margin-top: 20px;
    display: block;
    border-radius: 25px;
  }
  width: 100%;
  height: 130px;
}
.titleV {
  display:flex;
  width: 230px;
  height: 33px;
  margin: 0px auto;
  text-align: center;
  line-height: 33px;
  .appleicon {
    width: 19px;
    text-align: center;
      line-height: 33px;
    display: block;
    background:url("../../assets/apple.png") no-repeat center;
    background-size:20px;
  }
  p {
    margin-left: 10px;
    display: inline-block;
    font-size: 24px;
    color: #333;
    line-height: 33px;
    text-align: center;
    flex:1;
  }
  span {
    line-height: 25px;
    height: 25px;  
    background-color: #40acf1;
    text-align: center;
    display:block;
    border-radius: 0.25em;
    color: #fff;
    padding: 0 5px;
    margin-left:10px;
    margin-top:5px;
  }
}
.content {
  list-style: none;
  height: 33px;
  text-align: center;
  font-size: 14px;
  line-height: 33px;
  width: 100%;
  height: 33px;
  margin-top: 15px;
  li {
    display: inline;
    margin: 0px 5px;
  }
}
.qrcode {
  margin-top: 10px;
  width: 100%;
  height: 100px;
  text-align: center;
  .qrcodeimg {
    width: 100px;
    height: 100px;
    /* border: 1px solid #c2c2c2; */
    cursor: pointer;
    transition: all 0.6s;
    margin: 0px auto;
  }
  .qrcodeimg:hover {
    transform: scale(1.2);
  }
}
.btn-u:hover {
  background: #28caad;
}
.btn-u {
  text-align: center;
  color: #fff;
  background: #28caad;
  border: 1px solid #28caad;
  font-size: 18px;
  line-height: 44px;
  width: 200px;
  height: 44px;
  border-radius: 30px;
  margin: 0px auto;
  display: block;
}
.spinner {
  margin-top: 20px;
  width: 100%;
  height: 200px;
}
.heard {
  background: #24292e;
  color: #fff;
  width: 100%;
  height: 60px;

  text-align: center;
  padding-top: 20px;
  padding-left: 20px;
  /* display: none; */
}
a {
  text-decoration: none;
}
</style>
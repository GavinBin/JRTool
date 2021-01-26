<template>
  <div>
    <div class="headview">
    <router-link class="home" to="Filter">App商店</router-link>
      <a class="yygl">应用管理</a>
      <a class="navlogin">{{name}}</a>
    </div>
    <div class="content">
      <p>账号登录</p>
      <div class="registered">
          还没有注册吗?
           <router-link class="color-green" to="registered">去注册</router-link>
      </div>
      <el-input class="userName" placeholder="请输入您的邮箱" v-model="username"></el-input>
      <label class="error" v-if="errormsg">{{errormsg}}</label>
      <el-input class="passWord" v-model="password" placeholder="请输入密码"></el-input>
      <el-button class="login" @click="loginBtnClick" type="primary" plain>登录</el-button>
    </div>
  </div>
</template>

<script>
import Vue from "vue";
import { Input, Button } from "element-ui";
Vue.use(Button);
Vue.use(Input);
export default {
  components: {},
  data() {
    return {
      username: "",
      password: "",
      errormsg:"",
      name:"登录"
    }
  },
    created() {
    this.baseUrl = this.util.baseUrl;

    if (this.$route.params.username) {
      this.username = this.$route.params.username
    }
  },
  methods: {
    loginBtnClick() {

      if(this.username.length == 0){
        this.errormsg = "请输入用户邮箱"
        return;
      }
     if(this.password.length < 6){
        this.errormsg = "密码必须6位以上"
        return;
      }

      let _this = this;
      let url = this.baseUrl + "/dologin";
      var params = new URLSearchParams();
      params.append("username", this.username); //你要传给后台的参数值 key/value
      params.append("password", this.password);
     _this.$ajax({
        url:url,
        method:"post",
        data:params
    }).then(results => {
      if(results.status == 0){ // 出错
        _this.errormsg = results.msg;
        return
      }else{ //成功
      debugger
          _this.name = _this.username;
          _this.util.setCookie("username",_this.username, 24); //设置用户编号
         _this.$router.push({
            name: "Filter",
          });
      }
    })
      //  this.$router.go(-1);
    }
  }
};
</script>


<style lang="scss" scoped>
.navlogin {
 float: right;
}
.headview {
  width: 100%;
  height: 60px;
  background-color: #009688;
  font-family: 微软雅黑, 黑体;
}
a {
  text-decoration : none;
  padding: 0px 15px;
  color: #fff;
  font: 14px;
  height: 60px;
  line-height: 60px;
}
.content {
  padding-left: 6%;
  padding-right: 6%;
  border: 1px solid #e7ebed;
  width: 450px;
  margin: 50px auto;
  p {
    color: #333;
    font-size: 20px;
    margin-top: 5px;
    display: block;
    margin: 50px auto;
    margin-bottom: 15px;

    width: 200px;
    height: 30px;
  }
}
.userName {
  /* background-color: #f8f8f8; */
  width: 300px;
  font-size: 14px;
  height: 44px;
  display: block;
  margin: auto;
  margin-top: 0px;
  padding: 6px 12px;
  font-weight: 700;
}
.passWord {
  font-weight: 700;
  /* border: 1px solid #e7ebed; */
  /* background-color: #f8f8f8; */
  width: 300px;
  height: 44px;
  display: block;
  margin: auto;
  margin-top: 20px;
  padding: 6px 12px;
}
.login {
  font-weight: 700;
  width: 280px;
  height: 44px;
  display: block;
  padding: 6px 12px;
  background: #1abc9c !important ;
  color: #fff !important ;
  margin: 50px auto;
}
.registered{
 color: #a0a0a1;
 width: 100%;
 height: 40px;
 text-align: right;
 /* display: block; */
/* margin-top: 15px; */
}

.color-green{
  line-height: 40px;
  color: #1abc9c;
  font-size: 14px;
  text-align: right;
}
.color-green a:hover{ 
  color:#fff;
  width:20px;
  }
.error{
  display: block;
  font-size: 14px;
  color: #ee9393;
  width: 300px;
  height: 22px;
  margin: auto;
  padding-left: 10px;
  /* margin-bottom: 20px; */
  padding: 5px 12px;
}
</style>
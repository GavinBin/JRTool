<template>
  <div id="app">
    <router-view />
  </div>
</template>

<script>

export default {
  name: 'App',
  components: {
    
  }
}
</script>

<style lang="scss">
*{
    padding:0;
    margin:0;
    box-sizing:border-box;
    outline:none;
}
body,html{
    width:100%;
    height:100%;
    background:#f3f3f3;
    overflow: hidden;
}
$color:"red";
.van-dialog__confirm{
    color:$color !important;
}
input,textarea{
    border:none;
}
.van-picker__cancel{
  color: #2D2D2D;
}
.van-picker__confirm{
  color: #E60012;
}
.publicLoading{
  background:transparent;
  .van-loading{
    text-align:center;
  }
  .van-loading__text{
    color:#fff;
  }
}
.main-container{
  width:100vw;
  height:100vh;
  background:#f3f3f3;
  overflow: hidden;
}
.search-model{
  overflow: hidden;
}.search-model .van-index-anchor {
  padding: 0 !important;
}


</style>
<template>
  <el-collapse v-model="activeNames" @change="handleChange">
    <el-collapse-item :title="item.brief" :name="item.id" v-for="item in list" :key="item">
      <div>控制反馈：通过界面样式和交互动效让用户可以清晰的感知自己的操作；</div>
      <div>页面反馈：操作后，通过页面元素的变化清晰地展现当前状态。</div>
    </el-collapse-item>
  </el-collapse>
</template>

<script>
import Vue from "vue";
import { Upload, Progress } from "element-ui";
import { Collapse, CollapseItem } from "element-ui";

Vue.use(Collapse);
Vue.use(CollapseItem);

export default {
  data() {
    return {
      url:
        "https://app.aigupiao.com/api2/live_center_v3.php?act=msg&division=3&id=57&igptoken=ZmU4MDo6MTE4MjoyZTU2OjRlZmU6OTMzMl8xNTU4MjYyNDQ0XzE1NTgyNjE4NDRfZGRjZWU5OTQ1MTcwMDZmZjM2ZmJjZTY1MTFlNGM3YTc%3D&lgStatus=aa13d1715e8bb1fd74a5b411b8ac8e54&mds=aa13d1715e8bb1fd74a5b411b8ac8e54&sign=ec314d234eab9b5f0bdc13fbb9a29bbe&source=ios&time=1558261844&u_id=395601",
      urlinfo:
        "https://app.aigupiao.com/api2/live_msg.php?act=msg_detail&igptoken=ZmU4MDo6MTE4MjoyZTU2OjRlZmU6OTMzMl8xNTU4MjYyOTM0XzE1NTgyNjIzMzRfZGRjZWU5OTQ1MTcwMDZmZjM2ZmJjZTY1MTFlNGM3YTc%%3D&lgStatus=aa13d1715e8bb1fd74a5b411b8ac8e54&m_id=%@&mds=aa13d1715e8bb1fd74a5b411b8ac8e54&newest=yes&sign=eb3596220e2d560f2f4769c24dba08d5&source=ios&time=1558262334&u_id=395601&version=390",
      list: []
    };
  },
  mounted() {},
  created() {
    this.uploadInfo();
  },
  methods: {
    handleChange(item) {
      let buildID = item[0];
      let infoUrl =
        "https://app.aigupiao.com/api2/live_msg.php?act=msg_detail&igptoken=ZmU4MDo6MTE4MjoyZTU2OjRlZmU6OTMzMl8xNTU4MjYyOTM0XzE1NTgyNjIzMzRfZGRjZWU5OTQ1MTcwMDZmZjM2ZmJjZTY1MTFlNGM3YTc%%3D&lgStatus=aa13d1715e8bb1fd74a5b411b8ac8e54&m_id=" +
        buildID +
        "&mds=aa13d1715e8bb1fd74a5b411b8ac8e54&newest=yes&sign=eb3596220e2d560f2f4769c24dba08d5&source=ios&time=1558262334&u_id=395601&version=390";
      let _this = this;
      _this
        .$ajax({
          method: "get",
          url: infoUrl,
        })
        .then(results => {
          debugger;
          if (results.status == 200) {

          }
        });
    },
    uploadInfo() {
      let _this = this;
      _this
        .$ajax({
          method: "get",
          url: _this.url
        })
        .then(results => {
          if (results.status == 200) {
            _this.list = results.data.msg_list;
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
</style>
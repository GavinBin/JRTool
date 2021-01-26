import Vue from 'vue'
import VueRouter from 'vue-router'
import Filter from '@/components/home/Filter'
import download from '@/components/home/download'
import login from '@/components/home/login'
import registered from '@/components/home/registered'
import daofen from '@/components/home/daofen'

Vue.use(VueRouter);
let mainRouter = new VueRouter({
    mode:"hash",
    routes: [ 
      {
        path: '/login',
        name: 'login',
        meta:{index:0},
        component: login,
      },{
        path: '/download',
        name: 'download',
        meta:{index:0},
        component: download,
      },{
        path: '/registered',
        name: 'registered',
        meta:{index:0},
        component: registered,
      },{
        path: '/',
        name: 'Filter',
        meta:{index:0},
        component: Filter,
      },{
        path: '/Filter',
        name: 'Filter',
        meta:{index:0},
        component: Filter,
      },{
        path: '/daofen',
        name: 'daofen',
        meta:{index:0},
        component: daofen,
      },
    ]
  })
  
export  default  mainRouter;
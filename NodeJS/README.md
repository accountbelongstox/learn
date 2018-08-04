# Node.js

- nrm工具,`nrm use taobao`切换到淘宝下载地址

# Express

## multer

- 用来解析from`mulitpart/form-data`下面上传的文件数据

```
const multer = require("multer")
//接受全部文件.
multer.any();
```

## consolidate

- 用于帮助Express适合模版引擎

```
web.set("view engine","html");
web.set("views","./template");
//用来适配模版
web.engine("html",consolidate.ejs);
```

## 路由

- 将路由对应到模块

```
let web = express.Router();
web.get("/xxx.html",function(req,res){
    res.render("xx.ejs",{
        title:"xxx"
    })
});
app.use(web);
```

# Meteor
## 安装
- windows下安装`choco install meteor`,如果choco失效`https://install.meteor.com/windows`
- linux`curl curl https://install.meteor.com/ | sh`

## 创建项目
- 创建新项目`meteor create project_name`
- 创建示例项目`meteor create --list`

## 运行项目
- `meteor`
> 运行的项目默认监听`3000`端口。

### 运行IOS模拟器
- `meteor add-pl`,`meteor run ios`

## 常用命令
- 查看帮助`meteor help`
- 创建项目`meteor create <project name>`
- 创建本地Meteor包`meteor create --package <package-name>`
- 在IOS或者Android下运行(IOS必须在MAC下)`meteor run <ios|android>`
- 添加包`meteor add <package name>`
- 删除包`meteor remove <page name>`
- 添加ios|android运行环境`meteor add-platfrom <ios|android>`

## 目录结构
```
project  WEB部署目录（或者子目录）
├─client           应用目录
│  ├─js                 JS执行文件
│  ├─slylesheets        样式目录 
│  │  ├─style.css       样式表
│  │  └─ ...            
│  └─templates          模块目录
│     ├─index.html      首页文件
│     └─ ...    
├─lib                   扩展目录
├─public                公共目录
└─server                服务端目录
```

## 模版命令
- Inclusion-嵌入模版
> 插入模版`{{> template_name}}`

- Expression-嵌入数据
> `{{title}}`

- Block Helper 控制流程
> `{{each}}{{/each}}`,`{{if}}{{/if}}`

## 命令

+ `meteor shell`
+ `meteor mongo`

### Mongo

```
Mongo.insert();
Mongo.update();
```

#### meteor数据

- `MongoDB`取得的数据为游标.需要使用`fetch()`来取得.

### 发布和订阅
- 发布数据`publish()`
```
Meteor.publish("dataName",function(){
	return Posts.find();
})
```

- 订阅数据`subscribe()`
```
Meteor.subscribe("dataName");
```

### autopublish自动发布

# phpstorm
## 快捷键
|键|功能|
|:-|:-|
|ALT+F1|手动定位文件位置|
|Ctrl+E|快速打开你最近编辑的文件|
|Ctrl+J|常用代码片段|
|CTRL+SHIFT+N|文件名查找|
|CTRL+SHIFT+ALT+N|函数名查找|
|Ctrl+b<br />ctrl+单击|快速寻找方法,变量定义处|
|ALT+F7|找到该函数或类在哪里调用|
|两次shift|搜索所有|
|ctrl+alt+l|代码格式化|
|shift+F6|可以重命名函数方法名、变量名，文件名，函数名可以搜索引用的文件。还可以重命名标签名|
|Ctrl + /|单行注释|
|Ctrl + Shift + /|多行注释,块注释 |
|/** + Enter|自动生成注释|
|Ctrl + Shift + X|运行命令|
|ctrl + shift + u|大小写 |
|Ctrl + Shift + A |Ctrl + Shift + A 是一个比较重要的快捷键，主要用于寻找PHPStorm IDE内所有的动作。|
|Ctrl + Y|删除光标所在行 或 删除选中的行 （必备）|
|Ctrl + D|复制光标所在行 或 复制选择内容|
|Ctrl + W|递进式选择代码块<br />可选中光标所在的单词或段落，<br />连续按会在原有选中的基础上再扩展选中范围 （必备）|
|Ctrl + N|根据输入的 类名 查找类文件|
|Alt + Enter|根据光标所在问题，<br />提供快速修复选择，<br />光标放在的位置不同提示的结果也不同|
|Ctrl + Alt + O|优化导入的类|
|Ctrl + Alt + 左方向键|退回到上一个操作的地方|
|Ctrl + Alt + 右方向键|前进到上一个操作的地方|
|Ctrl + Shift + F|根据输入内容查找整个项目 或 指定目录内文件|
|Ctrl + Shift + R|根据输入内容替换对应内容，|
|Ctrl + Shift + J|自动将下一行合并到当前行末尾 |
|Ctrl + Shift + W|递进式取消选择代码块。|
|Ctrl + Shift + U|对选中的代码进行大小写轮流转换|
|Ctrl + Shift + Enter|自动结束代码，行末自动添加分号|
|F2|跳转到下一个高亮错误 或 警告位置|
|Ctrl + F|在当前文件进行文本查找|
|Ctrl + R|在当前文件进行文本替换|
|Ctrl + Q|光标所在的变量 / 类名 / 方法名等上面|
|Ctrl + U|前往当前光标所在的方法的父类的方法 / 接口定义|
|Alt + 7|显示类中的方法|
|Alt + 0|显示项目|

- - -

## 更多快捷键查询
> [http://blog.csdn.net/fenglailea/article/details/53350080](http://blog.csdn.net/fenglailea/article/details/53350080)

## 技巧
|名字|说明|
|:-|:-:|
|PHP手册|Preferences -> Tools->External Tools <br />-a  http://php.net/manual/zh/function.$SelectedText$.php|
|z-coding功能|z-coding是一个让你写html可以事半功倍的东西，比如你在html文件里输入ul.nav>li*5>a然后按Tab键，马上|

# composer(作曲家)

## 如果报错,则升级composer 

1. 安装`php -r "readfile('https://getcomposer.org/installer');" | php` 
2. 全局安装`mv composer.phar /usr/local/bin/composer`
3. 安装中国全量镜像`composer config -g repo.packagist composer https://packagist.phpcomposer.com`
4. 忽略版本匹配`composer install/update --ignore-platform-reqs`
5. 安装插件包`composer global require "fxp/composer-asset-plugin:1.2.0"`
6. 创建项目`composer create-project doctrine/orm path 2.2.*`

## composer常用参数

1. `--repository-url`: 提供一个自定义的储存库来搜索包，这将被用来代替 `packagist.org`。可以是一个指向 `composer` 资源库的 HTTP URL，或者是指向某个 `packages.json` 文件的本地路径。
2. `--stability (-s)`: 资源包的最低稳定版本，默认为 `stable`。
3. `--prefer-source`: 当有可用的包时，从 `source` 安装。
4. `--prefer-dist`: 当有可用的包时，从 `dist` 安装。
5. `--dev`: 安装 `require-dev` 字段中列出的包。
6. `--no-install`: 禁止安装包的依赖。
7. `--no-plugins`: 禁用 `plugins`。
8. `--no-scripts`: 禁止在根资源包中定义的脚本执行。
9. `--no-progress`: 移除进度信息，这可以避免一些不处理换行的终端或脚本出现混乱的显示。
10. `--keep-vcs`: 创建时跳过缺失的 `VCS` 。如果你在非交互模式下运行创建命令，这将是非常有用的。

## composer自我更新`self-update`
- 将 Composer 自身升级到最新版本`composer self-update`
- 升级到特定版本`composer self-update 1.0.0-alpha7`
- 全局升级时需要`sudo composer self-update`
- 自我更新参数`--rollback (-r)`: 回滚到你已经安装的最后一个版本。`--clean-backups`: 在更新过程中删除旧的备份，这使得更新过后的当前版本是唯一可用的备份。

## composer搜索`search`
- `search` 命令允许你为当前项目搜索依赖包，通常它只搜索 `packagist.org` 上的包，你可以简单的输入你的搜索条件。
- composer `search`参数. `--only-name (-N)`: 仅针对指定的名称搜索（完全匹配）。
> `php composer.phar search monolog`

## composer申明依赖`require`
- `require` 命令增加新的依赖包到当前目录的 `composer.json` 文件中。
- `php composer.phar require vendor/package:2.* vendor/package2:dev-master`
 - **composer申明依赖require参数**
 - `--prefer-source`: 当有可用的包时，从 `source` 安装。
 - `--prefer-dist`: 当有可用的包时，从 `dist` 安装。
 - `--dev`: 安装 `require-dev` 字段中列出的包。
 - `--no-update`: 禁用依赖关系的自动更新。
 - `--no-progress`: 移除进度信息，这可以避免一些不处理换行的终端或脚本出现混乱的显示。
 - `--update-with-dependencies` 一并更新新装包的依赖。

## composer更新vender`update`
- 全局更新`php composer.phar update`
- 指定更新`php composer.phar update vendor/package vendor/package2` 或者`*`通配符.`php composer.phar update vendor/*`
 - **composer更新update参数**
 - `--prefer-source`: 当有可用的包时，从 `source` 安装。
 - `--prefer-dist`: 当有可用的包时，从 `dist` 安装。
 - `--dry-run`: 模拟命令，并没有做实际的操作。
 - `--dev`: 安装 `require-dev` 字段中列出的包（这是一个默认值）。
 - `--no-dev`: 跳过 `require-dev` 字段中列出的包。
 - `--no-scripts`: 跳过 `composer.json` 文件中定义的脚本。
 - `--no-plugins`: 关闭 `plugins`。
 - `--no-progress`: 移除进度信息，这可以避免一些不处理换行的终端或脚本出现混乱的显示。
 - `--optimize-autoloader (-o)`: 转换 `PSR-0/4 autoloading` 到 `classmap` 可以获得更快的加载支持。特别是在生产环境下建议这么做，但由于运行需要一些时间，因此并没有作为默认值。
 - `--lock`: 仅更新 `lock` 文件的 `hash`，取消有关 `lock` 文件过时的警告。
 - `--with-dependencies` 同时更新白名单内包的依赖关系，这将进行递归更新。

## composer安装`install`
- 安装vender包`php composer.phar install`
 - **composer安装vender参数**
 - `--prefer-source`: 下载包的方式有两种： `source` 和 `dist`。对于稳定版本 `composer` 将默认使用 `dist` 方式。而 `source` 表示版本控制源 。如果 `--prefer-source` 是被启用的，`composer` 将从 `source` 安装（如果有的话）。如果想要使用一个 `bugfix` 到你的项目，这是非常有用的。并且可以直接从本地的版本库直接获取依赖关系。
 - `--prefer-dist`: 与 `--prefer-source` 相反，`composer`将尽可能的从 `dist` 获取，这将大幅度的加快在 `build servers` 上的安装。这也是一个回避 `git` 问题的途径，如果你不清楚如何正确的设置。
 - `--dry-run`: 如果你只是想演示而并非实际安装一个包，你可以运行 `--dry-run` 命令，它将模拟安装并显示将会发生什么。
 - `--dev`: 安装 `require-dev` 字段中列出的包（这是一个默认值）。
 - `--no-dev`: 跳过 `require-dev` 字段中列出的包。
 - `--no-scripts`: 跳过 `composer.json` 文件中定义的脚本。
 - `--no-plugins`: 关闭 `plugins`。
 - `--no-progress`: 移除进度信息，这可以避免一些不处理换行的终端或脚本出现混乱的显示。
 - `--optimize-autoloader (-o)`: 转换 `PSR-0/4 autoloading` 到 `classmap` 可以获得更快的加载支持。特别是在生产环境下建议这么做，但由于运行需要一些时间，因此并没有作为默认值。

## composer加载库
- 直接`include`引入`vendor`下的`autoload.php`,则所有的库都自动引入.  `use` 该空间类名.则可以直接调用

```
	#载入vender的自动加载类
	require(__DIR__."vendor/autoload.php");
	#使用vender下的第三方类
	use Psr/Log/Logger;
```

## 配置文件格式

```
	{
		"require":{
			"yiisoft/yii2-app-basic":"~" //厂商/类库/版本号.
		}
	}
```

## 版本号 

```
	>=1.0,<2.0 dd  >= 1.0并且 <2.0
	1.0.* *通配符
	~1.2 赋值,相当于版本号的最后一位数可提升. 相当于>=1.2,<2.0
```

- - -

# yii框架

> [本地练习域名](http://yii2.localhos)

## 注事意项

> 使用归档文件(压缩)安装的yii ,需要手动配置config/web.php里的 cookieValidationKey  
帮助文件 www.yiichina.com/doc/guide/2.0

## 目录

|Yii模块名|功能|
|:-|:-------|
|commands|控制台命令类|
|comtrollers|控制器|
|models|模型类|
|vendor|第三方扩展|
|views|视图|
|config/console.php|控制台配置|
|comfig/web.php|web应用配置|
|yii.bat|控制台命令执行脚本|

## 执行流程

![执行流程](https://bytebucket.org/xiongdeid1986/study/raw/41cdc313b5366ed1025f28c239ffcbee680b91a4/static/php/execute_process.png?token=459fca9fb16ddc5144f6112875a3d1f3959ad4ec)

## 目录功能简要
- 控制器在controllers下
- 控制器中的方法aciontIndex()

## 执行路由
- index.php?r=xxx/xxx 通过r参数来访问

## 全局工具函数
- 直接引入文件

## GET和POST
```
	$app = \Yii::$app->request;
	$id = $app->get("id");
	$id = $app->post("id");
```

- - -

### 判断是否GET和POST
```
	if($app->isGet){}//
	if($app->isPost){}//
```

## 自执行函数
```
	function init()
	{
		echo "init";
	}
```

## 传参到视图

### 传递单数组
`$this.render("index",$data);`

### 多数组传递
`$this->render("index",conpact("data"));`使用`compact()`函数

## yii模版引擎写入视图的简化写法
```
<?= $data["title"]; ?>
```

### 视图数据分配 
```
	return $this->render("data",$data);
	return $this->renderPartial("data",$data);
```

## 防SQL注入
	\Yii\helpers\Html::encode($str);//转义特殊字符串
	\Yii\helpers\HtmlPurifier::process($str);//过滤特殊字符串

## 模型
```
use \yii\db\ActiveRecord;
//需要引入ActiveRecord;
```

### 模型常用
```
	DB::findBySql();
	DB::findOne();
	//占位符.防SQL攻击
	Article::findBySQL("select * from article where id=:id",[":id" => $id])->all();
```

### 互相调用
- `$this->renderPartial("index"`不会渲染父模版
- `$this->render("index"`会渲染父模版
- 在`controller`中指定`public $layout = "head";`将会更改父模版
- 父模版存在于`views/layouts/main`

```
	public $layout = "head";
	public function actionIndex()
	{
		$this->renderPartial("index");
	}
	
	public function actionAbout()
	{
		$this->render("index");
	}
```

- 在父模版中的使用`$content`,将是子模版的内容

```
	<h1>this parent!</h1>
	<p>output parent content!</p>
	<?=$content;?>
```

### SQL防注入

### Yii模型
- `asArray()`用来优化查询到的数据,转为数组可以大大优化内存`findOne($id)->asArray()->all()`

#### 模型查找记录
- 模型名,数据表名一致,必须继承基类`\yii\db\ActiveRecord;`
- 数据查询

|方法|功能|
|findAll([1,2,3])|查找id->1,2,3|
|find()<br />->asArray()<br />->all()|查找所有|

- 为了节省内存,将对象转为数组,或者使用`batch()`方法.分段取

```
foreach(Article:find()->batch(2) as $article)
{
	$data[] = $article;
}
return $data;
```

- one`find()->where()->one()`方法

```
$Article = Article::find()->where(["id"=>1])->one();
```

- all`find()->where()->all()`方法,需要使用`$result[0]`索引取得获得到的数据

```
$result = Article::find()->where(["id"=>1])->all();
$data = $result[0];
```

#### 模型添加记录
- 使用`insert()`或`save()`方法添加

```
$Article = new Article();
$Article->title = "标题";
$Article->content = "内容";
$data = $Article->insert();
$data = $Article->save();
//取得ID
$id = $Article->attributes["id"];
return $id;
```

- 使用`$Article->attributes["id"]`取得添加后的数据的`id`值

#### 模型修改记录
- 使用`$Article->update();`或者`save();`方法修改.

```
$Article = Article::findOne($id);
$Article->title = "新的标题";
$data = $Article->update();
$data = $Article->save();
dd($data);
```

##### 更新单个字段使用
- 更新单个字段使用`updateAllCounters(["num"=>1],["id"=>8])`统计.
> 参数1=需要自增的字段和增量,参数2=条件.

#### 模型删除记录
- 先使用`findOne()`查找再`->delete()`删除
- `deleteAll("id=:id",[":id"=>1])`删除方法
```
$Article = Article::find()->where(["id"=>1])->all();
$data = $Article->delete();
```

### 多表关联查询

#### 一对多关系
- 通过分类`CategoryId`去取文章`Articles`
- 使用`hasMany()`关联.
- `hasMany`参数1传入`模型namespace`,参数2传入`关联ID`

```
$category = Category::findOne($CategoryId);
$articles = $category->hasMany("app\models\Article",["cat_id"=>"id"])->all();
//or 也可以使用 className()方法返回
$articles = $category->hasMany(Article::className(),["cat_id"=>"id"])->all();
```

- Yii可以使用`$Article::className()`来代替传入的`namespace`

#### 一对一关系
- 通过文章来查询分类的一对一关系.`hasOne()`
- `hasOne`参数1传入`模型namespace`,参数2传入`关联ID`
- `with`方法, 原理是`join`查询方法.

```
$Article = Article::find()->with("category")->asArray()->all();
```

## Yii学习视频(已完结)
`F:\BaiduYunDownload\Yii2.0框架开发实战视频教程`

- - -

# laravel
> 帮助文档:<http://laravelacademy.org/laravel-docs-5_2>

## laravel安装.
- `composer`安装laravel`composer create-project laravel/laravel --prefer-dist laravel`
- 指定版本安装`composer create-project laravel/laravel=5.5.28 laravel`
- `artican`lavarel的命令行工具.

## lavarel路由
- `artisan`列出路由`php artisan route:list`
- 所有应用路由都定义在` App\Providers\RouteServiceProvider` 类载入的`app/Http/routes.php` 文件中。
- `lavarel 5.6`移至`__ROOT__/routes/`
- *基础路由参数*
```
    #匹配全部
    Route::any("/{id}/{active}",function($id,$active){
        return "Id = "$id;
    });
    #匹配部份,通过match
    Route::match(["post","get"],"/xxx/{user?}",function($user=""){
        return $user;
    })
    #匹配Get
    Route::get("/",function(){
        return view("welcome");
    });
    #路由参数可选 在结尾加一个?号 ,如{id?}
    #多个可选参数时,只有最后一个可用.会报错.
    Route::any("/{id?}/{active}",function($id=0,$active){
        return "Id = "$id;
    });
    #配置路由访问控制器 (分组\控制器@方法) 只能使用\,不能使用/
    Route::any("index","Admin\IndexController@index");
```

- *高级路由*-路由命令
```
    #路由命名,as=>对应名字.uses=>对应的控制器名称.
    Route::get("/",[
        "as" => "profile",
        "uses" => "Admin\IndexCtroller@index"
    ]);
    #使用路由
    echo "routename".route("profile");
    #使用方法来定义路由名
    Route::get("/","Admin\IndexController@index")->name("RouteName");
```

- *高级路由*-路由分组
```
    Route::group([
        "prefix"=>"admin",
        "namespace"=>"admin",
    ],function(){
        Route::any("index","IndexController@index");
        Route::any("login","IndexController@login");
    });
```

- *高级路由*-RESTful资源控制器
```
    #资源路由会彼自动将get,post,delete,put,分发到控制器的action@get,action@post...等方法.
    Route::resource("article","ArticleController");
```

- *高级路由*-中间件
> artisan创建`php artisan make:middleware AdminLogin`  
```
    #特殊的中间件`middleware`=>`web`.路由会自动引入`web`分组.
    Route::gorup([
        "middleware"=>"web"
    ],function(){
        #通过中间件可以让session在分组中多个路由之间生效.
        Route::get("/",function(){
           session(["key"=>123]); 
           return "";
        });
        Route::get("/test",function(){
           return session("key"); 
        });
    });
    #中间件定义在app/Kernel.php;
    #中间件文件在app/Middleware/xxx.php
    #使用中间可以实现baseController的效果.
    #step1
    php artisan make:middleware AdminIsLogin
    #step2
    Route::group([
        "middleware"=>"AdminIsLogin",
        "prefix"=>"admin",
        "namespace"=>"admin",
        ],function(){
        Route::any("index","IndexControll@index");
    })
    #step3
    app/middleware/AdminIsLogin;
    redirect("Admin/login");
```

## laravel跳转函数redirect()
- `return redirect("admin/login");`

## laravel控制器`app/Http/AppGroup/Controllers`
1. artisan创建`php artisan make::controller XxxController`
2. 控制器分组.`app/Http/Controllers/AGroup`,`app/Http/Controllers/BGroup`

## laravel视图`view`
1. 视图文件夹`resources/view/xxxx.php`
2. `view("xxxx");`将直接分配至模板文件.
3. `view("xxx",$data)`装饰`$data`分配至模版.并在模板中使用`{{@xxx}}`获取.
4. `vive("xxx",compact("data1","data2"))`可以合并分配变量.

### laravel-blade模板引擎.
1. 输入变量`{{$xxx}}`.屏蔽输出`@{{@xxx}}`.添加`@`会屏蔽模板
2. 使用函数表达式:`{{isset($xxx)?$xxx:""}}`.或者`{{$name or "default"}}`;
3. 使用`!!`将不转义字符串.`{{!! $scriptStr !!}}`将原样输出字符.不过滤`JavaScript`代码.
4. 模版引擎流程控制-判断.
```
    #判断
    @if($xxx>10)
        xxxxx
    @else
        xxxxx
    @if
    
    #取反判断
    @unless($xxx == 100)
    xxxxxx
    @endunless
    
    #for循环
    @for($i=0;$i<1000;$i++)
        {{$v}}
    @endfor
    
    #foreach循环
    @foreach($xxx as $v)
        {{$v}}
    @endforeach
    
    #取反循环
    @forelse($xxx as $v)
        {{$v}}
    @empty
        void.xxxxx
    @endforelse
```

### laravel-blade模板子视图.
1. `@include("common.header")`包含另一个子视图页面.由包含了`resources/views/common/header.blade.php`.
2. 传参`@include("common.header",["pagename"=>"新闻中心"])`.第二个参数可以传数组.

### blable-layouts方式注入内容.
1. 公共模板`resouces/views/layouts/home.blade.php`.待注入内容区域`@yield("content")`
2. 主模板中也可以使用`@section`来声明内容.可以让子视图替换.但不可用`@endsection`断句.使用`@show`来断句.`@section("content") xxx @show` 
2. 继承模板`@extends("layouts.home")`
3. 声明需要注入替换的区域代码`@section("content") xxxContent @endsection`;
4. 在子模板中替换`yield`时.引用父模版的内容`@parent`

## laravel-ENV-环境配置文件.
1. `__ROOT__/.env`全局配置.为了多人开发时,大家无须配置一致.各自使用自身电脑的配置即可正常运行项目.
2. `APP_DEBUG`是否开启DEBUG
3. `SESSION_LIFETIME`session时间.
4. `config/app.php`使用`evn();`来优先读取`.env`文件.
5. `config("xxx");`该函数的使用和`thinkphp`一致.

## laravel-数据库
- 数据库基本
1. `DB::table("tablename")->where(["id"=>123])->get();`
2. `DB::table("tablename")->add($data);`

### laravel-ORM模型操作数据库
- artisan建立模型`php artisan make:model xxxx`
> Model的几个基本属性
```
    #表名
    protected $table = "user";
    #主ID
    protected $primaryKey = "id";
    #是否在更新表时插入laravel特定的时间字段
    public $timestamps = false;
```

### lararel-Migration数据库
1. `Migration`用于数据库结构不统一的问题.
2. `php artisan make:migration table_name`将自动生成数据库`migration到database\migrasion\xxxx-xx-xx.php`
3. `php artisan migrate`执行`make:migration`生成的数据PHP
4. 执行migration`php artisan migrate` 执行migration/xxx->up方法. 回滚migration`php artisan migrate:rollback` 执行migration/xxx->down方法
5. 检查migration的SQL语句`--pretend`.示例`php artisan migrate --pretend`
6. 常用.指定长度(20)&类型(String)`$table->string("xxxx",20)`,允许为空`->nullable();`,唯一值`->unique();`,默认值`->default("xxx");`
7. 创建表参数`--create=xxxx`全以创建表的方式创建migration.示例`php artisan make:migration create_table_users --create=users`

### lavar-api-vue
1. 

# ThinkPHP
- 数据层关联查询
```
    db('xxxa')->alias("a")->join("dev_xxxb b","id=b_id")
    #将表连接另一个表,同时设置别名.
```

## 学习树
> F:\BaiduYunDownload\Laravel\laravel\15.Laravel，AngularJS实战开发知乎\4-3 注册API的实现（2）.wmv
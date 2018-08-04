# wordpress

## 文件结构
- 入口文件`index.php
- 用户注册激活`wp-activate.php`
- 加载环境和模版`wp-bolg-header.php`
- 用户评论文件`wp-comments-post.php`
- 配置文件/MYSQL`wp-config.php`
- 配置实例/以便丢失后能马上恢复`wp-config-sample.php`
- 生成OPML格式的连接列表(通近后台添加的菜单)`wp-links-opml.php`
- 执行定时任务`wp-cron.php`
- 加载核心库和公共变量`wp-load.php`
- 登陆页面`wp-login.php`
- 邮件操作(注册时发送邮箱/此类可以调用)`wp-mail.php`
- 运行前的例行程序,检查安装是否正确,使用辅助函数,应用用户插件,初始化执行计时器等等`wp-settings.php`
- 定义注册新用户账号,新分站的页面`wp-signup`
- 处理trackback请求`wp-trackback.php`
- 远程发布功能(使用第三方工具在wordpress上发布文章)`xmlrpc.php`

### wp-admin(管理员目录)
- 主题编辑`theme-edit.php`

### wp-include(类库及核心文件目录)
- post.php,获取文章`get_post();get_posts()`,`get_post_meta()`
- post-template.php,取得文章ID`the_ID()`,取得文章标题`the_title()`
- wpdb.php,插入`insert()`,查询`query()`

### wp-content
- 多语言包`languages`
- 插件`plugins`
- 主题安装目录`themes`
- 上传目录`uploads`

### 数据库表结构
- 文章评论额外表`wp_commentmeta`
- 文章评论内容表`wp_comments`
- 外链表`wp_links`
- 全局变量表`wp_option`
- 文章基本信息表`wp_posts`
- 文章额外信息表`wp_postsmeta`
- 分类/标签基础信息表`wp_terms`
- 文章/连接/菜单关联表`wp_term_ralationships`
- 分类补充信息表`wp_term_taxonomy`
- 用户信息表`wp-user`
- 用户额外信息表`wp-usermate`

### 创建模版
- 目录`wp-content/themes`
- 基本文件`style.css`,`index.php`,`screenshot.png`

```
/*
Theme Name:模版名字
Theme URL:模版介绍的连接URL
Description:介绍
Version:版本号
Author:作者
Author URL:作者URL
Tags:标签
*/
```

### 常用方法
- bloginfo():显示各类信息
- get_bloginfo():取得博客信息
- get_option():取得系统变量,来自数据表`wp_option`
- update_option()

### 获取文件
- have_posts():判断是否有日志/文章
- the_post():显示当前文章
- 
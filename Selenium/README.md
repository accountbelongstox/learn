# python
## 环境搭建
- 安装pip
- 安装setuptools
- `pip install selenium`安装selenium

## 使用python开始
- 导入包`from selenium import webdriver`
- 启动`driver = webdriver.Chrame()`
- GET网页`driver.get('http://www.baidu.com')`
- 切入iframe`driver.switch_to.frame(0)`index索引切入

## 特点
- 结构化
- 通过数据驱动结果
- 通过关键字驱动结果

## WebDriver API
- `find_element_by_id()`通过`id`定位
- `find_element_by_name()`通过`name`定位
- `find_element_by_tag_name()`通过`tagname`比如`div`来定位
- `find_element_by_class_name()`通过`classname`来定位,通常用来定位一组元素.
- `find_element_by_link_text()`通过连接上的文本来定位,比如`<a href="#">新闻</a>`,则定位代码`find_element_by_link_text(u"新闻")`
- `u"中文"`u声明 用来解决乱码问题.
- `find_element_by_partial_link_text()`通过连接上的文本来定位,但无须填入全部,比如`<a href="#">新闻</a>`,则定位代码`find_element_by_partial_link_text(u"新")`

### XPath定位
- `find_element_by_xpath()`通过`xpath`绝对位置来定位
- xpath几种写法,`/`表示从根目录开始,`//`表示不确定位置
```
	/html/div/div/div/p/a/input
	/*[@id="id"]
	//input[@id="id"]
	//*[@name="name"]
	//*[@maxlength="522"]
```
- 布尔运算定位`//*[@id="id" and @name="name" and @tagname="div"]`

### css_selector定位
- `find_element_by_class_selector('.col')`通过css选择器定位
- `find_element_by_class_selector('#id')`css选择器也可以定位ID
- `find_element_by_class_selector('input')`同时也可以定位tagname
- `find_element_by_class_selector('form#form > span > input.col')`通过多级选择
- `find_element_by_class_selector('input[name="inputname"]')`css选择器

### 控制浏览器
- 控制宽高`drive.set_window_size(480,800)`
- 后退`drive.back()`,同时获取当前URL`drive.current_url`
- 前进`drive.forward()`,同时获取当前URL`drive.current_url`
- 清除`input`里的默认值,`find_element_by_name().clear()` 
- 提交表单`submit()`,无须click可以使用用
- 属性:取得元素的宽高`size`,取得文字`text`,取得属性`get_attribute('type')`,是否显示`by_id().is_displayed()`

### 鼠标事件
- `click()`点击
- `double_click()`双击
- 新的右键事件.`form selenium.webdriver.common.action_chains import ActionChains`导包,`Action(drive).context_click(ele).perform()` 
- 悬停`form selenium.webdriver.common.action_chains import ActionChains`导包,`Action(drive).move_to_element(ele).perform()` 
- 拖动
```
	form selenium.webdriver.common.action_chains import ActionChains
	#定位元素的源位置
	source = dr.find_element_by_name("xxx")
	#定位元素的目标位置
	target = dr.find_element_by_name("yyy")
	#执行拖动操作
	Action(drive).drag_and_drop(source,target).perform()
```

### 键盘事件
- 输入`ele.send_keys()`输入内容,输入前先清除`ele.clear()`
> 按键`ele.send_keys(Keys.Xxx)`,属性方法:删除`Keys.BACK_SPACE`,  
空格`Keys.SPACE`,全选输入框内容`ele.send_keys(Keys.CONTROL,'a')`,  
剪切输入框内容`ele.send_keys(Keys.CONTROL,'x')` ,
粘贴到输入框`ele.send_keys(Keys.CONTROL,'v')` ,
回车`ele.send_keys(Keys.ENTER)` ,

## 解决乱码
- `u"中文"`u声明 用来解决乱码问题

## 操作flash
- [https://www.cnblogs.com/hhudaqiang/p/6673012.html](https://www.cnblogs.com/hhudaqiang/p/6673012.html)

## 集成electorn 
- [https://wenku.baidu.com/view/84831b8ca0c7aa00b52acfc789eb172dec639911.html](https://wenku.baidu.com/view/84831b8ca0c7aa00b52acfc789eb172dec639911.html)

## Node.js集成
- [http://www.cnblogs.com/Stephending/p/4043263.html](http://www.cnblogs.com/Stephending/p/4043263.html)

# 学习树
- F:\BaiduYunDownload\Seleinum自动化测试视频教程\√Selenium python\04.虫师自动化测试python2.0版
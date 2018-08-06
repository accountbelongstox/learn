# Python

## 基本

- 安装
    - eclipse 安装python
        - help->new software->http://dev.python.org/updates

- pip
    - 安装`easy_install install pip`
    - 安装`pip install requests`
    - 升级`python -m pip install --upgrade pip`
- 基础
    - 注释:以#号开头.
    - `tab`缩进

- 数据类型
    - 字符串String
        - 单引号,双引号`'srting'`
        - 三引号用来多行文本`'''hello  word'''`
        - *format*字符串`"{0} as {1}".format("name",str(23))`
        - 字符串连接,使用+号:`"name"+" is x"`
    -  数字型numeric
        - int整数
        - bool布尔`True`
        - float浮点
        - complex()复数类型` 4+3j`
    - 列表List`['abc',12,34,5]`
    - 元组Tuple:元组（tuple）与列表类似，不同之处在于元组的元素不能修改。`('abc',124,)`
    - 集合Set:是一个无序不重复元素的序列。`{'a',234}`
    - 字典Dictionary:字典是一种映射类型，字典用"{ }"标识，它是一个无序的键(key) : 值(value)对集合。`{'name': 'runoob','code':1, 'site': 'www.runoob.com'}`

- 数据转换
    - int():可以转换的包括String类型和其他数字类型，但是会丢失精度     
    - float():可以转换String和其他数字类型，不足的位数用0补齐，例如1会变成1.0
    - complex():转复数,第一个参数可以是String或者数字，第二个参数只能为数字类型，第二个参数没有时默认为0
    - str():将数字转化为String
    - repr(Object):返回一个对象的String格式
    - eval("12+23"):执行一个字符串表达式，返回计算的结果,如例子中返回35
    - tuple(): 参数可以是元组、列表或者字典，wie字典时，返回字典的key组成的集合
    - list():将序列转变成一个列表，参数可为元组、字典、列表，为字典时，返回字典的key组成的集合
    - set():将一个可以迭代对象转变为可变集合，并且去重复，返回结果可以用来计算差集x - y、并集x | y、交集x & y
    - frozenset():将一个可迭代对象转变成不可变集合，参数为元组、字典、列表等，
    - chr(0x30):chr()用一个范围在 range（256）内的（就是0～255）整数作参数，返回一个对应的字符。返回值是当前整数对应的ascii字符。
    - ord():返回对应的 ASCII 数值，或者 Unicode 数值
    - hex():把一个整数转换为十六进制字符串
    - oct():把一个整数转换为八进制字符串

#### 运算符
- 算术运算符
|算术运算符|表达式|说明|
|-:|:-:|:-|
|+|x + y|加法运算|
|-|x -  y|减法运算|
|*|x * y|乘法运算|
|/|x / y|除法运算|
|%|x%y|求模运算|
|** | x**y|x的y次方|
|//|x // y|两数相除向下取整|
- 关系运算符
|运算符|表达式|说明|
|-:|:-:|:-:|
|==|a==b|等于，比较对象是否相等|
|!=<br />或<br /><>|a !=b<br />a<>b|不等于，比较两个对象是否不相等|
|>|a > b|大于，比较a是否大于b|
|<|a < b|小于，比较a是否小于b|
|>=|a>=b|大于等于，比较a是否大于或者等于b|
|<=|a<=b|小于等于，比较a是否小于或者等于b|
- - -
- 逻辑运算符
|运算符|表达式|说明|
|-:|:-:|:-:|
|and|a and b|逻辑与，当a为True时才计算b|
|or|a or b|逻辑或，当a为False时才计算b|
|not|not a|逻辑非|
- - -
|运算符|表达式|说明|
|-:|:-:|:-|
|&|a & b|按位与运算符：参与运算的两个值,如果两个相应位都为1,则该位的结果为1,否则为0|
|\||a\|b|按位或运算符：只要对应的二个二进位有一个为1时，结果位就为1|
|^|a^b|按位异或运算符：当两对应的二进位相异时，结果为1|
|~|~a|按位取反运算符：对数据的每个二进制位取反,即把1变为0,把0变为1|
|<<|a<<2|左移动运算符：运算数的各二进位全部左移若干位，由"<<"右边的数指定移动的位数，高位丢弃，低位补0。|
|>>|a>>2|右移动运算符：把">>"左边的运算数的各二进位全部右移若干位，">>"右边的数指定移动的位数|
- - -
|运算|操作|结果|
|:-:|:-:|:-:|
|a & b|0011 1100 & 0000 1101 0000 1100|12|
|a \| b|0011 1100 \| 0000 1101 0011 1101|61|
|a ^ b|0011 1100 ^ 0000 1101 0011 0001|49|
|~a |~ 0011 1100 1100 0011|-61<br />有符号二进制数的补码|
|a << 2|0011 1100 -> 1111 0000|240|
|a >>2|0011 1100-> 0000 1111|15|
- - -
- 赋值运算符
|运算符|表达式|说明|
|-:|:-:|:-:|
|=|c=a + b|简单赋值运算符， 将 a + b 的运算结果赋值为 c|
|+=|c +=a|加法赋值运算符 c += a 等效于 c = c + a|
|-=|c -=a|减法赋值运算符 c -= a 等效于 c = c - a|
|*=|c *=a|乘法赋值运算符 c *= a 等效于 c = c * a|
|/=	c /=a|除法赋值运算符 c /= a 等效于 c = c / a|
|%=	c %=a|取模赋值运算符 c %= a 等效于 c = c % a|
|//=|c //=a|幂赋值运算符 c **= a 等效于 c = c ** a|
|**=|c **=a|取整除赋值运算符 c //= a 等效于 c = c // a|
- - -
- 成员运算符
|运算符|表达式|说明|
|-:|:-:|:-:|
|in|a in b|如果在指定的序列中找到值返回 True，否则返回 False。|
|not in|a not in b|如果在指定的序列中没有找到值返回 True，否则返回 False。|
- 运算优先级
```
**	指数 (最高优先级)  
~ + -	按位翻转, 一元加号和减号 (正负号)
* / % //	乘，除，取模和取整除
+ -	加法减法
>> <<	右移，左移运算符
&	位 'AND'
^ |	位运算符
<= < > >=	比较运算符
<> == !=	等于运算符
= %= /= //= -= += *= **=	赋值运算符
is is not	身份运算符
in not in	成员运算符
not or and	逻辑运算符
```
### 列表list
```
str_list = ["abc",123,"java"]
```
1. `len(list)`取得长度
2. `list[-2]`从反向取得index指定的元素
3. `list[1:]`从1开始取得余下元素 - "数组冒号运算符"
4. `cmp(list,list2)`比较两个元素
5. `max(list)`返回最大值
6. `min(list)`返回最小值
7. `list.append(obj)`在末尾添加新对象
8. `list.count(obj)`统计某个元素在列表中出现在次数
9. `list.extend(seq)`在列表末尾一次性追加另一个序列中的多个值,即用新列表扩展原来的列表
10. `list.index(obj)`从列表中找出某个值的索引值
11. `list.insert(obj)`插入值 
12. `list.pop(obj)`移出某个值
13. `list.remove(obj)`移除对应的值
14. `list.reverse()`翻转
15. `list.sort()`排序
- 判断列表中是否有某个值
```
if(3 in [1,2,3])
```
### tuple元组
```
s_tuple = ("aaa","bbb",1234);
```
- 特性:一旦被创建就无法被更改.
- 特性:不能删除某个元素,但能删除整个tuple
### 一些特殊的列表运算
- 合并列表或元组`("aaa","bbb")+("ccc")`
- 输入多个或直接多个值相连接`["hello!"]*4`
### 字典 Dictionaries
- key,value组成字典
- 可以任何类型混合在一起
- 一个字典里不允许出现相同的KEY,VALUE
- 解析字典`key,varlue = diction`
```
dictionaries = {
    "tom":123,
    "kim":789
}
```
### del删除列表或字典
```
del list
```
### 类型转换
1. `str()`转为字符
2. `int()`转为数字
3. `float()`转为浮点
1. `bool()`转为布尔

* 切片listName[:1].表示slice(0,1)

### 字面常量literal constant
> 可以直接以字面意义使用他们,不会被改变
### 变量identifier
> 第一个字符必须是字符或下划线
### 特殊UTF-8定义
> 在头部定义编码`#-*- conding:utf-8 -*-`
### 函数&global全局变量
- def 关键字
```
x = 60;
def sayHi(str):
    gloabl x
    x = 40
    print(str)
    return str(str)+' complier'
sayHi(str)
```
### 函数默认值
- 直接在参数等于默认值
```
def f(a=10)
    print(a)
    return int(a)+20
```

### 函数装饰器
- 将函数作为参数传到另一个函数
```
def add(cake):
    return cake()+" cand"
@add
def cake():
    return "cake"
cake("cake ");
```

### 关键字参数
- 根据函数的形参,可指定传入具体的那个形参
```
def key(a=10,b=1):
    print(a+b)
    return True

#直接根据关键字传入指定的那个参数 
key(b=20)
```
- *修饰的参数将作为一个元组被传入函数
- **作为一个字典型dictionaries
``` 
def feature(*lists,**keys):
    print(lists)
    print(keys)
    return lists
feature(1,2,3,4,key="bool",keys="books")
```

### 取得输入值
- input("Enter an integer : ")
```
i = input("Enter an integer:")
i = int(i)
```

### for循环
- range(start,end)创建一个整数列
```
for k,v in range(1,10):
    print(k)
    print(v)
```

### while语句
- 循环直到条件成熟才跳出.用户输入判断时可用.
```
flag = False
while flag==False:
    n = input("Enter input:")
    n = int(n)
    if n == 10:
        flag = True
        print("success!")
    else:
        print("error!")
```

### 循环关字词
- `break`跳出全部循环
- `continue`跳出当前循环
- `pass`和continue功能一样

### 输入输出
- `input()`输入
- `print()`输出,可以使用`str.format(a,b)`辅助输出

### 文件的输入和输出
- `f = open("./t.txt","w")`读文件.
- `f.write(content)`写入文件
- `f.close()`关闭文件
- `f.readLine()`读取一行
```
f = open("text.txt","w")
while True:
    line = f.readLine();
    if len(line) == 0:
        break
    print(line)
```

### 错误处理
- `try|except ValueError:`异常处理
```
try:
    a = b
except OsError as err:
    print("error is {0}".format(err))
```

### 面向对象
- 类class
> 类的构造函数`__init__`
```
class stendt:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def introduce(self):
        print("hi,I'm"+self.name)
        print("My age is"+self.age)

#调用函数
j = stendt("sam",23)
j.introduce()
```
### 图形界面 GUI
- tkinter
```

#导入以下
from tkinter import *

#将以下重置
import tkinter.simpledialog as dl
import tkinter.messagebox as mb

root = Tk()

#设置标题
w = Label(root,text = "Label Title")

#设置弹出窗
mb.showinfo("welcome","welcome message")
guess = dl.askinteger("Number","Enter 0 number")

#设置输入
output = "This is output message"
mb.showinfo("output:",output)
```

### python网页基础
- lpthw.web 安装`easy_install lpthw.web
```
import web
urls = ("/",'index')
app = web.application(urls,globals())

class index:
    def GET(self):
        html = "hello world"
        return html
if __name__ == "__main__":
    app.run()
```

# 中级python

## 处理xml
- `from xml.dom.minidom import parse`导包
- `x = parse("x.xml")`

## sleep休眠
- `from time import sleep`导.休眠2秒`sleep(2)`

## 打开文件
- `open('text.txt','wr')`

## 图形库
- tkinter:`import tkinter`

## itertools工具库
- `itertools.cycle()`


# pyqt5

## eric4开发工具
- 删除任何`Python`版本
- 安装`Anaconda`
- `pip install PyQt5`
- `pip install pyqt5-tools`
- `pip install QScintilla`

## 信号与槽
- `button`控件

### 解决一个BUG
- 在windows下可能找不到QT.因此重新下载`PyQt5wincows`

### 面对对象

#### 类
- 实例化一个类`__new__(className)`
- 类的说明`"""三个引号中间的为类的说明"""`,使用`__doc__`或`help(className)`来显示类的说明
- 实例属性,在类的任何位置使用`self.xxx`来定义.一般在类的`__init__()`中初始化
- 私有属性.`self.__ab`,以双下划线开头来定义只有本类才可以访问.`self._x`单下划线相当于保护属性`protected`
- 类的特殊属性`__doc__,__name__,__dict__,__module__,__base__`,可以使用`dir(className)`来显示 
- 类中的方法,需要首参数为`self`.调用时不需要提供self参数.因为self由系统自动提供.
- 反射`hasattr(Object,"attrName")`,`getattr(object,"attr")`,`setattr(obj,"attr","343")`,(以字符串形式操作类的属性称为反射)
- 包装: 属性包装`@property`(可以将函数包装成一个属性,直接调用.),可读`@<property-name>-setter`(重写一个函数,对该函数写入时执行),可删`@<name>.deleter`
- 描述符(实现特殊协议方法的类作为另一个类的类属性,用来拦截和控制访问)-协议方法`__get__()`,`__set__()`,`__delete__()`
- 定义函数`__call__()`可以让类像函数一样直接 使用.
- 静态方法(可以不用实例化就直接调用):定义装饰器`@staticmethod`,参数不用self.
- 类方法:`@classmethod`,首参数必须为`cls`,例:`return cls(a,cls.method(b));`
- 继承:类默认继存`Object`类,格式`class child(parentClass):`,多重继承时,先继承的类方法会覆盖后继承的方法.
- 类重载,重写.在子类中用同样的方法重写父类.
- 调用父类的方法`super().methodName()`
- 单例模式.取得一个类的ID`id(className)`

## Django

- 安装虚拟环境`pip install keyrings.alt`
- 安装虚拟环境`pip install virtualenv`
- 创建虚拟环境`cd /d D:\workroom`,`virtualenv django_dev`
- 安装DJingo`pip install django`
- 安装DJingo`pip install -U django`
- 安装PYMySql`pip install pymysql`
- 进入虚拟环境:执行`cd django_dev/Scripts/`
- 进入虚拟环境:执行`Activate`
- 查找主控程序`where Django-admin`
- 创建一个项目`django-admin startproject maobanweb`
- 运行项目`cd maobanweb`
- 同步数据库`python manage.py makemigrations`
- 同步数据库`python manage.py migrate `
- 创建用户名及密码`python manage.py createsuperuser `
- 运行项目`python manage.py runserver 8081`
- 登陆后台`/admin/`

#### Django-admin

- 查看帮助`django-admin help ["具体命令"]`
- 创建项目`startproject`
- 创建APP`startapp`
- 运行开发服务器`runserver`
- 进入 SHELL`shell`
- 进入DB-SHELL`dbshell`
- 检查项目完整性`check`
- 清空数据库`flush`
- 编译语言文件`compilemessages`
- 创建语言文件`makemessages`
- 生成数据库同步脚本`makemigrations`
- 同步数据库`migrate`
- 查看生成的数据库同步脚本`showmigrations`
- 查看生成清空数据库的脚本`sqlflush`
- 查看数据库同步的SQL语句`sqlmigrate`
- 导出数据`dumpdata`
- 导入数据`loaddata`
- 查看你的配置和DJANGO默认配置的不同之处`diffsettings`

- 强制更新数据库

    - `python manager.py makemigrations appName`
    - `python manager.py migrate appName`

- Shell(Django-admin) 
    
    - 进入shell环境`python manage.py shell`
    - 导入所有类`from maobanapp.models import *`
    - `objects`是model默认管理器
    - 增加数据`User.objects.create(user='admin',password='123456',money=33.3)`
    - 增加数据`user = User() /  user.user = 'xxxx'  user.save()`
    - 一对多插入,对应的位置直接给对象
    - 多对多插入,`User.fieldName.add(objectName)`
    - 删除数据`User.objects.filter(id=1).delete()` 
    - 更新数据`User.objects.get(id=1).update(name='new')` 先取得再保存
    - 查询语句
        - Django查询是惰性查询,在Shell下是立即查询.
        - 查询会返回一个  QuerySet类型
        - 查询数据`User.objects.get(id=1)`
        - 查询数据->查询所有`User.objects.all()`
        - `get(**keys)`
        - `all()`
        - 'exclude(**keys)'包含那些与所给筛选条件不匹配的对象
        - `order_by()`对查询结果排序
        - `reverse()`反向
        - `distinct()`从返回结果中剔除重复记录
        - `values()`返回一个ValuesQuerySet 一个特殊的QuerySet,运行后并不是一系列model的实例化对象,而是一个可以迭代的序列
            - 例如:`User.objects.filter(user='admin').values('username')`
            - 结果:`{username:admin}`
        - `values_list()`和values一样,但返回元组
        - `count()`返回数量
        - `first()`第一条数据,等价于[:1][0]
        - `last()`最后一条,等价于[:1][0]
        - `exists()`是否存在,返回boolean
        - `raw(sql)`原生查询

#### Manage.py工程管理工具,是对`django-admin`的包装
1. 运行项目`python manage.py runserver 8080`,默认为8000端口
2. 修改账号密码`python manage.py changepassword admin xxxx`

#### Django目录结构

##### Project结构
1. `/migrations/`数据库同步目录
2. `settings.py`配置文件
3. `urls.py`路由URL配置
4. `wsgi.py`WSGI协议配置

##### App结构
1. `.py`初始文件
2. `admin.py`配置后台管理
3. `modules.py`模型配置,数据库模型
4. `apps.py`app配置
5. `views.py`业务部份
6. `static`自动识别的静态目录 
7. `templates`自动识别的模版目录 

#### 基本开发

1. 在project->`view.py`定义业务逻辑`def index(request) return render(request,'index.html')`
2. 在app建立`static`,`templates`.对应静态和模版文件
3. 在project包含app,`settings` -> `INSTALLED_APPS`加入
4. 在project路由`urls.py`导入`from appname.views import index`,urlpatterns加入`path('',index)`
5. 修改静态文件目录`settings.py`添加`STATICFILES_DIRS=(os.path.join(BASE_DIR,'static'),)`由于是元组,后面的`,`号不可省略
6. 路由分离`from django.conf.urls import url,include`,引入另一个APP的路由组`path('', include('maobanapp.urls'))`
7. 路由传参数给view,`view`中定义的业务处理接收参数 
8. 防止转义标识,在字符前加`r'^\t'`,此字符叫有正由的作用

#### View逻辑处理

1. 获取GET数据`request.GET.get('id')`,<-`view.py`->`def index(request)`
2. 获取POST数据`request.POST.get('id')`
3. 跳转`return redirect('/abcdefg')`
4. 将当前页面的作用域的所有变量集中起来传送`locals()`

#### ORM

### sqllite数据库

- sqlite默认支持`SQL`查询语句
- 数据类型

    - sqlite可以给每个字段定义类型,如果没有定义,将会和JavaScript一样,自动属于于对态类型.
    - 默认会进行数据转换.比如将`hello`插入到`integer`类型表中,将插入`0`的数据

类型 | 说明
-|-
Integre | 有符号整数|
Real |浮点型 
Text |字符串(编码取决于DB编码)
BLOB |存储图片等二进制信息
Boolean |布尔类型(0代表false,代表true)
日期与时间 |一般采用Text来代替

- 查询语句

	- 创建表`drop table if exists person;create table if no exists person(_id integer primary key autoincrement,name text,salary real);`
	- 查询表`select * from person;`
	- 查询表结构`select * sqlite_master where type='table';`
    - 插入数据`insert into person (name,money) values('小张',300000),('小李',6000234),('小熊',99980000.00);`
    - 聚合查询`select min(money) '最低收入' ,max(money) '最高收入' from person;`
    - 创建视图`drop view if exists st`,视图表是一张虚表,可能是多张表的部分列的集合
    - 创建视图`create view st as select _id,name from person;`将表`person`的部份内容加入视图.以查查询.
    - 视图表作用在于隐藏某些数据.

* * *

- 使用纯python数据驱动`PyMysql`

- 模版标签
    - Doc[!Django官方文档](https://docs.djangoproject.com/en/2.0/ref/templates/builtins/)
    - 模版变量Template("<a></a>"),在modules里定义
    - 包含另一个模版`{% include 'header.html' %}`,`{% include 'nav/template/header.html' %}`
    - 继承模版`{% extends "base.html" %}`,并定义块`{% block title %}{{ section.title }}{% endblock %}`,在子模版中重写块的内容 `{% block title %}My amazing blog{% endblock %}`
    - 在子模版使用父模版的内容`{% block title %}{{ block.super }}{% endblock %}`
    - 判断`{% if name == 'admin' %} a {% else %} {% endif %}`支待`in`关键字
    - 比较`{% ifequal %}`只支持整数小数等,不支持元组,字典,列表
    - 循环`{% for item in list %} {% endof %}`
        - `forloop.counter` 当前循环计数`{% for item in list %} forloop.counter {% endof %}`
        - `forloop.counter0` 当前循环计数从0开始
        - `forloop.revcounter`倒计数
        - `forloop.revcounter0`
        - `forloop.first` bool判断是否第一个
        - `forloop.last` 
        - `forloop.parentloop` 用于嵌套循环,然后得到父级的上述参数
    - 循环时重复给值 `{% cycle rowvalue1 rowvalue2 %}`
    - 单行注释`{# #}`,多行注释`{% comment %}`
    - 生成csrf_token`{% csrf_token %}`防跨站攻击
    - 显示调试信息`{% debug %}`
    - 过滤`{% filter force_escape|lower %}{% endfilter %}`将字符转小写
    - 自动转义`{% autoescape %}{% firstof var1 var2 var3 "<strong>fallback value</strong>" %}{% endautoescape %}`
    - 输出第一个值不等于False的变量`{% firstof var1 var2 var3 "<strong>fallback value</strong>" %}`
    - 显示调试信息`{% debug %}`
    - 加载标签库`{% load somelibrary package.otherlibrary %}`
    - 当前时间` {% now "jS F Y H:i" %}`
    - 显示一个url`{% url 'showUrl' v1 v2 %}`如果有参数跟着参数,URL在`urls.py`里定义`path('', include('maobanapp.urls'),name='showUrl'),`
    - 给变量命令别名`{% with total=business.employees.count %} {{ total }} employee{{ total|pluralize }} {% endwith %}`
    - 禁止解析内容`{% verbatim %} {{if dying}}Still alive.{{/if}} {% endverbatim %}`

* 学习树
	* `E:\video\Python\05.python工程师全栈开发\02.第二阶段 PythonWeb开发\03.PythonWeb框架django基础视频教程 23课\jangojc14.mp4`
	* `F:\BaiduYunDownload\pyqt课程\1 第一套课程 使用pyqt开发windows gui程序及打包\04.pyqt在mac os系统下的体验.mp4`
    * ``

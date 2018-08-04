# C-sharp/C#

## 基础部份

- - -

### HelloWorld
- 类:类相当于公司的部门,而项目相当于公司.
- 引用命名空间`using System`
- 项目名或命名空间`namespace xxxxx`
- Programe类`class Programe`
- 程序主入口`Main(strint[] args)`
- 解决方案文件(可以双击打开)`.Sln`
- 项目文件(可以双击打开)`.csproj`
- 类文件`.cs`
- 打印`HolleWorld!`,code:`Console.WriteLine("Hello,world!");`
- 等待用户输入`Console.ReadKey();`

### day1
- 数据类型`int string decimal char bool`;
- 常量`const int i = 111;`,注意:常量 不能给值.
- 枚举`enum`

```
public enum LiveLise{
    A,B,C
}
```

- 占位符:`{0},{1}`,`Console.WriteLine("{1}","占位符")`,注意:有多少占位符就需要多少参数对应.
- 异常并不是一个错误,而是由于某些原因使程序不能正常运行
- 接收用户输入:`string opt = Console.ReadLine();`,注意:用户不管输入什么,都只能接收为`string`类型

#### 转义符
- 换行`\n `,制表`\t `,响铃`\a `,退格`\b `,换页`\f `,1-3位八进制任意字符`\ooo `,2位十六进制`\xhh `,空字符NULL`\0 `,垂直制表`\v 
- windows系统不认识`\n `,只认识`\r\n `
- 取消转义字符作用:在字符前加`@`符号.instance:`string a = @"\a\b"`,此处转义符失去作用

#### 显式或隐式类型转换
- 显式类型转换,即强制类型转换,用于低数据转高数据.如Int->double.格式`int i = (int)f_n;`
- 类型不兼容的转换,string->int.example(转double):`Convert.toDouble();`,转Int:`Convert.toInt32();`
- 所有类型都能强转为string.方法`xxx.ToString();`
- parse,`parse(typeof(type),value)`
- enum->int not exception

#### 运算符
- `+,-,*,/,%`

#### 捕获异常
- try{}catch{}

- - -

### day2

- 调用方法`ClassNane.FuncName`,使用类名.方法名来调用.
- 方法`Array.Sort(),Array.Reverse()`
- 控制台设置背景色`Console.BackgrounColor = ConsoleColor.Yellow`,`Console.ForegroundColor = ConsoleColr.Red`
- 控制台清屏`Console.Clear()`

#### 字符串
- 字符串的不可变性,当给一个字符串值的时候,老值并不会销毁,字符串可以理解为一个char类似的只读数组.
- 转数组`xxx.TocharArray();`,字符数组转字符串`string a = new String();`
- 大量字符串操作`new StringBuilder()`
- 判断是否包含某个方法`str.Contains()`
- 字符串替换`str.Replace("aaa","bbb")`
- 字符串截取`str.SubString(startPoint,endPoint);`
- 字符串是否以某字符开头`str.StartsWith(sss)`
- 字符串是否以某字符结束`str.EndsWith(xxx)`
- 取得字符串第一次出现的位置`int i= str.IndexOf(xxx)`
- 取得字符串最后一次出现的位置`int i= str.LastIndexOf(xxx)`
- 去除字符串两边的空格`str.Trim()`,去除字符串开始的空格`str.TirmStart()`,`str.TirmEnd()`
- 字符串是否为空`string.IsNullOrEmpty(str)`
- 字坐串连接`string t= string.Join("|",strArr)`
- 字符串分割`string[] t= string.Split("|",str)`

#### 面对对象
- *构造函数* : 与类名一致则是 *构造函数* .构造函数可以有重载方法
- *析构函数* : 当程序结束时才会执行.用于帮助释放资源. 语法`~destructorName{}`
- *this关键字* : 1.指向当时的函数方法2,指向该函数的构造方法.`public Student(string name, int chinese, int math, int english):this(name,0,'c',chinese,math,english)`
- 命名空间 : 用于解决文件的重名问题.引用命名空间:`using namespaceName`
- 继承`ClassA:ClassB`,使用`:`.一个字类只能有一个父类


#### 高级参数
- out参数:用于指定方法内部可以多余返回的参数`public static void (out a)`,调用时可以不用接收.要求在方法内赋值
- ref参数:可以将一个变量带入方法中进行改变,并反回改变后的值.并不需要传参,在方法外赋值,方法内可以不赋值.
- params:将实参中同一类型的参数都处理为一个可变参数组.只能放在参数的最后一位.

#### 属性的set和get方法
- 对属性调用时先执行属性下的`get`方法
- 对属性赋值时先执行属性下的`set`方法

#### 计时器
- 创建一个计时器`Stopwatch sw = new Stopwatch()`,开始计时器`sw.start()`,结束计时器`sw.end()`

```
int age;
public int Age{
    get{
        return age;
    }
    set{
        age = value;
    }
}
```

#### 值类型和引用类型
- 值类型存放于堆,引用类型存放于栈,但引用类型会在堆中存放一个引用地址.

## 数据库

### SQL Server 2017 RC
- 数据库登陆`.`代表本地.初次设置一下`sa`密码.并将验证模式设置为`windows`和`SQLServer`.同时重启MYSQL.
- 数据库分离,符加.分离后,数据库文件可以拷贝到其他机器.符加一个路径会把数据库添加回来.
- 创建数据库

```
create database [className] on primary
(
	name="className_db",
	filename="D:\Program Files\Microsoft SQL Server\MSSQL14.MSSQLSERVER\MSSQL\DATA\className.mdf",
	size=3mb,
	filegrowth=2mb
)
log on(
	name="className_log",
	filename="D:\Program Files\Microsoft SQL Server\MSSQL14.MSSQLSERVER\MSSQL\DATA\className.ldf",
	size=3mb,
	filegrowth=2mb
)
```

- 创建表

```
create table class (
	--identity 自增修饰,从1开始每次增长1.
	ClassId int identity(1,1) primary key,
	Name nvarchar(10),
	Desc nvarchar(20)
)
```

- 数据类型
> bit  
true  
false  
0/1  
char(2) - 1个汉字,两个字母  
varchar(2) - 1个汉字,两个字母  
nchar(2) - 2个汉字,两个字母  
int - 整数  
float - 小数  
detetime - 时间

- 修改表

```
ALTER DATABASE CLASS_DATABASE_NAME
MODIFY FILE
(
	NAME=new_Name_db,
	SIZE=30MB,
	MAXSIZE=50MB
);
GO
```

- 查询数据库状态

```
USE test
GO

- 修改数据库字段
> 如果修改字段保存不成功,需要在设置->选项里的`表`,取消阻止表的重建...  
```
ALERT TABLE xxxx
ALERT columu xxx nvarchar(10)
```
select DATABASEPROPERITYX('text','Status')
AS 'thisStatus'
```

- 修改数据库名
```
```

- 增加数据
> 视图->模版管理->database->create database.   
查询->带参数的模版管理(输入数据库名即可.) 
```
insert into tablename(key1,key2) values('123','456')
insert into tableName values('123','234')
insert into tableName(tableK1,TableK2)
select N'134','32424' union --大写N代表转码.插入中文时不会乱码.
select '2342','4324324' union
select 'end123','endwe'
```

### Transact-SQL盖甸

- 修改数据
```
select * from TableName 
update DataBase key1='123',key2='val222' where TableName='Class1'
-- <>为不等于符号
```

- 切换数据库
use TableName2
### Transcate-SQL语句
- 
```

- `G:\video\database\SQLServer2012入门视频教程 17课 附PPT\第04章  Transact-SQL语言基础\4.3  常量.avi`
- 删除数据

```
-- 数据删除了,表还在.但ID跟着删除前ID继续增加
delete from ClassName
-- 表没了.数据也没了.
drop table TableName
-- 表存在,数据没了.ID从0开始.
truncate table TableName

```
- 约束


## 学习树
> `H:\video\C-NET\net\01Net基础教程\01.Net基础\03-c#高级\02--面向对象继承\02\video`

# 基础(1)
- 分别定义JAVA的.4类8种变量
- 定义字符串常量 .
- 作用范围
- 强制转换一个变量类型
- ++在前和++后的区别.在前先算自己,在后后算自己.

* * *

- 逻辑运算符,不同于其他语言
- 按位与 &
- 按位或 |
- 异或 ^ 二进制相比较 相同为0 不同为1. 比如  1101 ^ 1110 = 0 0 1 1 
- 取反 ~
- 短路与 &&
- 短路或 ||

## Scanner 类
- 导入包`import java.utils.scaner;`
- 获取字符串,数字输入(next)
- 生成随机数

## 流程控制
- 各种循环和javascript一样  

```
	break,continue 一样
	switch case穿透性
	case 1:
	case 2:
	break;
```

## 定义数组,一定要定义数字长度
- java 方法重载,可以定义多个同名的方法,但参数必须不一样
- byte 和 short不能做为JAVA的返回类型
- return 退出整个方法

## 面对对象
- 如果一个类中全部方法都是静态，则要将构造方法私有化。避免其他人使用。

## 文档注释

> #javadoc

```
@title
@package
@description
@date 2018-1-20
@author ddweb.com
@version v1.0
@param arr 接收一个数组
@return 打印数组
@ClassName
@throws 
```

## 代码块
- 构造代码块

> 构造代码块优先于构造函数.有参构造,无参构造.

```
{
	System.out.println("构造代码块.");
}
```

- 静态代码块

> 静态代码块随随着类的加载而加载,所以只执行一次.一般用来加载驱动.

```
static {
	System.out.println("构造代码块.");
}
```

### 代码修饰符

1. `extends`继承  
java只支持单继承,不支持多继承  
supuer();访问父级的构造方法  
this();访问本层的构造方法  
每个类的第一句隐藏着super();  
父级的super()会访问顶层Object.  
this(); super(); 只能出现1个.  
子类的权限一定要大于父类方法. 父类声明 为static时 .子类也必须为static  
Override Overload, 重写,重载.

2. final 最终类的关键字 不让子类重写 与abstract冲突(强制让子类重写)

## 面对对象
### 多态 plymorphic

1. 要有续存关系
2. 要有方法重写
3. 要有父类引用指向子类对象.多态为每个字类的方法的表现.

```
	class DamePlymorphic()
	{
		public static void main(String[] args)
		{	
			//此处为Father引用.因此值为super 空间的num.
			Father f = new Son();
			System.out.println(f.num);//值 为10 

			Son s = new Son();
			System.out.println(s.num);//值 为20 

		}
	}
	
	class Father{
		int num = 10;
	}
	class Son extends Father{
	//进入堆时,他创建自己,以及在本身内部创建一个super空间.则为Father的空间.
		int num = 20;
	}
```

4. 动点绑定方法,编译时看父类有没有方法.运行是看子类.
5. 静态方法为静态组长定.编译看父类(左边),运行也看父类(左边)
6. 向上转换和向下转换. 基本数据类型的自动类型提升和强制类型转换.

```
	class DemeSuperMan()
	{
		public void main(Strint[] agrs)
		{
			Person p = new SuperPerson();
			p.talk();
			SuperPerson sm = (SuperPerson)p;//向下强制转型.意思着将数据类型转为本身.不再调用super区的内容 .因为运行时看右边
			p.fly();//强制转换后可以调用下级的方法.
			
		}
	}
	class Person()
	{
		String name = "John";
		public void talk()
		{
			System.out.println("talk");
		}
		public void fly()
		{
			System.out.println("fly");
		}
	}
	class SuperPerson extends Person()
	{
		String name = "SuperPerson";
		public void fly()
		{
			System.out.println("fly");
		}
	}
```

7. 多态好处.提高代码的维护性,扩展性

```
	public static void method(Animal a)
	{
		Cat c = (Cat)a;//强转一次
		a.eat();//instranceof 
	}

	class Animal{
			
		}
		
		
	}
```

### 抽象类 abstract 用于强制子类必须做的事情.
1. 抽象类也拥有构造方法.
2. 抽象类可以没有具体实现. 并且不能被实例化.抽象关键字不能修饰成员变量.

```
	abstract class Animal{
		public abstract void eat();
	}
	
	class Cat extends Animal{
		public ovid eat()
		{
			System.out.println("eat");
		}
	}
```

3. 子类一定要重写抽象类中的方法.
4. abstract 不能与 static共存. 不能与private共存.

### 接口类 interface

```
	insterface Inter{
		int num = 10; //默认加上final 修饰.
		
	}
	insterface InterB{
		int num = 10; //默认加上final 修饰.
		
	}

	class Demo implements Inter,InterB{//多实现重写接口.
		public void print()
		{
			System.out.println(num);
		}
	}
```

- 接口中定义的变量都是常量.不允许修改.
- 接口中不能定义非抽象方法.接口类中不加修饰时,将默认加上abstract关键字.
- 接口是暴露原则. 所以所有方法和成员都会默认加上public方法.

- - -

### 接口抽象类的总结代码

```
	abstract class Animal 
	{
		private String name;
		private int age;
		public Animal(){} //空参构造
		public void set(String n) 
		{
			name = n;
		}
		public void set(int n) 
		{
			age = n;
		}

		public abstract void eat();	

		public abstract void sleep()
	}

	interface Jumping
	{
		public void Jump();
	}

	class Cat extends Animal  implements Jumping
	{
		
	}  
```

## day10
### 包package

> 包是将字节码分类存放
> 包必须是JAVA文件里的第一行有效语句  
每个文件只有能一个包  
 `package com.ddweb`  
编译带包类`javac -d xxx.java`

### improt导入包 使包的类对当前可见.
1. 包的导入`import com.ddweb.Person;`
2. 第二种导包形式`import java.util.*;`使用通配符导入全部.

### 权限修饰符
1. `private`私有权限
2. `protected`受保护本类可权限 
3. `public`公共可访问权限

### 内部类
1. 外部类访问内部对旬,必须写明.
2. 局部内部类

```
    //存在于方法中的类
    class Demo{
    	public void method()
    	{
    		class Inner{
    			System.out.println("该类为局部内部类.");
    		}
    	}
    }
```

### 匿名类

```
    class Demo{
    	public void method()
    	{
    		class Inner{
    			System.out.println("该类为局部内部类.");
    		}
    	}
    }
```

1. `new className();`->是实例化一个类.`new interfaceName(){};`是实现一个方法.
2. 匿名内部类无法向下转型,因为没有子类.
3. 匿名类在开发中的具体使用,当着参数传递
4. 匿名内部类实际上就是重写interface 或者 abstract 类.因为该种类的子类都是没有具体指定的.重写就是调用该类的匿名内部子类.

## eclipse
### 常用键

> `Alt+\` 代码提示  
`Ctrl+n` 新建 n= New   
`Ctrl+Shift+f` 格式化代码   
`Ctrl+/,Ctrl+Shift+/,Ctrl+Shift+\` 注释,反注释   
`Ctrl+shift+o` 整理代码,自动导入包   
`Alt+上箭头|下箭头` 上下移动代码  
`C+上箭头|下箭头` 上下移动代码  
`Ctrl+鼠标移到对应,F3` 查看源代码 
`Ctrl+Shift+T` 查找具体类  
`Ctrl+o` 查找具体方法  
`Ctrl+1` 给出当前代码的建议方法  
`Ctrl+d` 删除代码  
`Alt+Shift+m` 抽取代码  
`Alt+Shift+r` 方法或变量改名  
`Alt+Shift+s` 自动生成方法(o,m,r) 

## Object
### Object是JAVA的顶级类.
> `hasCode()` 获取has值  
`getClass()` 获取该对象的字节码文件  
`toString()` 获取对象的字符串表示 
`equals()` 比较两个对象是否相等

### ==和equals的区别
1. ==是比较运算符,即可以比较基本类型,也可以比较引用数据类型.比较引用数据型是比较的是引用地址值
2. equals方法只能比较引用数据类型.比较的是引用数据的地址值.

### eclipse文档注释功能
- 编译为文档`javadoc xxx.java`.
- 使用`eclipse`->`exprot`可以导出.

```
- 字符串是一个常量,一旦创建就不可改变.
- 字符串的本质是一个数组.使用`final`修饰.存放在堆内存的常量池里.
- 字符串的`equlas`是用来比较字符串的值.而非内存地址.
/** 
* @func /**代表是文档注释./*只代表普通注释.
*/
```

- Java压缩`jar.exe`.eclipse导出.`eclipse->exprot->jar`

## Java的API
### Object类
- Object类是所有类的最终类(flish).
- `Object.equals`是比较内存地址.

### String类
> 获取字符串长度`String str = "aaa";str.length('');`  
> 截取字符串长度`substring(1,3)`  
> 将字符串转数组`toCharArray()`  
> 判断字符串是否相同,忽略大小写`equalsIgnoreCase(String s)`

### `StringBuffer`
- 用于字符串缓冲区对象,提高字符串的操作效率.
- 默认容量为16字符  

### 时间
- 导入包`java.util.date`,使用`new Date()`

#### `Calendar`类
1. 导包`java.util.Calendar`
2. 获取子类对象`Calendar c = Calendar.getInstance()`
3. 获取日期年`int year = c.get(Calendar.YEAR);`,月`int month = c.get(Calendar.MONTH+1)`
4. 时间偏移`c.add(Calendar.DAY,588)`

### 2018-5-10
#### 包装类

##### Integer

- 转数字.`Integer.parseInt('101')`;提供大量方法,以便于转换.第二个参数用于指定进制,例:`Integer.parseInt("11001",2);`
- 转字符.`Integer.toString(5522);`,参数二用来接收进制
- 构造方法,`new Integer("3424")`,使用非静态方法转为数字`xx.intValue()`
- 最大值`Integer.MAX_VALUE`,最小值`Integer.MIN_VALUE`
- 转进制`Integer.toHexString()`,`Integer.toBinaryString()`,`Integer.toOctalStrint()`
- 自动装箱机制`Integer in = 1;`,`in`将自动为引用类型数据.自动执行`Integer in = new Integer(1);`
- `NULL`是引用类型的公共型.

##### System

- 取得系统时间`System.currentTimeMillis()`
- 回收垃圾`System.gc()`,回收垃圾时会调用``
- 取得属性`System.getProperties()`,需要import`import java.util.Properties;`,例:`Properties pro = System.getProperties()`
- 复数组组`System.copyArray(src,srcPos,dist,distPos,lenth)`

##### Math

- 获取绝对值`Math.abc(num)`
- 取得整数值`Math.ceil()`,`Math.floor()`
- 取得随机数`Math.random()`
- 取整`Math.round()`

##### Arrays

- 升序排列`Arrays.sort()`
- 搜索数组(二分搜索法)`binarySerach(arr,10)`
- 转字符`Array.toString()`

##### BigInteger

- 将字符串转换成大数据`BigInteger num = new BigInteger("324324324324")`
- 计算对象差`bigNum.subtract(BigNumber2)`
- 乘积`bigNum.multiply(BigNumber2)`

##### BigDecimal

- 高精度计算`BigDecimal f = new BigDecimal("2.4325324324")`
- 求和`f1.add(f2)`
- 相减`f1.subtract(f2)` 
- 除法`f1.divide()`

##### Collection
- 单列数据,不是双列
- 分为`List(有序)->(ArrayList[数组列表],LinkedList[链表])`,`Set(无序)->(HashSet,LinkedShe)`两大类
- 方法`add(),clear(),contains(),remove(),size(),toArray()`
- 泛型`<String>`用于规定集合指定存放的数据类型.
- 限定 - 限制父类`<? extends parentObj>`,限制子类`<? supper childObj>`
- 数组:查询快,但修改变
- 链表:查询慢,但修改快
- ArrayList的初始值为10个
- LinkedList可以操作头属,提供了大量的方法,比如`addFirst(),addLast(),getFirst()`
- 判断集合是否为空`coll.isEmpay()`
- Vector集合,已经被ArrayList取代,本质上也是数组,方法:`addElement(E obj)`
- Set方法不允许有重复数据,`HashMap`由哈希表提供支持.是无序集合,没有索引,默认初始量为16,instance:`Set<String> set = new HashSet()`,哈希表是数组和链表的混合体.
- 加载因子,是数组的百分比,如果当容量达到百分比后,数组就会扩容.数据扩容也称为`数据再哈希`
- 得到哈希代码`hashCode()`
- 链表,LinkedList:有序.`LinkedHashSet()`

### 2018-5-15

#### Map(映射关系的键值对:key->value)
- 可以存双列数据
- 存入数据`Map<String,Integer> map = new HashMap<String,Integer>();`
- 添加数据`map.put('key','value')`,如果存的值已经存在,则返回存在的值,并覆盖
- 取得数据`map.get('key')`
- 移除数据`map.remove('key')`
- 返回长度`map.size();`
- 得到所有键`map.keySet();`,将所有键存到一个`Set`集合
- 集合映射关系`entrySet()`
- 线程安全集合`Hashtable`,已经被`hashMap`取代

##### 几种数组
- 字符数组`String[]`,数字型`int[]`,对象型`Object[]`

##### 3种长度表现形式
- 数组.length
- 字符串.length()
- 集合.size()

##### Iterator-迭代器
- 用来获取各种集后的内容.获得实现类对象`Iterator it = coll.iterator()`
- 是否还有元素`hasNext()`
- 取出一个元素`next()`

##### 增强循环foreach
- 特色:没有索引,直接遍历数据,`for(int i : arr)`
- 过程中可以调用对象的方法.

### 2018-5-15
- List列表(有序,索引,可以重复元素) 
- example:`List<String> l = new ArrayList<String>();`
- 常用方法`add(),get(),set(),remove()`
- 字符串本质上不属于基本类型,所以不能用`==`直接判断.需要使用方法`s.equals("")`
- 迭代器在遍历过程中不允许修改,会引发并发修改异常

### 2018-5-16

#### 异常

- Exception:异常
- Error:严重错误/必须修改代码.
- 抛出异常:`throw new Exception,NoSuchElmentException("error info")`,使用异常时需要声明异常,关键字:`throws`,抛出空指针`new NullPointerException("空指针")`
- 调用一个异常方法时,调用者必须处理,将异常再次抛出给虚拟机
- 运行时异常可以不用声明异常,运时时异常:`RuntimeException();`,因为运行时后面的代码没有意义,将直接全部停止.
- 父类有异常时,子类不用抛异常.但如果父类不抛异常,则子类不用抛.如果子类抛出异常将不能级别高于父类的.

#### IO类

- 文件操作包`java.io.File`
- 与系统有关和路径隔符`File.pathSeparator`,与文件分隔符`File.separator`
- 创建一个文件对象`File fl = new File("D:\\pathname\filename.fileExtand");`,`new File("D","pathname")`
- 创建一个文件类`file.createFile();`
- 创建目录`file.mkdir();`,创建多级目录`file.mkdirs()`
- 获取绝对路径字符串`getAbsolutePath();`
- 返回抽象路径名`file.getAbsoluteFile()`
- 返回文件的大小`file.length()`
- 获取父路径`file.getParentFile()`
- 判断是否是路径 `file.isDirector()`
- 获取目录的扫描列表`File[] fs = file.list();`,返回全路径`file.listFiles()`
- 获取系统所有根目录`File[] frs = _file.rootList();`
- 文件过滤器`file.Filter()`

### 2018-8-3

- 字节流,每次只操作文件中的一个字节
- 流对象自己不操作文件,所有操作依赖于操作系统
- 操作步骤:创建流子类的对象,绑定数据目的,调用流对象的读写方法,关闭流对象
- 输出流`java.io.FileOutputStream`,创建:`FileOutputStream('./test.txt')`,写入byte数组`fs.write("hellp".getBytes())`,关闭`fs.close()`
- 输入流`java.io.FileInputStream`,创建:`FileInputStream('./test.txt')`,读取一个字级数组`int oneChar = fs.read();System.out.println(char(oneChar))`.读取到没有字节时会返回`-1`
- 将输入流读取字节数组,再转为字符输入`byte[] b = new byte[1]; fs.read(b)`.每次读取的长度`int len = fs.read(b)`
- 字符解码`new String(byte)`
- 输入流的超类`fs = new FileWriter("./a.text")`,写入`fs.write({'a','b'})`,此方法需要要刷新否则不会到达目的地`fs.flush();`,关闭`fs.close();`
- FileReader只能读取文本`new FileReader("./a.txt")`,`int len = fs.read()`
- 字符流:字符转字节流.`OuputStreamWriter`,`new FileOutputStream("D:/workroom/java_study/2018-3-3/GBK.txt");new OutputStreamWriter(fos,"GBK");`
- 字符流:字节转字符流.`InputStreamReader`,`new FileInputStream("D:/workroom/java_study/2018-3-3/GBK.txt");new InputStreamReader(fos,"GBK");`
- 获取当前时间`System.getCurrentTimeMilils()`
- 将字符串转换为字符数组`"Hello".toCharArray()`
- 字符串缓存区`new BufferedWriter( new FileWriter("./a.text"))`,独有的`writeLine()`根据操作系统写入一下换行符
- 字符输入缓存区`BufferedReader()`,独有一个读行的方法`readLine()`
- Pproperties集合:用来存储键值对.等同于Map中的put方法.
- 反序列化`new Properties().load(new FileReader("properties.txt"))`
- 序列化:ObjectOutputStream `new ObjectOutputStream(new FileOutputStream("./o.txt")).writeObject(obj)`
- 反序列化:ObjectInputStream `new ObjectInputStream(new FileInputStream("./o.txt")).readObject(obj)`
- 序列化`new Properties().load(new FileReader("properties.txt"))`
- 禁止序列化关键字`transient`.`static transient a = 100`

##### try,catch,finally

- catch可以多个处理.`cathc(NullPointerExceotion(ex) ){} catch(NoSuchElmentException ex){}`
- 多catch处理时,越高级的异常类越要写在最下面

### 2018-8-5

* 多线程

    - 创建一个线程,继承线程主方法`class SubThread extend Thread{}`
    - 重写`class SubThread extend Thread{ public void run(){}}`方法
    - 创建一个线程`SubThread s1 = new SubThread`
    - 开始线程`s1.start();`
    - 设置线程名称`s1.setName('newThreadName')`
    - 打印纯程名称`System.out.println(Thread.currentThread().getName())`
    - 线程休眠`Thread.sleep(500);`
    - 重启休眠线程`new SleepThread().start()`
    - 通过`Runnable`接口实现另一种线程`public class SubThread2 implements Runnable{ public void run(){}}`,重写`run`方法来实现 
    - 建立`Runnable`接口实现的线程`n2 = new SubThread2()`
    - 调用`Thread`来启动`Thread s2 = new Thread(n2)`
    - 为匿名内部类创建线程`new Thread(){ public void run(){} }.start()`
    - 为匿名内部类创建线程`Runnable r = new Runnable(){ public void run(){} }; new Thread(r).start();`
    - 为匿名内部类创建线程`new Thread(new Runnable(){ public void run(){}}).start()`
    - 创建线程池`import java.util.concurrent.ExecutorService;`
    - 创建线程池`ExecotorService es = Executors.newFixedThreadPool(2)`
    - 添加线程到线程池`es.submit(new Thread(new Runnable(){ public void run(){}}))`,submit会返回一个线程结果的`Future`类型
    - 线程返回值`public class ThreadCall implements Callble<string>{ public void call(){ return "abc";}}`
    - 从提交的线程里获取返回值`Future<String> t = es.submit(new ThreadCall());`
    - 从提交的线程里获取返回值`String f = t.get();`
    - 销毁线程池`es.shutdown();`

* 多线程安全
    
    - 当全部线程同时操作一个数据时,可能会引出安全问题.
    - 使用synchronized包含同步操作数据,会保证数据的安全`Object obj = new Object();synchronized(/*需要任何对象*/obj){ num-- }`
    - 使用`synchronized`会使运行速度下降.
    - `synchronized(obj)`,其中`obj`且来锁数据的同步锁.通过该锁来实现线程同步操作
    - 通过`synchronized`声明同步方法`public synchronized void fn(){}`,在声明方法中,同步锁对象为`this`本身
    - 静态方法中的synchronized同步锁为类名下的class属性`className.class`
    - 通过`Lock`接口锁来锁定数据.实现同步`java.util.concurrent.locks.Lock; public class ThreadSub implements Runnable{}`
    - 通过`Lock`接口锁来锁定数据.实现同步`private Lock lock = new ReentrantLock()`
    - 通过`Lock`接口锁来锁定数据.实现同步`lock.lock()`
    - 释放`Lock`数据锁`lock.unlock();`线程进入同步锁线程未销毁将不会释放锁.
    - 线程等待`sycnhronized(obj){ obj.wait(); }`
    - 线程唤醒`sycnhronized(obj){ obj.notify(); }`
        
* 数据库
    
    - 排序查询`order by id desc`
    - 聚合查询`select count(*) as 'count' FROM database;`结果`count:10`
    - 分组查询`select sum(money),zname from databasename where zname like'%支出%' group by zname order by gesum desc`

### 2018-8-6

* 反射

    - 当类启动时,会被类载入内存,并创建一个字节码对象
    - 检查类的内部结构,然后根据变量和方法分配内存.
    - 解析类,将类的二进制数据的符号引用转为直接引用.比如`a=10`转为`&1010`
    - 初始化类.进入堆栈.
    - Bootstrap ClassLoader 根加载器 -> 也被称为引导类加载器，负责Java核心类的加载如System,String等。在JDK中JRE的lib目录下rt.jar文件中
    - Extension ClassLoader扩展加载器 -> 负责JRE的扩展目录中jar包的加载。在JDK中JRE的lib目录下ext目录
    - System ClassLoader 系统加载类 -> 责在JVM启动时加载来自java命令的class文件，以及classpath环境变量所指定的jar
    - *反射机制*JAVA反射机制是在运行状态中，对于任意一个类，都能够知道这个类的所有属性和方法；对于任意一个对象，都能够调用它的任意一个方法和属性；这种动态获取的信息以及动态调用对象的方法的功能称为java语言的反射机制。要想解剖一个类,必须先要获取到该类的字节码文件对象。而解剖使用的就是Class类中的方法.所以先要获取到每一个字节码文件对应的Class类型的对象。
    - 反射类,调用类的父类getClass:`new Dome().getClass()` 
    - 反射类,调用类的静态类名class:`new Dome.class` 
    - 反射类,调用类的静态方法forName:`Class reflex = Class.forName("cn.ddweb.com.demo")`,需要传入包名
    - 获取所有公共构造方法`Constructor[] reflexCs = reflex.getConstructors()` 
    - 获取空参构造方法`Constructor reflexC = reflex.getConstructor()` 
    - 获取有参构造方法`Constructor reflexC = reflex.getConstructor(String.class,int.class)` .根据有参构造方法需要的参数传入对应的参数,但只能传类型的静态类`.class`
    - 运行获得的构造方法`reflexC.newInstance("string",100)`
    - 快捷运行构造方法`new Dome().getClass().newInstance()`,使用快捷运行的前提是方法有公共的构造方法`public Demo(){}`
    - 获取私有在类的所有构造方法`Constructor[] cons = reflex.getDeclaredConstructors()`
    - 获取私有在类的构造方法`Constructor con = reflex.getDeclaredConstructor()`
    - 暴力反射,使JAVA跳过权限检查强制运行私有方法`con.setAccessible(true);`
    - 获取所有成员变量`Field[] fs = reflex.getFields()`
    - 获取变量`Field f = reflex.getField("cat")`
    - 获取所有成员方法`Method[] ms = reflex.getMethods()`
    - 获取方法`Method m = reflex.getMethod("printCat")`
    - 运行获取到的方法`m.invoke(reflex.newInstance());`
    - 获取成员方法并运行`Method method = c.getMethod("sleep", String.class,int.class,double.class);`
    - 反射集合类并向里边添加两种数据`ArrarList<String> a = new ArrayList<String>();`
    - 反射集合类并向里边添加两种数据`a.add("a")`
    - 反射集合类并向里边添加两种数据`Class arr = a.getClass()`
    - 反射集合类并向里边添加两种数据`Method am = arr.getMethod("add",Object.class)`
    - 反射集合类并向里边添加两种数据`am.invoke(arr,1500)`
    - 通过配置文件运行反射功能->创建文件流`FileReader fr = new FileReader("propertis.config")`
    - 通过配置文件运行反射功能->创建集合`Properties ps = new Properties()`
    - 通过配置文件运行反射功能->载入到集合`ps.load(fr)`
    - 通过配置文件运行反射功能->关闭文件流`fr.close()`
    - 通过配置文件运行反射功能->取得类名`String className = ps.getProperty("className")`
    - 通过配置文件运行反射功能->取得方法名`String methodName = ps.getProperty("methodName")`
    - 通过配置文件运行反射功能->反射该类`Class c = Class.forName(className)`
    - 通过配置文件运行反射功能->取得构造方法`Object obj = c.newInstance()`
    - 通过配置文件运行反射功能->取得方法`Method m = c.getMethod(methodName)`
    - 通过配置文件运行反射功能->执行方法`m.invoke(obj)`
    
* transient关键字,用来修饰临时变量,一些敏感信息,此变量不会被序列化
    
* JDBC数据库
    
    - 使用MYSQL驱动管理包`DriverManager`
    - 注册驱动`Class.forName("com.mysql.cj.jdbc.Driver")`,使用反射类型,是为了防止驱动被重复注册
    - 定义连接地址`String url = "jdbc:mysql://localhost:3306/jdbc_learn?useUnicode=true&characterEncoding=UTF-8&useJDBCCompliantTimezoneShift=true&useLegacyDatetimeCode=false&serverTimezone=UTC"`
    - 连接数据库`Connection mysql = DriverMnager.getConnection(url,user,password)`
    - 获得语句执行声明平台`Statement mysqlStat = mysql.createStatement()`
    - 执行语句,会返回插入数据的ID`int id = mysqlStat.executeUpdata("INSERT INTO xxxxxxx")`
    - 释放资源`mysql.close()`,`mysqlStat.close()`
    - 查询数据库`ResultSet rs= mysqlStat.executeQuery(sql)`
    - 遍历结果集`while(rs.next()){ System.out.println(rs.getInt(`sid`)+rs.getDouble(`sid`))}`
    - 关闭结果集`rs.close();`
    - 查询语句点位符`select ?,? from db;`
    - 调用PrepareStatement设置占位符`PerpareStatement pst = mysqlConnet.prepareStatement(sql)`
    - 设置占位符`pst.setObject(1,user)`,`pst.setObject(2,pwd)`
    - 直接执行PerpareStatement的SQL语句`pst.executeUpdate();`
    - 直接执行PerpareStatement的查询`ResultSet rs = pst.executeQuery();`
    - 取得集合`Sort s = new Sort(rs.getInt("sid"),rs.getString("sname"),rs.getDouble("sprice"),rs.getString("sdesc"));`

- JDBC-Utils工具类

    - jdbc-utils`public class jdbcUtils{ private static Connection con; static{  ...数据库连接代码 } }`
    
- JDBC-Properties
    
    - 读取为同目录的配置文件必须要用类的加载器.
    - 取得类的加载类`jdbcProClass.class.getClassLoader()`
    - 返回指定要读取的资源流`getResourceAsStream("database.properties")`,返回值为`InputStream`.方法会从类的当前路径读取
    - 加载流`InputStream in = PropertiesDemo.class.getClassLoader().getResourceAsStream("database.properties");`

* 扫描系统输入`Scanner sc = new Scanner(System.in)`,系统输入`System.in`,系统输出`System.out`

- 网张编程
    - IPv4表示4字节的二进制来存储IP地址,为了便于记忆,转为4个十进制来表示,每个十进制占1个字节`192.168.0.1`
    - 程序对外的逻辑端口是由操作系统自动分配.1024之前的端口不能用.
    - 取得本地主机名及IP地址`InetAddress inet = InetAddress.getLocalHost().getLocalHost();`,输出`DESKTOP-39IK6NT/192.168.0.2`
    - 取得IP地址`InetAddress.getLocalHost().getHostAddress()`
    - 取得主机名`InetAddress.getLocalHost().getHostName()`
    - 传递主机名取得IP`InetAddress.getByName("www.baidu.com");`
    - UDP协议
        - 将数据先转为字节`byte[] data = "你好这是数据".getBytes()`
        - 取得IP地址`InetAddress inet = InetAddress.getByName("localhost");`
        - 数据打包DatagramPacket:`DatagramPacket dp = new DatagramPacket(data,data.length,inet,6000);`
        - 数据发送DatagramSocket:`DatagramSocket sp = new DatagramSocket();`
        - 数据发送`sp.send(dp);`,送闭套接字`sp.close();`
        - 接收端口绑定端口`DatagramSocket ds = new DatagramSocket(6000);`
        - 创建接收字节数组(一般为64字节)`byte[] data = new byte[1024*64];`
        - 创建空数据包`DatagramPacket dp = new DatagramPacket(data, data.length);`
        - 准备接收数据`ds.receive(dp);`receive会有线程等待,在没有接收到数据前会一直等待.
        - 获取发送端IP对象`String ip=dp.getAddress().getHostAddress();`
        - 获取接收到的数据的数据长度(字节个数)`int length = dp.getLength();`
        - 获取发送端在数据包的端口对象`int port = dp.getPort();`
        - 关闭对象`ds.close();`
    - TCP
        - *实现TCP客户端*`java.net.Socket`
        - 创建一个客户端类`Socket soc = Socket('ip address',8685)`
        - 创建数据库,向服务端写数据`OutputStream sendO = soc.getOutputStream();`
        - 向流写入数据`sendO.write("Hello Server".getBytes())`
        - 关闭数据流`sendO.close();`
        - *实现服务端*
        - 创建服务端`ServerSocket ser = new ServerSocket(8888)`
        - 取得连接客户端的套接字`Socket soc = ser.accept();`
        - 获取输入流`InputStream inServer = soc.getInputStream()`
        - 定义接收数据的字节数组`byte[] acceptData = new byte[1024]`
        - 将数据流读出`inServer.read(acceptData)`,`new String(data,0,len)`
        - 关闭套接字对象`sendO.close()`,关闭服务器`soc.close()`
        - 服务端没有流功能,它的流对象来源于客户端.
        
    
### JAVA学习 2018.1.17

- `F:\video\Java\北京黑马java28期基础班+就业班\01_2016年北京黑马最新基础班\day30\day30_video` 

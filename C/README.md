## 基础

- 基本数据类型
    - void：声明函数无返回值或无参数，声明无类型指针，显示丢弃运算结果。（C89标准新增）
    - char：字符型类型数据，属于整型数据的一种。（K&R时期引入）
    - int：整型数据，表示范围通常为编译器指定的内存字节长。（K&R时期引入）
    - float：单精度浮点型数据，属于浮点数据的一种。（K&R时期引入）
    - double：双精度浮点型数据，属于浮点数据的一种。（K&R时期引入）
    - _Bool:布尔型（C99标准新增）
    - _Complex:复数的基本类型（C99标准新增）
    - _Imaginary:虚数，与复数基本类型相似，没有实部的纯虚数（C99标准新增）
    - _Generic:提供重载的接口入口（C11标准新增）
    - 类型修饰关键字
    - short：修饰int，短整型数据，可省略被修饰的int。（K&R时期引入）
    - long：修饰int，长整型数据，可省略被修饰的int。（K&R时期引入）
    - long long：修饰int，超长整型数据，可省略被修饰的int。（C99标准新增）
    - signed：修饰整型数据，有符号数据类型。（C89标准新增）
    - unsigned：修饰整型数据，无符号数据类型。（K&R时期引入）
    - restrict:用于限定和约束指针，并表明指针是访问一个数据对象的唯一且初始的方式。（C99标准新增）

- 复杂类型关键字
    - truct：结构体声明。（K&R时期引入）
    - nion：联合体声明。（K&R时期引入）
    - enum：枚举声明。（C89标准新增）
    - typedef：声明类型别名。（K&R时期引入）
    - sizeof：得到特定类型或特定类型变量的大小。（K&R时期引入）
    - nline:内联函数用于取代宏定义，会在任何调用它的地方展开。（C99标准新增）
    - 存储级别关键字
    - uto：指定为自动变量，由编译器自动分配及释放。通常在栈上分配。与static相反。当变量未指定时默认为auto。（K&R时期引入）
    - static：指定为静态变量，分配在静态变量区，修饰函数时，指定函数作用域为文件内部。（K&R时期引入）
    - egister：指定为寄存器变量，建议编译器将变量存储到寄存器中使用，也可以修饰函数形参，建议编译器通过寄存器而不是堆栈传递参数。（K&R时期引入）
    - xtern：指定对应变量为外部变量，即标示变量或者函数的定义在别的文件中，提示编译器遇到此变量和函数时在其他模块中寻找其定义。（K&R时期引入）
    - const：指定变量不可被当前线程改变（但有可能被系统或其他线程改变）。（C89标准新增）
    - olatile：指定变量的值有可能会被系统或其他线程改变，强制编译器每次从内存中取得该变量的值，阻止编译器把该变量优化成寄存器变量。（C89标准新增）
    
- 流程控制关键字
    - 跳转结构
        - return：用在函数体中，返回特定值（如果是void类型，则不返回函数值）。（K&R时期引入）
        - continue：结束当前循环，开始下一轮循环。（K&R时期引入）
        - break：跳出当前循环或switch结构。（K&R时期引入）
        - goto：无条件跳转语句。（K&R时期引入）
    - 分支结构
        - if：条件语句，后面不需要放分号。（K&R时期引入）
        - else：条件语句否定分支（与if连用）。（K&R时期引入）
        - switch：开关语句（多重分支语句）。（K&R时期引入）
        - case：开关语句中的分支标记，与switch连用。（K&R时期引入）
        - default：开关语句中的“其他”分支，可选。（K&R时期引入）
    - 编译
        - \#define 预编译宏
        - \#if 表达式 #else if 表达式 #else #endif 条件编译
        - \#ifdef 宏 #else #endif 条件编译
        - \#ifndef 宏 #else #endif 条件编译与条件编译

- 数据类型`定义整型 有无符号(unsigned)`
    - 长整型(32位)`long int i = 10;`
    - 短整型(16位)`short int i = 10;`
    - 无符号短整型(16位)`unsigned short int`
    - 整型(16位)`int i = 10;`
    - 浮点型(64位)`float i = 10;`
    - 双精度(64位)`doble i = 10;`
    - 字符`char i = 'a';`
    - 字符串`char i[] = 'aba';`

- 字符串
    - 字符结尾会自动加 \0 作为结束标志
    - char可以根据ascii码来打印 
    - 字符在内存在以ascii码来表示,因些直接提取为数字 .
    - 字符 按%d输出就是求编号ascii码.如果按%c输出就是根据ascci码输入字符.
    - 数据自动转换时.长度短的类型会自动转换为长类型变量 char1字节会转int(4字节) int(4字节)会转float(4字节,指数) float(4字节) 转double(8字节)
    
    - 字符串操作 
    	- strcpy(p, p1) 复制字符串 
    	- strncpy(p, p1, n) 复制指定长度字符串 
    	- strcat(p, p1) 附加字符串 
    	- strncat(p, p1, n) 附加指定长度字符串 
    	- strlen(p) 取字符串长度 
    	- strcmp(p, p1) 比较字符串 
    	- strcasecmp忽略大小写比较字符串
    	- strncmp(p, p1, n) 比较指定长度字符串 
    	- strchr(p, c) 在字符串中查找指定字符 
    	- strrchr(p, c) 在字符串中反向查找 
    	- strstr(p, p1) 查找字符串 
    	- strpbrk(p, p1) 以目标字符串的所有字符作为集合，在当前字符串查找该集合的任一元素 
    	- strspn(p, p1) 以目标字符串的所有字符作为集合，在当前字符串查找不属于该集合的任一元素的偏移 
    	- strcspn(p, p1) 以目标字符串的所有字符作为集合，在当前字符串查找属于该集合的任一元素的偏移  
    
    - * 具有指定长度的字符串处理函数在已处理的字符串之后填补零结尾符 
    	- 字符串到数值类型的转换 
    	- strtod(p, ppend) 从字符串 p 中转换 double 类型数值，并将后续的字符串指针存储到 ppend 指向的 char* 类型存储。
    	- strtol(p, ppend, base) 从字符串 p 中转换 long 类型整型数值，base 显式设置转换的整型进制，设置为 0 以根据特定格式判断所用进制，0x, 0X 前缀以解释为十六进制格式整型，0    前缀以解释为八进制格式整型
    	- atoi(p) 字符串转换到 int 整型 
    	- atof(p) 字符串转换到 double 符点数 
    	- atol(p) 字符串转换到 long 整型 
    
    - 字符检查 
    	- isalpha() 检查是否为字母字符 
    	- isupper() 检查是否为大写字母字符 
    	- islower() 检查是否为小写字母字符 
    	- isdigit() 检查是否为数字 
    	- isxdigit() 检查是否为十六进制数字表示的有效字符 
    	- isspace() 检查是否为空格类型字符 
    	- iscntrl() 检查是否为控制字符 
    	- ispunct() 检查是否为标点符号 
    	- isalnum() 检查是否为字母和数字 
    	- isprint() 检查是否是可打印字符 
    	- isgraph() 检查是否是图形字符，等效于 isalnum() | ispunct() 
    
    - 输入/输出
        - `putchar();`输出字符
        - `putwchar();`输出宽字符
        - `getchar();`输入字符
        - `getwchar();`输入宽字符
    
- 常识
    - 32位操作系统 int long 等价.
    - C语言boolean值是用 0 和 1 来代替.
    - char short字符无论有无符号,在表达式都会转为int 或者 unsigned int类型
    - 布尔需要引入stdbool.h 支持C语言布尔
    - 定义常量 #define 
    - float只能精确到小数点后6位.
    - double只能保证小数点15位是正确的.其他会有误差.
    - windows平台long double 和 double是相等的.

- 输入格式`printf("%d",12);`
    - `%` 表示格式说明的起始符号，不可缺少。
    - `-` 有-表示左对齐输出，如省略表示右对齐输出。
    - `0` 有0表示指定空位填0,如省略表示指定空位不填。
    - `m.n` m指域宽，即对应的输出项在输出设备上所占的字符数。N指精度。用于说明输出的实型数的小数位数。为指定n时，隐含的精度为n=6位。
    - `l` 或 `h`l对整型指long型，对实型指double型。h用于将整型的格式字符修正为short型。
    - 打印输出格式
    	- `%a(%A)` 浮点数、十六进制数字和p-(P-)记数法(C99)
    	- `%c` 字符
    	- `%d` 有符号十进制整数
    	- `%f` 浮点数(包括float和doulbe)
    	- `%e(%E)` 浮点数指数输出[e-(E-)记数法]
    	- `%g(%G)` 浮点数不显无意义的零"0"
    	- `%i` 有符号十进制整数(与%d相同)
    	- `%u` 无符号十进制整数,支持范围0-UNIT_MAX
    	- `%o` 八进制整数 e.g. 0123
    	- `%x(%X)` 十六进制整数0f(0F) e.g. 0x1234
    	- `%p` 指针
    	- `%s` 字符串
    	- `%%` "%"
    - `标志
    	- 左对齐：`"-" e.g. "%-20s"`
    	- 右对齐：`"+" e.g. "%+20s"`
    	- 空格：若符号为正，则显示空格，负则显示`"-" e.g. "% 6.2f"`
    	- 对c,s,d,u类无影响；对o类，在输出时加前缀o；对x类，在输出时加前缀0x； 对e,g,f 类当结果有小数时才给出小数点。
    - 格式字符串（格式）
    	- `〔标志〕〔输出最少宽度〕〔．精度〕〔长度〕类型
    	- `"％-md"` ：左对齐，若m比实际少时，按实际输出。
    	- `"%m.ns"`：输出m位，取字符串(左起)n位，左补空格，当n>m or m省略时m=n
    	- `e.g. "%7.2s"` 输入CHINA
    	- `输出" CH"
    	- `"%m.nf"：`输出浮点数，m为宽度，n为小数点右边数位
    	- `e.g. "%3.1f"` 输入3852.99
    	- `输出3853.0
    	- `长度：为h短整形量,l为长整形量
    - 长度
    	- `h`短整形量
    	- `l`长整形量

- 浮点数在内存中的表示方法
    - 浮点数在内存中分为符号位(首位),指数位,小数位三部份组成.
    - 指数位的偏移量为127. 实际指数+127为指数位的二进制.
    - 浮点数的具体数据将被转为二进制后存储在小位位.根据转换成的实际值偏移.比如1100.11 偏移为1.10011. 01011.11偏移为 1.01111.
    - 指数部份称为阶码.
    - 小数部份的首位数据1将被隐藏.因此实际的小数位置的显示为10011  01111. 
    
    - float类型
        - 浮点占32位.	
        - 阶码为 31位到23 ,共8位..
        - 阶码 = 指数+127

    - double类型
        - 占64位,阶码11位.53个小小数位
        - 阶码偏移量为1023

    - double float 内存机制,*从事嵌入式WG开发要学*


- 整型常量
    - 99 99l l= longint 长整型. 
    - INT在32位以下占2字节.在32位和longint一致.占4字节.win98下也是占2字节.

- 自动变量
    - 自动变量只有在定义的时候才会创建, 当使用完后将被系统回收. 
    - 一般情况下,不作专门说明的局部变量都是自动变量.
    - 自动变量关键字 auto.比如. 自动变量加关键字只是为了软件开发规范.但如果只是需要程序运行,可以省去aotu关键字.

```
void run(auto int n){
	printf("%d",n);
}
```

- 函数调用是自动调用.函数结束自动销毁.

- 静态变量
    - 静态变量关键字 static 声明.静态变量不会被回收,内存地址也不会改变.

```
void static caver(static int n)
{
	printf("%d",n);
}
```

- longlong
```
void main()
{
	long long moblie = 13766666666;
	printf("%lld",mobile);
}
```
- long long类型的提出就是为了存储手机号.QQ号等. 占用8个字节.

- long double
    - 32位 VC编译一致. 但不同的编译器有所不同.有的时候占12字节.

- 宽字符问题 long char 多字符集
    - 两个字符连在一起,可以输出一个汉字.printf("%c%c",ch[0],ch[1]);
    - `local.h` 本地化头文件.`setlocale(LC_ALL,"chs");//设置本地化.wchar_t ch = L"我";wprintf(L"%wc",ch);`

```
int main()
{
	//MassageBox(0,"你和我","我和你",0);
	MassageBoxA(0,"你和我","我和你",0); //ASSIC码.不管是多字节,还是unicode.都表示多字节.
	MassageBoxW(0,L"W你和我",L"W我和你",0); //强制多字节.
	MassageBox(0,TEXT("你和我"),TEXT("我和你"),0);//TEXT函数,自动适应unicode和多字节.
}
```

- 基本运算符与表达式
    - 表达式
    - 表达式就是一个求值的规则.1+2; 就是表达式,+是算符,操作数是1和2
    - 算术表达式 1+2
    - 关系静态式 5>3
    - 函数表达式.
    - 特性
    - 整数运算时只能得到整数. 比如 7/3 = 2. 
    - 求余运算,两边必须是整数.

- 运算逻辑
    - 循环语句
        - `while`表达式循环,`while( 1>0 && 2<3)`表达式可以是任何.  
        - `do{}while(1<0)`先执行再判断条件.因此会至少执行一次.  
        - `for()`语句.  

```
//数字倒置
void main(){
	//任意数% 10可以取得个位.

}
```

- 整数不能直接打印,需要转成字符串

```
int main()
{
	//printf(10);//报错
	printf("%d",10); //正确
}
```

- *++*
    - ++优先级高于乘法,加减法.
    - 逗号运算符
    - 多个表达式,用 , 连接起来就是逗号运算符.值为最后一个运算的结果.
    - 逗号运算符的优先级最低.
    - 逗号还可以用来连接多个语句.

```
int main()
{
	int num = (1,2,3,5+8,10-5);
	// int n = 1,2; //错误 
	int n = (1,2); //正确
	printf("hellow"),printf("world!");
	getchar();
}
```

- 用于计算的时候,起到 顺序求值运算符的效果.
- 关系运算符
- 浮点不推荐使用 == 来运算.因为float只精确到小数后7位. double只精确到15位.
- 字符串比较
- 字符串常量可以直接比较是否相等.比较的是内存地址. 字符串的大小于没有意义,只有等于才有意义.
- 编译器为了节省地址,而且常量不可修秘诀,无论相等的多少个常量.都是同一个地址

```
int main()
{
	#define str = "calc";
	//常量如果不等,会另外开出一个新的内存地址.
	printf("%d",&str);
	printf("%d","calc");
	//变量会另外开辟内存,互不影响
	//常量不会开辟新的内存地址.所有常量都只会引用一个地址.
}
```

- 逻辑运算符
- && 逻辑与
- || 逻辑或
- ! 非运算符
- 运算符优先级
-> ! > 算术运算符 > 关系运算符 > &&与运算符 > || 或运算符 > 赋值运算符. 
-> \*/ 运算符 优先级高于 +- 运算符
-> () 括号的优先级最高.
- 短路表达式,节省计算原则,当算出一个值如果为假,则不再执行后面的运算.
- 三元运算,第一表达式的值为非0,是值为第二表达式,否则为第三表达式.
- 三目运算符会自动进行数据类型转换.
- 左值与程序实体
- 程序实体是一块内存区域.可以操作赋值
- 左值 左值是一个程序实体的表达式, 看看他是否可以放在赋值号左边. 
- 唯一的例外不能做为左值的是常量.因为运算都是在CPU的寄存器里执行.没有程序实体.
- 插入汇编语言
void main()
{
	_asm{//汇编语言块.
	mov eax,20 //给寄存器赋值
		add eax,-20 //将寄存器的值,增加一个15
		mov x,eax //将eax的值给x
	}
}

### 程序语句

#### 函数

- `malloc(102 * 1027)`分配系统的内存.
- `Seelp(1000)`休眠等待.
- `strstr("%s",str)`查找字符串,如果找到,返回字符中的地址.如果没有找到,返回NULL
- `scanf("%s",str)`扫描字符串.
- `keybd_event()`键盘事件`keybd_event("A", 0, 0, 0);//按下A`,`keybd_event("A", 0, 2, 0);//松开A`
- `moues_event()`鼠标事件
- `open("http://www.baidu.com")`打开一个网站
- 常量表达式.`enum`枚举数据类型,会自动给从左到数字相加.`enum week{A,B,C,D}`.枚举类型是直接给的常量.
- `switch`只能应用于整数.
- `goto`语句.在块语句前加上`AB:`就是语句标号.使用`goto AB;`可以跳转过来

- 移动窗口
    - `HWND win FindWindowA("className","title");`HWND 是应用程序的编号  
    - `SetWindowPos(win,NULL,10,20,400,800,0)`参数,1:程序编号,2NULL,3-4XY坐标,5-6窗口宽高.7,窗口位置  
    - `ShowWindow(win,SW_HIDE)`用于隐藏或显示程序

- 线程
    - 线程是用来解决并发问题.
    - 首先包含头文件`process.h`.
    - 定义一个线程入口函数,参数为无类型的空地址`void run(void *p)`,基中的`*p`代表无类型空地址
    - `HWAD hd = _beginthread(run,0,NULL)`用于开启一个线程.`for(int i=0;i<3;i++){ _beginthread(funName,0,NULL); }`
    - `_beginthread`第一个参数传递函数指针
    - 多线程同步`WaitForSingleObject(hd),INFINITE);`
    -  线程冻结,使线程暂停
    -  标准函数标识`__stdcall`
    -  创建一个句柄`HANDLE hthread;`
    -  保存线程编号`DWORD threadId;`
    -  创建线程`hthread = CreateThread(NULL/*安全属性*/,NULL/*堆栈大小*/,MyMsg/*线程入口点*/,NULL/*函数的参数*/,0/*立即执行*/,&threadId/*保存线程的id*/)`
    -  关闭一个线程`CloseHandle(thread)`
    -  使多线程同步`WaitForSingleObject(thread,INFINITE)`

### 模块
#### 动态库
- `.dll`为动态库.`dll`不需要`main()`函数.
-  声明一个模块`_deslspec(dllexport) go{}`

### 预编译

- `#`代表预编译.使用`#pragma comment (linker,"/subsystem:\"windows\" /entry:\"mainCRTStartup\"")`在`windows`下预编译为程序.

### 2018-5-9 
- VS 2017编译器默认配置了lib库的路径.没有函数声明时，编译器会自动路径库来定位到函数实体。
- C++是一个更为严格的语言，必须包含头文件。
- C语言函数默认是int类型.如`main(){printf("Hello World!")}`
- 可变参数,头文件`#include<stdarg.h>`,使用`...`作为可变参数,例子:

```
int add(int num,...){
    int res = 0;
    va_list argp;//存储参数开始的地址
    va_start(argp,num);//从首地址开始,读取num后面的数据
    for(int i = 0;i<num;i++){
        res += va_arg(argp,int);//读取一个数据按照INT解析.
    }
    va_end(argp);
}
```

### 2018-5-10
- 数组`int a[10] = {1,2,3,4,5,6,7,8};`
- 获取一个随机数`rand()`,`srand()`;
- 定义并获取一个Windows窗口`HWND win = FindWindowA("ClassName","titleName")`
- 定义一个坐标点`POINT pt`;
- 取得一个坐标地址`GetCursorPos(&pt)`
- 设置一个被定义过的坐标点`SetWindowPos(xxx,NULL,pt.x,pt.y,0,0,1)`,`1`代表不改变窗口大小
- 设置桌面背景`SystemParametersInfoA(20,0,"D:\\developEnv\\private\\system_bak\\DeskropBackgound",3);`,`参数:1(20代表桌面背景),2(0默认参数),3路径,4(3=立即生效)`
- 执行一个文件`ShellExecuteA(0,"open","D:\a.mp3",0,0,0)`:参数说明:`1(0=系统打开),2("open"=操作类型),3文件路径,4-5系统保留,6(0隐藏/1正常,3最大化,6最小化)`
- **volatile**,禁止优化的声明关键词,编译器会自动优化程序.如`for(volatile int i = 0;i<999999;i++){}`

### 2018-5-17

#### 按位运算符
- 按位与`&`(AND) 用于屏蔽某些二进制
- 按与或`|` 
- 按位异或`^`
- 左移`<<`
- 右移`>>`
- 按位求反`~`
- 声明一个时间值`time_t ts`
- 创建随机种子`srand(data)`,创建随机数`rand()`
- 

#### 数组
- 数组在内存中是一片连续的空间
- 取得数据的大小sizeof(a);
- 数组的名称是内存地址
- 二数组可以看作是多组一堆数组,根据内存地址取得每个一维数组

#### 根据地址取出内容->指针
- *(&a),星号为根据地址取出内容 

### 2018-8-3

- 声明全局变量`extern`

#### 指针

1. 指针可以根据内存地址取出或修改内容
2. 先用`&`取得内存地址:`&num`
3. 用`*`取得值:`*(&num)`,修改值:`*(&num) = 100;`
4. 指针的最大作用在于间接给内存赋值
5. 一个进程不能随便改变另一个进程的内存.这是windows规定的,需要通过`.dll`模块来注入操作

##### 函数指针

1. 取得一个函数go的指针`void(*p) = go;`
2. 通过2级指针修改函数指向,改变程序行为.
3. 调试工具`OllyDbg`,`DetourExpress`
4. 安装`DetourExpress`,进入根目录使用`nmake`编译,并进入`lib.X86`使用编译出的静态文件以及 *头文件*
5. `DetourExpress`就一个通过C语言以及沈汇编编写,可以注入执行程序,跟踪程序入口入函数跳转的微软开源工具.
6. 劫持需要在`Release`模式下编译

- 劫持代码
```
//以DetourExpress作为工具
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "detours.h"

//包含库文件的预编译
#pragma comment(lib,"detours.lib")

//_CRTIMP 格式声明
//__cdecl 兼容C++
//_CRTIMP int __cdecl system(_In_opt_z_z const char * _Command);

//通过函数指针存储以前的函数
int (*poldsystem)(const char * _Command) = system;

void newsystem(const char * _Command){
    //执行并记录一个程序
    printf("被替换的system函数 %s",_Command);
    //劫持过后使用原来的函数功能
    poldsystem(_Command);
    char *p = strstr(_Command,"tasklist");
    if(p != NULL){
        printf("不放行的程序");
    }else{
        poldsystem(_Command);
    }
}

void hook(){

    //恢复之前的状态,避免反复拦截
    DetourRestoreAfterWith();
    //开始劫持
    DetourTransactionBegin();
    //刷新当前线程
    DetourUpdataThread(GetCurrentThread());
    //开始劫持
    DetourAttach( (void **)&poldsystem,newsystem );
    //立即生效
    DetourTransactionCommit();
}

void main(){
    system("notepad");
    hook();
    system("notepad");
    getchar();
}
```
- 将以上代码修改为动态库`dll`注入时可以劫持其他程序

```
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "detours.h"

//包含库文件的预编译
#pragma comment(lib,"detours.lib")

//_CRTIMP 格式声明
//__cdecl 兼容C++
//_CRTIMP int __cdecl system(_In_opt_z_z const char * _Command);

//通过函数指针存储以前的函数
int (*poldsystem)(const char * _Command) = system;

int newsystem(const char * _Command){
    return 1;
}

void hook(){
	MessageBoxA(0,"提示","此程序已经被劫持",0);
    //恢复之前的状态,避免反复拦截
    DetourRestoreAfterWith();
    //开始劫持
    DetourTransactionBegin();
    //刷新当前线程
    DetourUpdataThread(GetCurrentThread());
    //开始劫持
    DetourAttach( (void **)&poldsystem,newsystem );
	//解除劫持
	DetourDetach( (void **)&poldsystem,newsystem );
    //立即生效
    DetourTransactionCommit();
}

_declspec(dllexport) void go{
    hook();
}
```
- ``
- `VBApi`帮助手册需要查看
- `CreateProcess`
- 在宽字符查找一个字符串是否存在`wcsstr("liPaalicationName",L"360 ")`

## windows的分层机制

- WINBASEAPI-最核心的API

```
lpApplicationName //执行程序名称 
lpCommandLine //命令行
lpProcessAttributes //进程安全
lpThreadAttributes //进程主线程的安全
bInheritHandles 附加参数
dwCreateionFlags //创建参数
lpEnvironment //环境变量指针
lpCurrentDirectory //进程当前路径
lpStartupInfo //进程启动附加信息
lpProcessInformation //进程标识符
```

- 定义一个基本的WINAPI `DWORD WINAPI MyMsg()`

- 多线程
    - 线程冻结,使线程暂停
    - 创建多线程`_beginthread(funName,0,&add)`.0代表拷贝,&为取得地址
    - 标准函数标识`__stdcall`
    - 创建一个句柄`HANDLE hthread;`
    - 保存线程编号`DWORD threadId;`
    - 创建线程`hthread = CreateThread(NULL/*安全属性*/,NULL/*堆栈大小*/,MyMsg/*线程入口点*/,NULL/*函数的参数*/,0/*立即执行*/,&threadId/*保存线程的id*/)`
    - 关闭一个线程`CloseHandle(thread)`
    - 使多线程同步`WaitForSingleObject(thread,INFINITE)`
    - 多线程检索

```
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
//LPVOID 等于void的空针指
//WINAPI 等于 __stdcall 标准的函数
DWORD WINAPI MyApi(LPVOID lp){
    MessageBoxA(0,"title","content",0);
}
void main(){
    HANDLE thread;//创建句柄
    DWORD threadid;
    for(int i=0;i<5;i++){
        thread = CreateThread(
            NULL,
            NULL,
            MyMsg,
            NULL,
            0,
            &threadid
        );
        //等待,让多线程变成同步
        WaitForSingleObject(thread,INFINITE);
		//关闭一个线程
		CloseHandle(thread);
    }
}
```

- QT->dialog.h

## 2018-8-4

* 数组
    - 数组用不管是否用作参数都没有副本机制
    - 循环一个枚举`enum es{a,b,c,d}` `for(enum es a =a;a<d;a++){}`
    - 字符数组`char a[] = {1,2,3,4};`
    - 数字数组`int a[] = {1,2,3,4};`
    - 浮点数组`float a[] = {1,2,3,4};`
    - 通过指针定义数组,通过指针定义的数组意味着只知道数组的起始内存地址.并不知道长度.`char* strs[] ;`

* 结构体`struct`
    - 格式`struct 结构体名(也就是可选标记名） { 成员变量； }；`
    - 声明结构体`struct MyStruct{ int data[100];int top; }`
    - 引用结构体中间的数据用符号`.`, `MyStruct.top`
    - 通过地址访问用`->`符号,`(&MyStruct)->top;`
    - 通过指针访问相当于直接访问,依然用`.`,`(*(&MyStruct)).top`

* 定义别名typedef`typedef int INT`,将int的别名定义为INT

## 2018-8-6

* 指针
    -  指针必须先初始化`int *p` 否则会引发错误 
    -  指针是由类型和步长决定的一个数据类型.
    -  由float定义指针类型,则搜索内存时会强制向前8个字节截取内存数据`float *p = &num`,根据指针取出数据`*p2`
    -  函数传的参数会有副本机制,复制的是数据.如果参数以指针由复制指针地址.
    -  任何指针都是4个字节32位.
    -  void *p = &num可以存任何类型的地址.但无法取出值`*void()`.因为没有类型
    -  void可以强转为其他类型再取值 `*((double *)p)`
    -  空指针,表示没有存储地址`double *p = NULL`.空指针实际上是`void *0`.防止指针随便指向.
    -  定义多个指针`double * pa, pb, pc;`
    -  通过scanf初始化指针`scanf("%p",&p);`

* 内存搜索代码

```
int n = 88;
//通过内存的起始地址和结束地址搜索内存
//char类型一次只移动一个字节
for (char *p = 0xae0000; p < 0xae1000; p++) {
	//将类型由char转换为int
	int *xp = p;
	if (*xp == n) {
		*xp = 100;
	}
}
```

* 桌面显示图片代码

```
	int i = 0;
	while (i) {
		//获取桌面
		HWND win = GetDesktopWinodw();
		//获取桌面显示 
		HDC windc = GetWindowDC(win);
		//获取位图句柄
		HDC Memdc = CreateCompatibleDC(0);
		//导入图片
		HBITMAP bit = (HBITMAP)LoadImage(win, TEXT("1.bmp"), IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION);
		//设置显示什么
		SelectObject(Memdc,bit);
		//显示 
		BitBlt(windc, i++, i++, 400, 400, Memdc, 0, 0, SRCCOPY);
	}
```

## 2018-8-8
- 指针在ARM下有时为2字节,占16位.在高版本X86下占4字节32位.
- CPU的32位和64位的本质区别在寄存器在内存中的寻扯能力.
- 指针与编译器,操作系统有关.高位兼容低位.
- 计算机无论对任何变量操作,都是先通过寄存器.右值会在寄存器里直接计算完成.
- 32位系统进程最大内存为2GB,64位最大进程为1024GB.`malloc()`
- 栈(stack):自动分配自动回收,先进后出. `aotu int num = 10;`.栈为编译器维护,默认大小为`1 M`,可以手动拓展大小.先进后出
    - 每个线程的栈是独立的.
- 堆(heap):手动分配手动回收,先进先出. `malloc(1024*1024*2000)`;32位堆最大可分配为`2014*2014*2000bit`

- 指针运算
    - 没有明确类型大小的指针，不能进行指针运算
    - 如果不在数组内容，指针的加减没有任何意义,指针运算的意义在于左右移动取得值.
    - 指针运算,实际上是指针加减整数,指针减去一个指针:  (地址-地址)/sizeof(类型)

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("a=%p,&a=%p", a, &a);
	printf("\n%d,%d", a, a + 1);//数组的第一个元素的地址，4
	printf("\n%d,%d", &a, &a + 1);//数组的类型，40

- 查看数据类型 *typeid* :` typeid(a).name()`
- 二级指针`**p`,二级指针的用处在于在指针函数内副本机制时,用二级指针传递指针地址可以改变数据
- 空指针`void *p`,空指针可以指向任何类型的数据.可以为任何类型赋值.`p = &p`
- 空指针需要类型转换,才能读取数据`*((double *)p)`,明确从地址开始前进几个字节.
- 内存操作`#include <memory.h>`
- 内存操作`memset(str,'A',5)`,从str的首地址前进5个字节进行赋值.
- 在内存中,代码区分为常量区,字符串都在符号表,非字符串会直接拷贝到寄存器.字符串就是传递地址  
- 数组名是常量.名字不可改变.
- 对比字符串,是对比指针的值.或者使用`if(strcmp(str1,str2)==0)`来对比

## 作业
- 写一个移动鼠标并点击的案例

## 学习进度
- `H:\video\C-NET\C++尹成主讲 视频、代码、文档、工具\3.27---5.5\20150421`
- `D:\workroom\study\C\C程序设计语言（第2版·新版）.pdf`,`37 page`
- `H:\video\基础教学\60课时学完数学\【3605】60课时学完高中数学 60讲\第01讲集合的含义表示与基本运算（上）`

# MySQL

## 数据类型
- 数值类型
> MySQL支持所有标准SQL数值数据类型。  
这些类型包括严格数值数据类型(INTEGER、SMALLINT、DECIMAL和NUMERIC)，以及近似数值数据类型(FLOAT、REAL和DOUBLE PRECISION)。  
关键字INT是INTEGER的同义词，关键字DEC是DECIMAL的同义词。  
BIT数据类型保存位字段值，并且支持MyISAM、MEMORY、InnoDB和BDB表。  
作为SQL标准的扩展，MySQL也支持整数类型TINYINT、MEDIUMINT和BIGINT。下面的表显示了需要的每个整数类型的存储和范围。

- - - 

|类型|大小|范围（有符号）|范围（无符号）|用途|
|TINYINT|1 字节|(-128，127)|(0，255)|小整数值|
|SMALLINT|2 字节|(-32 768，32 767)|(0，65 535)|大整数值|
|MEDIUMINT|3 字节|(-8 388 608，8 388 607)|(0，16 777 215)|大整数值|
|INT或  NTEGER|4 字节|(-2 147 483 648，2 147 483 647)|(0，4 294 967 295)|大整数值|
|BIGINT|8 字节|(-9 233 372 036 854 775 808，9 223 372 036 854 775 807)|(0，18 446 744 073 709 551 615)|极大整数值|
|FLOAT|4 字节|-3.402 823 466 E+38，-1.175 494 351 E-38)，0，(1.175 494 351 E-38，3.402 823 466 351 E+38)|0，(1.175 494 351 E-38，3.402 823 466 E+38)|单精度  浮点数值|
|DOUBLE|8 字节|(-1.797 693 134 862 315 7 E+308，-2.225 073 858 507 201 4 E-308)，0，(2.225 073 858 507 201 4 E-308，1.797 693 134 862 315 7 E+308)|0，(2.225 073 858 507 201 4 E-308，1.797 693 134 862 315 7 E+308)|双精度  浮点数值|
|DECIMA|对DECIMAL(M,D) ，如果M>D，为M+2否则为D+2|依赖于M和D的值|依赖于M和D的值|小数值|

- - -

- 时间日期类型

|类型|大小(字节)|范围|格式|用途|
|DATE|3|1000-01-01/9999-12-31|YYYY-MM-DD|日期值|
|TIME|3|'-838:59:59'/'838:59:59'|HH:MM:SS|时间值或持续时间|
|YEAR|1|1901/2155|YYYY|年份值|
|DATETIME|8|1000-01-01 00:00:00/9999-12-31 23:59:59|YYYY-MM-DD HH:MM:SS|混合日期和时间值|
|TIMESTAMP|4|1970-01-01 00:00:00/2038 结束时间是第2147483647秒，北京时间2038-1-19 11:14:07  格林尼治时间 2038年1月19日 凌晨 03:14:07|YYYYMMDD HHMMSS|混合日期和时间值，时间戳|

- - -

- 字符串类型

|类型|大小|用途|
|CHAR|0-255字节|定长字符串|
|VARCHAR|0-65535 字节|变长字符串|
|TINYBLOB|0-255字节|不超过 255 个字符的二进制字符串|
|TINYTEXT|0-255字节|短文本字符串|
|BLOB|0-65 535字节|二进制形式的长文本数据|
|TEXT|0-65 535字节|长文本数据|
|MEDIUMBLOB|0-16 777 215字节|二进制形式的中等长度文本数据|
|MEDIUMTEXT|0-16 777 215字节|中等长度文本数据|
|LONGBLOB|0-4 294 967 295字节|二进制形式的极大文本数据|
|LONGTEXT|0-4 294 967 295字节|极大文本数据|

## 基本

### 基本连接
- 连接数据库`mysql -uroot -proot`
- 查看数据库`show tables`
- 使用数据库`use xxx`
- 设置编码`set name utf8`
- 显示表结构`desc tablename;`

### 创建及删除表
- 建表过程就是一个声明表头过程
- `create database ddweb charset utf8;`指定字符集创建`MySQL`
- `drop database xxx;`删除数据库
- mysql表/列可以改名,database不可改名.
- 创建表

```
    create table xxx(
        `id` INT AUTO_INCREMENT,
        PRIMARY KEY `id`
    )ENGINE InnoDB charset utf8;
```

- 修改表名`rename oldtablename to newtablename;`
- 清空表`truncate tablename;` truncate 相当于删除再重建.得到一个新表
- `delete tablename;`delete是删除数据条数来操作的.不重建数据表
- `select * form tablename;`

### 增删改查
- 增加记录`insert into(id) values(11);`
- 删除记录`delete from tablename where id=11`
- 更改记录`update tablename set id=20;`
- 查询记录`select id,name from xxx where id=1`

### 修改表/列
- 增加一个无符号的字段`alter table xxx add score tinyint unsigend not null dafault 0;`
- 增加一个列`alter table classs add teacher varchar(6) default null;`[加在列的最后]
- 指定顺序加入列`alter table class add classname varchar(6) default '' after teacher`alter将指定所在位置
- 增加到第一位`alter table class add classname varchar(10) default '' first;`
- 删除列`alter table class drop xxx;`
- 修改列`alter table xxxx modify xxxxx varchar(20) not null default '';`
- 修改列名`alter table xxxx change xxxx newxxxx varchar(20) not null default '';`


### 数据类型,INT系列声明时的参数  

#### M unsigned zerofill
- zerofill补零`alter table class add tinyint(5) zerofill`补5个零

#### float
- float(6,2)

#### DOUBLE

#### 定点数
- 整数和小数分开存的小数.比float精确.


# 学习树
> F:\BaiduYunDownload\数据库合集\燕十八Mysql优化视频

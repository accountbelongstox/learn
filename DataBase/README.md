# MongoDB
## 介绍
- 常用工具
> `mongodump`数据库导出  
`mongod`服务端  
`mongoexport`导出易识别的JSON文档或CSV文档
`mongorestore`数据库导入  
`mongos`路由器,分片时使用.  

- 启动`MongoDB`
> 必须指定数据库文件目录,及日志目录,端口.  
`--dbpath`数据库目录  
`--logpath`日志目录  
`--fork`后台运行  
`--port`端口,默认`27017`

## Redis

- 安装
    - 编译环境`yum install gcc-c++ wget`
    - 安装`wget http://download.redis.io/releases/redis-5.0-rc4.tar.gz`
    - 安装`tar xzvf redis*`
    - 安装`cd redis*`
    - 编译`make && make PREFIX=/usr/local/redis install && cp redis.conf /usr/local/redis/bin && cd /usr/local/redis/bin `
    - 设置后台启动(vi redis.conf)`daemonize yes`
    - 启动`./redis-server redis.conf`
    - 查看启动结果`ps -ef | grep redis`
- 文件结构
    - 性能测试`redis-benchmark`
    - 检查修复aof文件`redis-check-aof`
    - 检查快照持久化文件`redis-check-dump`
    - 命令行客户端`redis-cli`
    - 配件文件`redis.conf`
    - 启动命令`redis-server` 
- 存储数据
    - 字符型
        - 1.key不要太长,最好不要超过2014字节这不仅会消耗内存还会降低查找效率
        - 2.key不要太短，如果太短会降低key的可读性
        - 3.在项目中，key最好有一个统一的命名规范（根据企业的需求）
        - value支持五种数据类型
            - 字符串型 string
            - 字符串列表 lists
            - 字符串集合 sets
            - 有序字符串集合 sorted sets
            - 哈希类型 hashs
    - List
        - List类型是按照插入顺序排序的字符串链表
        - 在插入时，如果该键并不	存在，Redis将为该键创建一个新的链表
        - List中可以包含的最大元素数量是4294967295
    - Set类型
        - Set类型为没有排序的字符集合.
        - Set集合中不允许出现重复的元素
        - Set可包含的最大元素数是4294967295
    - sortedset
        - Sorted-Sets和Sets类型极为相似，它们都是字符串的集合
        - 不允许重复的成员出现在一个Set中
        - Sorted-Sets中的每一个成员都会有一个分	数(score)与之关联
        - Sorted-Sets中的成员必须是唯一的，但是分数(score)却是可以重复的
    - hash
        - Hashes类型具有String Key和String Value的map容器
        - 可以存储4294967295个键值对。
- 命令
    - 启动客户端`reids-cli`
    - 字符型数据操作
        - 存入字符`set name zhanshan`
        - 取出字符`get name`
        - 将指定的key的value原子性的递增1.如果该key不存在，其初始值	为0，在incr之后其值为1。如果value的值不能转成整型，如hello，该操作将执	行失败并返回相应的错误信息。`incr key`
        - 将指定的key的value原子性的递减1.如果该key不存在，其初始值	为0，在incr之后其值为-1。如果value的值不能转成整型，如hello，该操作将执	行失败并返回相应的错误信息。`decr key`
        - 将指定的key的value原子性增加increment，如果该	key不存在，器初始值为0，在incrby之后，该值为increment。如果该值不能转成	整型，如hello则失败并返回错误信息`incrby key increment`
        - 将指定的key的value原子性减少decrement，如果	该key不存在，器初始值为0，在decrby之后，该值为decrement。如果该值不能	转成整型，如hello则失败并返回错误信息`decrby key decrement`
        - 如果该key存在，则在原有的value后追加该值；如果该 key 不存在，则重新创建一个key/value:`append key value`
    - List型数据操作
        - 在指定的key所关联的list的头部插入所有的	values，如果该key不存在，该命令在插入的之前创建一个与该key关联的空链	表，之后再向该链表的头部插入数据。插入成功，返回元素的个数。`lpush key v1 v2`
        - 在该list的尾部添加元素`rpush key v1 v2`
        - 获取链表中从start到end的元素的值，start、end可	为负数，若为-1则表示链表尾部的元素，-2则表示倒数第二个，依次类推`lrange key start end`
        - 仅当参数中指定的key存在时（如果与key管理的list中没有值时，则该key是不存在的）在指定的key所关联的list的头部插入value。`lpushx key value`
        - 在该list的尾部添加元素`rpushx key value`
        - 返回并弹出指定的key关联的链表中的第一个元素，即头部元素。`lpop key`
        - 从尾部弹出元素。`rpop key`
        - 将链表中的尾部元素弹出并添加到头部`rpoplpush resource destination`
        - 返回指定的key关联的链表中的元素的数量。`llen key`
        - 设置链表中的index的脚标的元素值，0代表链表的头元	素，-1代表链表的尾元素。`lset key index value`
        - 删除count个值为value的元素，如果count大于0，从头向尾遍历并删除count个值为value的元素，如果count小于0，则从尾向头遍历并删除。如果count等于0，则删除链表中所有等于value的元素。`lrem key count value`
        - 在pivot元素前或者后插入value这个元素。`linsert key before|after pivot value`
    - Set型数据操作
        - 向set中添加数据，如果该key的值已有则不会重复添加`sadd key value1、value2…`
        - 获取set中所有的成员`smembers key`
        - 获取set中成员的数量`scard key`
        - 断参数中指定的成员是否在该set中，1表示存在，0表示不存在或者该key本身就不存在`sismember key member`
        - 删除set中指定的成员`srem key member1、member2`
        - 随机返回set中的一个成员`srandmember key`
        - 返回key1与key2中相差的成员，而且与key的顺序有关。即返回差集。`sdiff sdiff key1 key2`
        - 将key1、key2相差的成员存储在destination上,`sdiffstore destination key1 key2`
        - 返回交集`sinter key[key1,key2…]`
        - 将返回的交集存储在destination上`sinterstore destination key1 key2`
        - 返回并集`sunion key1、key2`
        - 将返回的并集存储在destination上`sunionstore destination key1 key2`
    - sorted-set型数据操作
        - 将所有成员以及该成员的	分数存放到sorted-set中`zadd key score member score2 member2`
        - 获取集合中的成员数量`zcard key`
        - 获取分数在[min,max]之间的成员`zcount key min max`
        - 设置指定成员的增加的分数`zincrby key increment member`
        - 获取集合中脚标为start-end的成员，[withscores]参数表明返回的成员包含其分数`zrange key start end [withscores]`
        - 返回分数在[min,max]的成员并按照分数从低到高排序。[withscores]：显示分数；[limit offset count]：offset，表明从脚标为offset的元素开始并返回count个成员。`zrangebyscore key min max [withscores] [limit offset count]`
        - 返回成员在集合中的位置。`zrank key member`
        - 移除集合中指定的成员，可以指定多个成员。`zrem key member[member…]`
        - 返回指定成员的分数`zscore key member`
    - hash型数据操作
        - 为指定的key设定field/value对（键值对）`hset key field value`
        - 获取key中的所有filed-vaule`hgetall key`
        - 返回指定的key中的field的值`hget key field`
        - 设置key中的多个filed/value`hmset key fields`
        - 获取key中的多个filed的值`hmget key fileds`
        - 判断指定的key中的filed是否存在`hexists key field`
        - 获取key所包含的field的数量`hlen key`
        - 设置key中filed的值增加increment，如：age 增加20`hincrby key field increment`
- 持久化
    - 持久化是为了保持redis重启后数据不丢失,将数据同步到硬盘中
    - RDB:持久化为单个文件,但如果数据过大保存是会消耗系统
        - 配置保存文件(redis.conf)`dir ./`
        - 配置保存文件(redis.conf)`dbfilename xxx.rdb`
        - RDB命令
            - `save 900 1`每900秒至少有1个key发生变化则dump内存快照
    - AOF:可以每秒同步,每次修改同步,不同步
        - 如果同步过程中发生宕机,修复工具`redis-check-aof`
        - 配置信息(redis.conf)`appendfsync always`
        - 配置信息`always`每次有数据修改时都写入AOF
        - 配置信息`everysec`每秒同步一次,此策略为AOF的缺省策略
        - 配置信息`no`从不同步
        - 手动重写AOF`bgrewriteaof`
        - 
        

# Go语言的支持 
## 开源项目
- https://github.com/golang/go
- GoDoc / Go Language

# 常用命令
- go env
	> GOARCH CPU构架<br />
	> GOBIN 工作目录下的BIN文件夹
	> GOEXE 编译后的文件扩展名
	> GOHOSTARCH & GOHOSTOS 交叉编译的CPU架构和系统
	> GOOS 当前的系统
	> GOPATH 工作目录
	> GOROOT 安装目录
- GO PATH 目录约定
	1. 需要有3个目录.
	2. bin目录 > 编译后生成的可执行文件,pkg目录 > 编译后生成的编译文件.一般为.a结束 ,src源码目录  
- 常用命令
	1. go get 获取远程包
	2. go run直接运行程序
	3. go build 测试编译,查看是否有编译错误 
	4. go fmt 格式化源又不.部份IDE在保存时自动调用
	5. go install 编译包文件并编译整个程序
	6. go test 运行测试文件
	7. go doc 查看文档 / 单独查看 godoc xxx Print / godoc -http-:18888 
# 安装IDE
- visual studio
```
go get -u -v github.com/nsf/gocode
go get -u -v github.com/rogpeppe/godef
go get -u -v github.com/golang/lint/golint
go get -u -v github.com/lukehoban/go-find-references
go get -u -v sourcegraph.com/sqs/goreturns
go get -u -v golang.org/x/tools/cmd/gorename
go get -u -v github.com/derekparker/delve/cmd/dlv
go get github.com/nsf/gocode
go get github.com/rogpeppe/godef
go get github.com/golang/lint/golint
go get github.com/lukehoban/go-find-references
go get sourcegraph.com/sqs/goreturns
go get golang.org/x/tools/cmd/gorename
go get github.com/derekparker/delve/cmd/dlv
```
# 初级
```
package main
//package 包. Go语言使用package
//main 表晨这是一个可运行的包,在编译后生成可执行文件
//非main 源码生成.a为后缀的文件
import{
	"fmt"
}
//import用来导入依赖
func main()
{
	fmt Println("Hello World!");
}
//main 是程序的入口文件.
```
1. 一个可执行的程序,需要有package main.同时包含入口函数main .可以没有返回值.



# 学习进程
- http://edu.51cto.com/center/course/lesson/index?id=82191
	> 1.1
- F:\BaiduYunDownload\跟无闻学go语言\golang书籍\Go语言编程.2012.pdf



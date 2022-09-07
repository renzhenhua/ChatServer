# ChatServer
### 简介
主要学习参考了施磊的[chatserver](https://github.com/fixbug666/chatserver)。
本项目由cmake构建。使用了[陈硕](https://github.com/chenshuo)大神的[muduo](https://github.com/chenshuo/muduo), 使用了德国大牛 [nlohmann](https://github.com/nlohmann) 编写的在C++下使用的 [JSON库](https://github.com/nlohmann/json)。

### 开发环境

1. centos linux环境
2. 第三方Json开发库
3. 安装boost + muduo网络库开发环境
4. 安装redis环境
5. 安装mysql数据库环境
6. 安装nginx
7. 安装CMake环境

### 编译

* 构建系统选择 cmake version >= 3.0
* gcc/g++编译器 version保证在5.4和7.8之间 

### 目录

* bin 
* build
* include 存放头文件
* src 存放源代码
    * client
    * server
        * [chatserver.cpp](src/server/chatserver.cpp)
        * [main.cpp](src/server/main.cpp)
* test
    * [testjson](test/testjson) 测试json库使用
    * [testmuduo](test/testmuduo) 测试muduo库使用
* thirdparty
    * json.hpp [nlohmann](https://github.com/nlohmann)编写的的 [JSON库](https://github.com/nlohmann/json)
#include "chatserver.hpp"

#include <functional>
using namespace std;
using namespace placeholders;

ChatServer::ChatServer(EventLoop* loop, const InetAddress& listenAddr,
                       const string& nameArg)
    : _server(loop, listenAddr, nameArg), _loop(loop) {
    // 给服务器注册用户连接的创建和断开回调
    _server.setConnectionCallback(
        std::bind(&ChatServer::onConnection, this, _1));

    // 给服务器注册用户读写事件回调
    _server.setMessageCallback(
        std::bind(&ChatServer::onMessage, this, _1, _2, _3));

    // 设置线程数量
    _server.setThreadNum(4);
}

// 启动服务
void ChatServer::start() { _server.start(); }

// 上报链接相关信息的回调函数
void ChatServer::onConnection(const TcpConnectionPtr&) {}

// 上报读写事件相关信息的回调函数
void ChatServer::onMessage(const TcpConnectionPtr&, Buffer*, Timestamp) {}
#ifndef chinesebox_H
#define chinesebox_H


constexpr const char* CHINESEBOX_VERSION = "V1.0.20.01.4";


/*
MIT License

Copyright (c) [year] [fullname]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


中文

这是一个C++中文扩展库，
可以让你用C++的语法体验中文编程
这个库可以让C++程序员更容易编程。

EN

This is a C++ Chinese extension library that
enables you to experience Chinese programming with
C++ syntax. This library makes it easier for
C++ programmers to code.


*/

#include<iostream>

#include<windows.h>

using namespace std;

namespace firtstartss{
    class FunctionStarter {
    public:
        FunctionStarter() {
            // 在构造函数中调用需要启动的函数
            jiaozhun();
        }
        //校准一下控制台编码避免类似visual studio code控制台乱码情况
        void jiaozhun() {
            string a = "vscode";
            if (a != "VS") {
                // 设置控制台输出编码为 UTF-8
                SetConsoleOutputCP(CP_UTF8);
                // 设置控制台输入编码为 UTF-8
                SetConsoleCP(CP_UTF8);
            }
        }
    };

    // 定义全局对象
    FunctionStarter starter;
}

//逻辑运算符

#define 或 ||

#define 或者 ||

#define 与 &&

#define 且 &&

#define 非 !

#define 不 !

//比较符号

#define 等于 ==

#define 大于 >

#define 赋值 =

#define 赋 =

#define 小于 <

#define 小于等于 <=

#define 大于等于 >=

#define 小等于 <=

#define 小等 <=

#define 大等于 >=

#define 大等 >=

//整数

#define 整数i int

#define 整i int

#define 整数l long long

#define 整l long long

#define 整数1 int

#define 整1 int

#define 整数2 long long

#define 整2 long long

#define 整数3 short

#define 整3 short

#define 整数s short

#define 整s short

//小数

#define 小数f float

#define 小数d double

#define 小f float

#define 小d double

#define 小1 float

#define 小2 double

#define 小数1 float

#define 小数2 double

//字符、字符串

#define 字符 char

#define 符 char

#define 字符串 string

#define 字串 string

#define 符串 string

//auto关键字等

#define 空 void

#define 无意义的 void

#define 自动 auto

#define 结构体 struct

#define 结构 struct

#define 新结构 struct

//类

#define 类 class

#define 公开的 public

#define 公开 public

#define 开放的 public

#define 开放 public

#define 保护的 protected

#define 受保护的 protected

#define 受保护 protected

#define 保护 protected

#define 私人的 private

#define 私人 private

#define 私有的 private

#define 私有 private

//一些关键字

#define 循环f for

#define 循环2 for

#define 循f for

#define 循环w while

#define 循环1 while

#define 循w while

#define 做 do

#define 循wd do

#define 如果f if

#define 如果1 if

#define 要是f if

#define 要是1 if

#define 除外e else

#define 除外1 else

#define 除之外e else

#define 除之外1 else

#define 如果ef else if

#define 还如果 else if

#define 如果2 else if

#define 要是ef else if

#define 要是2 else if

#define 判断 switch

#define 要是c case

#define 要是3 case

#define 除此之外 default

#define 除之外d default

#define 除之外2 default

#define 除外d default

#define 除外2 default

#define 输入 cin

#define 输出 cout

#define 输出2 printf

#define 输出f printf

#define 输出3 puts

#define 输出p puts

#define 输入2 getline

#define 输入l getline

#define 输入3 gets

#define 输入g gets

#define 重定输入出 freopen

#define 重定输 freopen

#define 重入出 freopen

#endif

# 中文扩展头文件_c版

这是一个C++中文扩展库，
可以让你用C++的语法体验中文编程
这个库可以让C++程序员更容易编程。

This is a C++ Chinese extension library that
enables you to experience Chinese programming with
C++ syntax. This library makes it easier for
C++ programmers to code.

附：这是我的第一个开源项目有不好的请指出谢谢!🙂

# 如何使用

我相信很多人都不会用这个吧，

如果你想搜索关键词打开chinesebox.exe

记得要点仍然运行

### VS中

按照我的用法我会将头文件拖到项目所在文件夹内

我的项目名字是“实验”所以头文件应该放在

![QQ20250502-101412.png](https://raw.gitcode.com/user-images/assets/5286457/f004215a-6e1c-43e5-a00f-7e1aa3ad2cd3/QQ20250502-101412.png 'QQ20250502-101412.png')

中

再在项目中头文件添加 “现有项”

再选中头文件

![QQ20250502-101747.png](https://raw.gitcode.com/user-images/assets/5286457/1f5739bb-d4a8-4da7-aa9b-e287b005909c/QQ20250502-101747.png 'QQ20250502-101747.png')

![QQ20250502-101904.png](https://raw.gitcode.com/user-images/assets/5286457/5cbfc7a0-4b0e-4770-addd-41e6fd85dd4d/QQ20250502-101904.png 'QQ20250502-101904.png')

我这里头文件后缀名是.h和.hpp没有太大影响

你就可以在你的项目中愉快使用了，但是 
###### 这个头文件引用时不能加<>要用""
就像这样：

`#include "chinesebox.h"`

OK我们来实践一下


`#include <iostream>`

`#include "chinesebox.h"`

`using namespace std;`

`int main()
{`

	整数i 是;
	输入 >> 是;
	输出 << 是;
`}`

控制台输入1;

会返回1:

![QQ20250502-102632.png](https://raw.gitcode.com/user-images/assets/5286457/d54e5038-60b5-4031-ab66-27882af6ccce/QQ20250502-102632.png 'QQ20250502-102632.png')

### 在vs code中

打开你在vs code中存放代码的位置将头文件与项目文件放在同一个目录下

就可以应用了

不过有时候会乱码你可以下载完头文件后复制一下源码粘贴到与项目头文件一起的地方

实践一下

`#include "chinesebox.h"`

`using namespace std;`

`int main(){`
     
     	整数i 是;
    	输入>>是;
   		输出<<是;
    
`}`


为了防止vscode控制台乱码用一个辅助类，在引用头文件时可以运行避免控制台乱码

`
namespace firtstartss{`

    class FunctionStarter {
    
    public:
        FunctionStarter() {
            // 在构造函数中调用需要启动的函数
            jiaozhun();
        }
        //校准一下控制台编码避免类似visual studio code控制台乱码情况
        //注意如果是VS的话将头文件中的这个a改为VS
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
`}`
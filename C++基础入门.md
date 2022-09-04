# C++基础入门



## 1 C++初识

### 1.1 第一个C++程序

编写一个C++程序共分为四个步骤：

- 创建项目
- 创建文件
- 编写代码
- 运行程序

#### 1.1.1 创建项目

使用Visual Stduio作为编写C++程序的工具

<img src=".\imgs\img1\1.png"  />

创建新项目

<img src=".\imgs\img1\2.png"  />

添加新文件

<img src=".\imgs\img1\3.png"  />

<img src=".\imgs\img1\4.png"  />

hello world程序

```Cpp
#include <iostream>
using namespace std;
//单行注释
/*多行注释*/
int main(){
    /* main函数是程序的入口 有且只有一个*/
	cout << "hello world" << endl;
	system("pause");
	return 0;
}
```

ctrl + F5运行

### 1.2 注释

单行注释:  //

多行注释: /* ... */

编译器在编译代码会忽视注释的内容

### 1.3 变量

变量存在的意义：方便管理内存空间

变量创建语法：`数据类型 变量名 = 变量初始值；`

如int a = 110;

### 1.4 常量

作用：用于记录程序中不可更改的数据

C++定义常量的两种方式：

1.#define宏常量： #define 变量名 常量值

2.const修饰的变量 const 数据类型 常量名 = 常量值

```cpp
#include <iostream>
using namespace std;
// 1.宏常量
#define NUM 7
int main(){
	// NUM = 12修改报错
	cout << "一周有" << NUM << "天" << endl;
	// const修饰的变量
	const int month = 12;
	// month = 24修改报错
	cout << "一年有" << month << "个月" << endl;
	system("pause");
	return 0;
}
```

### 1.5 关键字

作用：关键字是C++预先保留的单词（标识符）

tips:在给变量起名时不要使用关键字，否则会产生歧义

### 1.6 标识符命名规则

- 标识符不能是关键字
- 标识符只能由字母，数字，下划线组成

- 第一个字符必须为字母或下划线
- 区分大小写

命名时最好做到见名知意

## 2 数据类型

C++规定在创建一个变量或常量时，必须要指定相应的数据类型，否则无法给变量分配内存。

数据类型存在意义：给变量分配`合适`的内存空间，可避免资源浪费

#### 2.1 整型

![](.\imgs\img1\5.png)








































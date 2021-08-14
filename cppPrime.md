# C++ Prime 练习

## 第一章 开始

### 1.1 编写一个简单的程序

```cpp
int main()
{
    return -1;
}
```

执行完后，window cmd输入 echo %ERRORLEVEL% 得到-1

### 1.2 初识输入输出 iostream
std::cin, std::cout

### 1.3 注释
### 1.4 控制流
while、for
### 1.5 类简介

## 第二章 变量及基本类型
decltype(f()) a; 声明a为f()输出类型

typedef int myint;
using side=int；
auto i=9; 根据常量类型定义参数类型
const int* j; 不能改变j的值, j指向的值不是0。
int* const j; 不能改变j的指向，一定得初始化。
无 int& const k写法
int const &k 同价于 const int &k
引用变量与被引用变量 位置一样

### static
1. static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。

2. static 修饰符也可以应用于全局变量。==当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。==

3. 在 C++ 中，当 static 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。

### extern
使变量或函数在所有程序文件中可见, 以下例子main.cpp可以使用doTest()，不需要头文件。
main.cpp
```cpp
extern void doTest();
int main()
{
    doTest;
}
```

practice.cpp
```cpp
void doTest()
{
    std::cout<<"test"<<std::endl;
}
```





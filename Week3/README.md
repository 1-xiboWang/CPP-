# 实验五 数据的共享与保护

报告：`实验报告五.docx`。

六个目录分别对应静态数据成员、Student 共享计数、静态成员函数、变量作用域、Cat 对象计数和友元访问。每题包含独立的 `main`，分别编译。

在某题目录打开终端，例如：

```powershell
cd 实验05_数据的共享与保护/05_01_static_data
g++ -std=c++17 -Wall -Wextra -pedantic -g -O0 Ctype.cpp main.cpp -o lab.exe
./lab.exe
```

其余题在对应目录使用 `g++ -std=c++17 -Wall -Wextra -pedantic -g -O0 *.cpp -o lab.exe`。友元程序运行后输入整数，例如 `0`，依次输出 `0、1、6、16`。

运行环境：Windows、VS Code、GCC 10.3、GDB 10.2、C++17。

课件末尾的 5-16 只有题号，没有题干。现有题目均已完成。本次文件放在 Week3 目录。

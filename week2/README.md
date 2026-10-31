# 实验三：函数

实验报告：`实验报告三.docx`。

`实验03_函数` 中的 13 个程序各自包含 `main`，需要分别编译运行。例如：

```powershell
g++ -std=c++17 -Wall -Wextra 实验03_函数/03_01_factorial.cpp -o factorial.exe
./factorial.exe
```

程序包括阶乘、引用交换、函数重载、默认参数、内联函数、整数除法、素数判断、最大公约数和最小公倍数、递归 Fibonacci、递归求幂及系统函数调用。

`实验03_函数/编译验证` 保存课件要求的调用和语法验证。其中 `fact_double.cpp`、`inline_recursive.cpp`、`inline_while.cpp` 可以编译；其余 8 个文件用于观察编译错误。

运行环境：Windows，GCC 10.3，C++17，VS Code，GDB 10.2。13 个主程序共完成 57 组运行测试，11 项编译检查符合预期。

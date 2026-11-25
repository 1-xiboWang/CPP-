#include <iostream>
int fn1() {
    int *p=new int(5);
    int value=*p;
    delete p;
    return value;
}
int main() {
    int a=fn1();
    std::cout << "the value of a is:" << a << '\n';
}

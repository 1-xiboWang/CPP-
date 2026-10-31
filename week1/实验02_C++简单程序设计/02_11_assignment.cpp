#include <iostream>
using namespace std;
int main() {
    int ival1 = 1, ival2 = 2;
    double fval = 0;
    char cval = '\0';
    cout << "initial: " << ival1 << ' ' << ival2 << '\n';
    ival1 = ival2 = 0;
    ival1 = fval = 0;
    ival1 = cval = 'a';
    cout << "ival1=" << ival1 << ", ival2=" << ival2 << '\n';
    cout << "fval=" << fval << ", cval=" << cval << '\n';
    int ival3 = fval = 8;
    cout << "ival3=" << ival3 << ", fval=" << fval << '\n';
    ival2 = -ival1++;
    cout << "after -ival1++: " << ival1 << ' ' << ival2 << '\n';
    ival1 = ++ival2 + ival1;
    cout << "after ++ival2+ival1: " << ival1 << ' ' << ival2 << '\n';
}

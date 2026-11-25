#include <iostream>
int main() {
    int x=5,y=8;
    const int *readOnly=&x;
    int *const fixed=&x;
    const int *const both=&x;
    *fixed=7;
    readOnly=&y;
    std::cout << "x=" << x << " readOnly=" << *readOnly
              << " both=" << *both << '\n';
}

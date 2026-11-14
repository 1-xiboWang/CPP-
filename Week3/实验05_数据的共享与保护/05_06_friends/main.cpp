#include "friends.hpp"
#include <iostream>
int main() {
    int initial = 0;
    if (!(std::cin >> initial)) return 1;
    X x(initial);
    Y y; Z z;
    std::cout << "initial=" << x.value() << '\n';
    y.g(&x);
    std::cout << "after g=" << x.value() << '\n';
    z.f(&x);
    std::cout << "after f=" << x.value() << '\n';
    h(&x);
    std::cout << "after h=" << x.value() << '\n';
}

#include "Ctype.hpp"
#include <iostream>
int Ctype::s = 0;
Ctype::Ctype() : a(0) {
    ++s;
    std::cout << "a=" << ++a << '\n';
}
void Ctype::Print() {
    std::cout << "s=" << ++s << '\n';
}

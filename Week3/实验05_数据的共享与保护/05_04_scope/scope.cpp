#include "scope.hpp"
#include <iostream>
int x = 5, y = 7;
void myFunction() {
    int y = 10;
    std::cout << "x from myFunction " << x << '\n';
    std::cout << "y from myFunction " << y << "\n\n";
}

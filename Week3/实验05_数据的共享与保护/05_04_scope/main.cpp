#include "scope.hpp"
#include <iostream>
int main() {
    std::cout << "x from main " << x << '\n';
    std::cout << "y from main " << y << '\n';
    myFunction();
    std::cout << "Back from myFunction!\n\n";
    std::cout << "x from main " << x << '\n';
    std::cout << "y from main " << y << '\n';
}

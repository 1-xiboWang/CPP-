#include "Cat.hpp"
#include <iostream>
int Cat::numOfCats = 0;
Cat::Cat() { std::cout << "Cat(): " << ++numOfCats << '\n'; }
Cat::Cat(const Cat&) {
    std::cout << "Cat(copy): " << ++numOfCats << '\n';
}
Cat::~Cat() {
    std::cout << "~Cat(): " << --numOfCats << '\n';
}
int Cat::getNumOfCats() { return numOfCats; }

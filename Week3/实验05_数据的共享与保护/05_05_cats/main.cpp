#include "Cat.hpp"
#include <iostream>
int main() {
    std::cout << "before=" << Cat::getNumOfCats() << '\n';
    {
        Cat a;
        {
            Cat b;
            Cat c = a;
            std::cout << "inner=" << c.getNumOfCats() << '\n';
        }
        std::cout << "outer=" << a.getNumOfCats() << '\n';
    }
    std::cout << "after=" << Cat::getNumOfCats() << '\n';
}

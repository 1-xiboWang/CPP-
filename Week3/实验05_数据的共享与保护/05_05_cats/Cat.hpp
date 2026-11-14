#pragma once
class Cat {
    static int numOfCats;
public:
    Cat();
    Cat(const Cat&);
    ~Cat();
    static int getNumOfCats();
};

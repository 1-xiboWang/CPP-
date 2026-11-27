#include <iostream>
using namespace std;
class Base {protected:int a;public:explicit Base(int i):a(i){}};
class Derived:public Base {
    int b;
public:Derived():Base(0),b(0){} Derived(int i):Base(i),b(i){}
    void Print()const{cout<<"a="<<a<<",b="<<b<<'\n';}
};
int main(){Derived d1,d2(12);d1.Print();d2.Print();}

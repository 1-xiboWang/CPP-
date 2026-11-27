#include <iostream>
using namespace std;
// No user-defined constructor; initialize the data member explicitly.
class Base {protected:int a=0;};
class Derived:public Base {
    int b;
public:Derived():b(0){} Derived(int i):b(i){}
    void Print()const{cout<<"a="<<a<<",b="<<b<<'\n';}
};
int main(){Derived d1,d2(12);d1.Print();d2.Print();}

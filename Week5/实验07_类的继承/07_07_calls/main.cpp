#include <iostream>
using namespace std;
class BaseClass {
public:
    void fn1(){cout<<"BaseClass::fn1"<<endl;}
    void fn2(){cout<<"BaseClass::fn2"<<endl;}
};
class DerivedClass:public BaseClass {
public:
    void fn1(){cout<<"DerivedClass::fn1"<<endl;}
    void fn2(){cout<<"DerivedClass::fn2"<<endl;}
};
int main(){
    DerivedClass obj;BaseClass* pb=&obj;DerivedClass* pd=&obj;
    cout<<"object:"<<endl;obj.fn1();obj.fn2();
    cout<<"BaseClass pointer:"<<endl;pb->fn1();pb->fn2();
    cout<<"DerivedClass pointer:"<<endl;pd->fn1();pd->fn2();
}

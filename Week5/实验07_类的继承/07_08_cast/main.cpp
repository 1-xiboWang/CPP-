#include <iostream>
using namespace std;
struct Base1{int x;};
struct Base2{float y;};
struct Derived:Base1,Base2{};
int main(){
    Derived* pd=new Derived;pd->x=1;pd->y=2.0f;
    void* pv=pd;
    Base2* wrong=static_cast<Base2*>(pv); // Do not dereference or delete this pointer.
    Base2* correct=static_cast<Base2*>(pd);
    Base2* recovered=static_cast<Base2*>(static_cast<Derived*>(pv));
    cout<<boolalpha;
    cout<<"void route matches Base2: "<<(wrong==correct)<<'\n';
    cout<<"recovered route matches Base2: "<<(recovered==correct)<<'\n';
    cout<<"x="<<pd->x<<", y="<<pd->y<<", Base2 y="<<correct->y<<'\n';
    cout<<"object="<<static_cast<void*>(pd)<<", Base2="<<static_cast<void*>(correct)<<'\n';
    delete pd;
}

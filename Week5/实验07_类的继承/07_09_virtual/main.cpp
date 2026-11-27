#include <iostream>
using namespace std;
struct Root{int value;explicit Root(int v):value(v){cout<<"Root "<<v<<'\n';}};
struct Left:virtual Root{Left():Root(10){cout<<"Left\n";}};
struct Right:virtual Root{Right():Root(20){cout<<"Right\n";}};
struct Diamond:Left,Right{explicit Diamond(int v):Root(v){cout<<"Diamond\n";}};
int main(){
    int n;if(!(cin>>n))return 1;Diamond d(n);
    Root* a=static_cast<Left*>(&d);Root* b=static_cast<Right*>(&d);
    cout<<boolalpha<<"shared root: "<<(a==b)<<'\n';
    a->value+=1;cout<<"left="<<a->value<<", right="<<b->value<<'\n';
}

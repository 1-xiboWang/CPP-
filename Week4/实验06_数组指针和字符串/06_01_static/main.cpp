#include <iostream>
using namespace std;
void show(const int a[]) {
    for (int i=0;i<3;++i) cout << a[i] << ' ';
    cout << '\n';
}
void staticArrayInit() {
    static int a[3];
    cout << "static enter: "; show(a);
    for (int &x:a) x+=5;
    cout << "static exit: "; show(a);
}
void automaticArrayInit() {
    int a[3]={1,2,3};
    cout << "auto enter: "; show(a);
    for (int &x:a) x+=5;
    cout << "auto exit: "; show(a);
}
int main() {
    for(int i=1;i<=2;++i) {
        cout << "call " << i << '\n';
        staticArrayInit(); automaticArrayInit();
    }
}

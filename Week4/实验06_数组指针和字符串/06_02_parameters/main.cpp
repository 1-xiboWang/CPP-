#include <iostream>
using namespace std;
void show(const int a[],int n) {
    for(int i=0;i<n;++i) cout << a[i] << ' ';
    cout << '\n';
}
void modifyArray(int b[],int n) {
    for(int i=0;i<n;++i) b[i]*=2;
}
void modifyElement(int e) {
    e*=2; cout << "local e=" << e << '\n';
}
int main() {
    int a[]={0,1,2,3,4}; show(a,5);
    modifyArray(a,5); show(a,5);
    cout << "a[3] before=" << a[3] << '\n';
    modifyElement(a[3]);
    cout << "a[3] after=" << a[3] << '\n';
}

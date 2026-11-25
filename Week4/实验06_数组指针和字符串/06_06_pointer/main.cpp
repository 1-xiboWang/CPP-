#include <iostream>
using namespace std;
void print(const int *p,int n) {
    for(int i=0;i<n;++i) cout << *(p+i) << ' ';
    cout << '\n';
}
int main() {
    short score[]={84,65,77,60,88,86,92,93,70,66};
    short *p1=score,*p2=score+4;
    cout << "sizeof(short)=" << sizeof(short)
         << " sizeof(long)=" << sizeof(long) << '\n';
    cout << "p1=" << static_cast<void*>(p1) << " value=" << *p1 << '\n';
    ++p1;
    cout << "p1+1=" << static_cast<void*>(p1) << " value=" << *p1 << '\n';
    --p1; cout << "p2-p1=" << p2-p1 << '\n';
    long values[]={84,65,77,60,88};
    cout << "long stride=" << sizeof(*values)
         << " long difference=" << (values+4)-values << '\n';
    int a[6]; for(int &x:a) if(!(cin>>x)) return 1;
    print(a,6);
}

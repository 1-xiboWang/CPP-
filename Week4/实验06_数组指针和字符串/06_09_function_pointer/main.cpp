#include <iostream>
using namespace std;
void swapValues(int *const a,int *const b) {
    int temp=*a; *a=*b; *b=temp;
}
bool ascending(int a,int b) { return a<b; }
bool descending(int a,int b) { return a>b; }
void selectionSort(int *const a,int n,bool (*compare)(int,int)) {
    for(int i=0;i<n-1;++i) {
        int best=i;
        for(int j=i+1;j<n;++j) if(compare(a[j],a[best])) best=j;
        swapValues(&a[i],&a[best]);
    }
}
int main() {
    int a[]={2,6,4,8,10,12,89,68,45,37};
    int order; if(!(cin>>order) || (order!=1 && order!=2)) return 1;
    selectionSort(a,10,order==1?ascending:descending);
    for(int x:a) cout << x << ' ';
    cout << '\n';
}

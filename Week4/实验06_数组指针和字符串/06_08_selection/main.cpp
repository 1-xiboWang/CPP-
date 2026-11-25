#include <iostream>
using namespace std;
void swapValues(int *const a,int *const b) {
    int temp=*a; *a=*b; *b=temp;
}

void selectionSort(int *const a,int n) {
    for(int i=0;i<n-1;++i) {
        int best=i;
        for(int j=i+1;j<n;++j) if(a[j]<a[best]) best=j;
        swapValues(&a[i],&a[best]);
    }
}
int main() {
    int a[]={2,6,4,8,10,12,89,68,45,37};
    
    selectionSort(a,10);
    for(int x:a) cout << x << ' ';
    cout << '\n';
}

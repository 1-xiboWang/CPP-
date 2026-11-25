#include <iostream>
void print(const int b[],int n) {
    for(int i=0;i<n;++i) std::cout << b[i] << ' ';
    std::cout << '\n';
}
int main() { int a[]={10,20,30}; print(a,3); }

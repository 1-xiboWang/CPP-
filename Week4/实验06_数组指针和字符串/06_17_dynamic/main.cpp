#include <iostream>
#include <cstring>
#include <string>
int main() {
    int n; if(!(std::cin>>n) || n<0 || n>1000) return 1;
    int *a=new int[n]{};
    for(int i=0;i<n;++i) a[i]=i*i;
    for(int i=0;i<n;++i) std::cout << a[i] << ' ';
    std::cout << '\n'; delete[] a;
    char text[]="Array and string";
    std::string s=text;
    std::cout << "char length=" << std::strlen(text)
              << " string length=" << s.size() << '\n';
}

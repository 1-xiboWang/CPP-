#include <iostream>
using namespace std;
void swap(int &v1, int &v2) {
    if (v1 == v2) return;
    int temp = v2;
    v2 = v1;
    v1 = temp;
}
int main() {
    int a = 0, b = 0;
    if (!(cin >> a >> b)) return 1;
    cout << "before: a=" << a << ", b=" << b << '\n';
    ::swap(a, a);
    cout << "swap(a,a): a=" << a << ", b=" << b << '\n';
    ::swap(a, b);
    cout << "swap(a,b): a=" << a << ", b=" << b << '\n';
}

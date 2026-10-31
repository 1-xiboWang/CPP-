#include <iostream>
using namespace std;
int main() {
    unsigned short j = 50000;
    short i = static_cast<short>(j);
    cout << "Short int is:" << i << '\n';
    cout << "Short unsigned int is:" << j << '\n';
    cout << "sizeof(short)=" << sizeof(short) << '\n';
}

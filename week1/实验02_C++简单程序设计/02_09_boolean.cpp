#include <iostream>
using namespace std;
int main() {
    bool bV1 = true, bV2 = false;
    cout << "bool value bV1 = " << bV1 << '\n';
    cout << "bool value bV2 = " << bV2 << '\n';
    int nV1 = bV1, nV2 = 0;
    bV1 = nV2;
    cout << "int value nV1 = " << nV1 << '\n';
    cout << "bool value bV1 = " << bV1 << '\n';
    cout << "bool(-7) = " << static_cast<bool>(-7) << '\n';
}

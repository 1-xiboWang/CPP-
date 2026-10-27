#include <iostream>
#include <bitset>
using namespace std;
int main() {
    cout << "~15 = " << ~15 << '\n';
    cout << "15 & 21 = " << (15 & 21) << '\n';
    cout << "15 ^ 21 = " << (15 ^ 21) << '\n';
    cout << "15 | 21 = " << (15 | 21) << '\n';
    unsigned int nTest = 9;
    cout << "start: " << nTest << ' ' << bitset<16>(nTest) << '\n';
    nTest |= 1u << 4;
    cout << "set bit 4: " << nTest << ' ' << bitset<16>(nTest) << '\n';
    nTest &= ~(1u << 4);
    cout << "clear bit 4: " << nTest << ' ' << bitset<16>(nTest) << '\n';
    for (int i = 0; i < 16; ++i) {
        if (nTest & (1u << i)) nTest &= ~(1u << i);
        else nTest |= 1u << i;
    }
    cout << "flip low 16 bits: " << nTest << ' ' << bitset<16>(nTest) << '\n';
}

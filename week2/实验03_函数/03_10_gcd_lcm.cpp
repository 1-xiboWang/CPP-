#include <iostream>
#include <cstdlib>
using namespace std;
long long gcd(int a, int b) {
    long long x = llabs(static_cast<long long>(a));
    long long y = llabs(static_cast<long long>(b));
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}
long long lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return llabs(static_cast<long long>(a) / gcd(a, b) * b);
}
int main() {
    int a = 0, b = 0;
    if (!(cin >> a >> b)) return 1;
    cout << "gcd=" << gcd(a, b) << '\n';
    cout << "lcm=" << lcm(a, b) << '\n';
}

#include <iostream>
using namespace std;
namespace practice {
int abs(int x) { return x > 0 ? x : -x; }
double abs(double x) { return x > 0 ? x : -x; }
long abs(long x) { return x > 0 ? x : -x; }
}
int main() {
    int x1 = 4;
    double x2 = 5.5;
    long x3 = 6L;
    cout << "int: " << practice::abs(x1) << '\n';
    cout << "double: " << practice::abs(x2) << '\n';
    cout << "long: " << practice::abs(x3) << '\n';
    cout << "abs(-4)=" << practice::abs(-4) << '\n';
    cout << "abs(-5.5)=" << practice::abs(-5.5) << '\n';
    cout << "abs(-6L)=" << practice::abs(-6L) << '\n';
}

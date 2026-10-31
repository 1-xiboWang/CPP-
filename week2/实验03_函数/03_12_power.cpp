#include <iostream>
#include <iomanip>
#include <climits>
#include <stdexcept>
using namespace std;
int getPower(int x, int y) {
    if (y < 0) return 0;
    if (y == 0) return 1;
    int half = getPower(x, y / 2);
    long long result = 1LL * half * half;
    if (result > INT_MAX) throw overflow_error("Integer overflow");
    if (y % 2 != 0) result *= x;
    if (result < INT_MIN || result > INT_MAX)
        throw overflow_error("Integer overflow");
    return static_cast<int>(result);
}
double getPower(double x, int y) {
    if (y == 0) return 1.0;
    if (y < 0) {
        if (x == 0) throw domain_error("Zero to negative power");
        return 1.0 / (x * getPower(x, -(y + 1)));
    }
    double half = getPower(x, y / 2);
    return y % 2 ? half * half * x : half * half;
}
int main() {
    int a = 0, m = 0;
    double b = 0;
    if (!(cin >> a >> b >> m)) return 1;
    try {
        int integer = getPower(a, m);
        double real = getPower(b, m);
        double converted = getPower(static_cast<double>(a), m);
        cout << setprecision(12);
        cout << "int power=" << integer << '\n';
        cout << "double power=" << real << '\n';
        cout << "a as double=" << converted << '\n';
    } catch (const exception &e) {
        cout << e.what() << '\n';
        return 1;
    }
}

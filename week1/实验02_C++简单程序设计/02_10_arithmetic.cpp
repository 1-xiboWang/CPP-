#include <iostream>
using namespace std;
int main() {
    int val1 = 24, val2 = 5;
    double val3 = 24, val4 = 5;
    cout << "24/5 = " << val1 / val2 << '\n';
    cout << "24%5 = " << val1 % val2 << '\n';
    val2 = -5;
    cout << "24%(-5) = " << val1 % val2 << '\n';
    cout << "24.0/5.0 = " << val3 / val4 << '\n';
    cout << "24.0/(-5) = " << val3 / val2 << '\n';
    cout << "24/5.0 = " << val1 / val4 << '\n';
    val1 = 5;
    cout << val1++ << ", "; cout << ++val1 << ", ";
    cout << val1-- << ", "; cout << --val1 << '\n';
    // Store each result before the chained output to make evaluation explicit.
    val1 = 5;
    int a = val1++, b = ++val1, c = val1--, d = --val1;
    cout << "stored sequence: " << a << ", " << b << ", " << c << ", " << d << '\n';
}

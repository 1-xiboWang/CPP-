#include <iostream>
using namespace std;
int Fibonacci(int n) {
    if (n <= 2) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() {
    int n = 0;
    if (!(cin >> n) || n < 1 || n > 30) return 1;
    cout << "F(" << n << ")=" << Fibonacci(n) << '\n';
}

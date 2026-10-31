#include <iostream>
using namespace std;
bool isNarcissistic(int n) {
    if (n < 100 || n > 999) return false;
    int a = n / 100, b = n / 10 % 10, c = n % 10;
    return a * a * a + b * b * b + c * c * c == n;
}
int main() {
    int n = 0;
    if (!(cin >> n)) return 1;
    if (n < 100 || n > 999) cout << "Input must be three digits\n";
    else cout << n << (isNarcissistic(n) ? " is narcissistic\n" : " is not narcissistic\n");
    cout << "All three-digit narcissistic numbers:";
    for (int i = 100; i <= 999; ++i)
        if (isNarcissistic(i)) cout << ' ' << i;
    cout << '\n';
}

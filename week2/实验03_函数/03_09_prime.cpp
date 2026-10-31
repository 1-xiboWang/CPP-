#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / i; ++i)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int n = 0;
    if (!(cin >> n)) return 1;
    cout << n << (isPrime(n) ? " is prime" : " is not prime")
         << '\n';
}

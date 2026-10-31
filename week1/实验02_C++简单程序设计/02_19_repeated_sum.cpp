#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n = 0, a = 0;
    if (!(cin >> n >> a) || n <= 0 || a < 1 || a > 9) {
        cout << "Require n>0 and 1<=a<=9\n"; return 1;
    }
    unsigned long long term = 0, sum = 0;
    const auto limit = numeric_limits<unsigned long long>::max();
    for (int i = 0; i < n; ++i) {
        if (term > (limit - a) / 10) {
            cout << "Overflow\n"; return 1;
        }
        term = term * 10 + a;
        if (sum > limit - term) {
            cout << "Overflow\n"; return 1;
        }
        sum += term;
    }
    cout << "Sum = " << sum << '\n';
}

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    long double profit = 0;
    if (!(cin >> profit) || !isfinite(profit) || profit < 0 || profit > 9e12L) {
        cout << "Invalid profit\n"; return 1;
    }
    // Profit is rounded to cents; rates are measured in 1/10000.
    const long long width[] = {10000000, 10000000, 20000000, 20000000, 40000000};
    const long long rate[] = {1000, 750, 500, 300, 150};
    long long remaining = llround(profit * 100), scaled = 0;
    for (int i = 0; i < 5 && remaining > 0; ++i) {
        long long part = remaining < width[i] ? remaining : width[i];
        scaled += part * rate[i];
        remaining -= part;
    }
    scaled += remaining * 100;
    long long cents = (scaled + 5000) / 10000;
    cout << "Bonus = " << cents / 100 << '.'
         << setfill('0') << setw(2) << cents % 100 << '\n';
}

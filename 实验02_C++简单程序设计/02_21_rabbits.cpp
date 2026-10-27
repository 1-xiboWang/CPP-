#include <iostream>
using namespace std;
int main() {
    int previous = 1, current = 1;
    for (int month = 1; month <= 20; ++month) {
        int pairs = 1;
        if (month >= 3) {
            pairs = previous + current;
            previous = current;
            current = pairs;
        }
        cout << "Month " << month << ": pairs=" << pairs
             << ", rabbits=" << 2 * pairs << '\n';
    }
}

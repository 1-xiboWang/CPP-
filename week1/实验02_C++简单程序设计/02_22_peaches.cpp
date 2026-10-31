#include <iostream>
using namespace std;
int main() {
    int peaches = 1;
    cout << "Day 10: " << peaches << '\n';
    for (int day = 9; day >= 1; --day) {
        peaches = (peaches + 1) * 2;
        cout << "Day " << day << ": " << peaches << '\n';
    }
    cout << "Initial peaches = " << peaches << '\n';
}

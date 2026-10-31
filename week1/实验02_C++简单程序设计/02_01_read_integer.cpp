#include <iostream>
using namespace std;
int main() {
    int radius = 0;
    cout << "Please enter the radius!\n";
    if (!(cin >> radius)) return 1;
    cout << "The radius is:" << radius << '\n';
    cout << "PI is:" << 3.14 << '\n';
    cout << "Please enter a different radius!\n";
    if (!(cin >> radius)) return 1;
    cout << "Now the radius is changed to:" << radius << '\n';
}

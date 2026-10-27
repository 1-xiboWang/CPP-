#include <iostream>
using namespace std;
int main() {
    int a = 1, b = 2, c = 3, d = 4;
    cout << "1 == 2: " << (a == b) << '\n';
    cout << "1 < 2: " << (a < b) << '\n';
    cout << "1 < 2 && 3 < 4: " << (a < b && c < d) << '\n';
    int x = 0;
    bool flag = false && (++x > 0);
    cout << "false && (++x>0): " << flag << ", x=" << x << '\n';
    flag = true || (++x > 0);
    cout << "true || (++x>0): " << flag << ", x=" << x << '\n';
}

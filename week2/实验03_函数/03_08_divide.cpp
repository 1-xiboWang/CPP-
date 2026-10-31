#include <iostream>
using namespace std;
short divide(unsigned short a, unsigned short b) {
    if (b == 0) return -1;
    return static_cast<short>(a / b);
}
int main() {
    unsigned int a = 0, b = 0;
    if (!(cin >> a >> b) || a > 65535 || b > 65535)
        return 1;
    short result = divide(static_cast<unsigned short>(a),
                          static_cast<unsigned short>(b));
    cout << "result=" << result << '\n';
}

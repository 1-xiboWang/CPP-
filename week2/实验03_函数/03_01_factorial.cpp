#include <iostream>
using namespace std;
int fact(int);
int main() {
    int j = fact(5);
    cout << "5! is " << j << endl;
    return 0;
}
int fact(int val) {
    int rec = 1;
    while (val > 1)
        rec *= val--;
    return rec;
}

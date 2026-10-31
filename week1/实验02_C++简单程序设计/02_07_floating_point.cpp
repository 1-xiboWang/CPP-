#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const float piF = 3.1415926f;
    const double piD = 3.1415926;
    const long double piL = 3.1415926L;
    float rF = 5.5f, areaF = piF * rF * rF;
    double rD = 5.5, areaD = piD * rD * rD;
    long double rL = 5.5L, areaL = piL * rL * rL;
    cout << "default: " << areaF << ' ' << areaD << ' ' << areaL << '\n';
    cout << setprecision(18);
    cout << "float: " << areaF << ", bytes=" << sizeof(areaF) << '\n';
    cout << "double: " << areaD << ", bytes=" << sizeof(areaD) << '\n';
    cout << "long double: " << areaL << ", bytes=" << sizeof(areaL) << '\n';
}

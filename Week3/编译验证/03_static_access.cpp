#include <iostream>
class Ctype {
    int a;
    static int s;
public:
    static void Print() {
        std::cout << "a=" << ++a << '\n';
        std::cout << "s=" << ++s << '\n';
    }
};
int Ctype::s = 0;
int main() { Ctype::Print(); }

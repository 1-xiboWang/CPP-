#include <iostream>
#include <stdexcept>
class SimpleCircle {
    int *itsRadius;
public:
    explicit SimpleCircle(int r=0):itsRadius(new int(r)) {
        if(r<0) { delete itsRadius; throw std::invalid_argument("radius"); }
    }
    SimpleCircle(const SimpleCircle &c):itsRadius(new int(*c.itsRadius)) {}
    SimpleCircle &operator=(const SimpleCircle &c) {
        if(this!=&c) *itsRadius=*c.itsRadius;
        return *this;
    }
    ~SimpleCircle() { delete itsRadius; }
    int radius() const { return *itsRadius; }
    void setRadius(int r) {
        if(r<0) throw std::invalid_argument("radius");
        *itsRadius=r;
    }
    double area() const { return 3.141592653589793*radius()*radius(); }
};
int main() {
    SimpleCircle a(3),b=a,c;
    b.setRadius(5); c=a; a=a;
    std::cout << "a=" << a.radius() << " b=" << b.radius()
              << " c=" << c.radius() << " area=" << a.area() << '\n';
    SimpleCircle zero;
    std::cout << "zero area=" << zero.area() << '\n';
    try { a.setRadius(-1); }
    catch(const std::invalid_argument &) { std::cout << "negative rejected\n"; }
}

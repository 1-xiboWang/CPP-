class Ctype {
    static int s;
public:
    static int value() { return s; }
};
int main() { return Ctype::value(); }

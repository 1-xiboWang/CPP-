#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Calculator {
public:
    double Calculate(double x, char oper, double y) {
        switch (oper) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;
        default: return 0.0;
        }
    }
};
int main(int argc, char* argv[]) {
    istringstream demo("12 + 3\n12 - 3\n12 * 3\n12 / 3\n8 / 0\n2 ^ 3\nabc\n$\n");
    istream& input = argc > 1 && string(argv[1]) == "--demo"
                     ? static_cast<istream&>(demo) : cin;
    Calculator c;
    string line;
    cout << "Calculator: a + b / a - b / a * b / a / b; $ to exit\n";
    while (getline(input, line)) {
        if (line == "$") break;
        double x = 0.0, y = 0.0, result = 0.0;
        char oper = '+', extra = '\0';
        istringstream parser(line);
        if (!(parser >> x >> oper >> y) || (parser >> extra)) {
            cout << "Invalid input\n";
            continue;
        }
        if (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
            cout << "Invalid operator\n";
            continue;
        }
        if (oper == '/' && y == 0.0) {
            cout << "Division by 0 exception\n";
            continue;
        }
        result = c.Calculate(x, oper, y);
        cout << x << ' ' << oper << ' ' << y << " = " << result << '\n';
    }
    cout << "Bye\n";
    return 0;
}

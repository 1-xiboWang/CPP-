#include <iostream>
#include <string>
using namespace std;
int main() {
    long long number = 0;
    if (!(cin >> number)) return 1;
    string s = to_string(number);
    bool palindrome = number >= 0;
    for (size_t i = 0; i < s.size() / 2; ++i)
        if (s[i] != s[s.size() - 1 - i]) palindrome = false;
    cout << number << (palindrome ? " is palindrome\n" : " is not palindrome\n");
}

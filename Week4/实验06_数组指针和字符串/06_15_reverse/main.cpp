#include <iostream>
#include <string>
#include <utility>
void reverseRange(std::string &s,std::size_t l,std::size_t r) {
    if(l>=r) return;
    std::swap(s[l],s[r]);
    reverseRange(s,l+1,r-1);
}
void reverse(std::string &s) {
    if(!s.empty()) reverseRange(s,0,s.size()-1);
}
int main() {
    std::string s; std::getline(std::cin,s);
    reverse(s); std::cout << '[' << s << "]\n";
}

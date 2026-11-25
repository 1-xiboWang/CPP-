#include <iostream>
#include <string>
int countLetters(const std::string &s) {
    int count=0;
    for(unsigned char c:s)
        if((c>='A' && c<='Z') || (c>='a' && c<='z')) ++count;
    return count;
}
int main() {
    std::string sentence; std::getline(std::cin,sentence);
    std::cout << "letters=" << countLetters(sentence) << '\n';
}

#include <iostream>
using namespace std;
int main() {
    int isample = 0, osample = 0, hsample = 0;
    if (!(cin >> isample >> oct >> osample >> hex >> hsample)) return 1;
    cout << isample << ';' << oct << osample << ';' << hex << hsample << '\n';
    isample = 123; osample = 0173; hsample = 0x7B;
    unsigned long ulsample = 4294967295UL;
    for (int value : {isample, osample, hsample})
        cout << dec << value << ';' << oct << value << ';' << hex << value << '\n';
    cout << dec << ulsample << ';' << oct << ulsample << ';' << hex << ulsample << '\n';
}

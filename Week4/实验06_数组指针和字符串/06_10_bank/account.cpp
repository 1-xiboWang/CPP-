#include "account.h"
#include <cmath>
#include <iostream>
using namespace std;
double SavingsAccount::total=0;
SavingsAccount::SavingsAccount(const Date &d,const string &s,double r)
    :id(s),balance(0),rate(r),lastDate(d),accumulation(0) {
    d.show(); cout << "\t#" << id << " created\n";
}
void SavingsAccount::record(const Date &d,double amount,const string &desc) {
    accumulation=accumulate(d); lastDate=d;
    amount=floor(amount*100+0.5)/100;
    balance+=amount; total+=amount;
    d.show(); cout << "\t#" << id << '\t' << amount << '\t'
                   << balance << '\t' << desc << '\n';
}
void SavingsAccount::error(const string &s) const {
    cout << "Error(#" << id << "): " << s << '\n';
}
void SavingsAccount::deposit(const Date &d,double a,const string &s) {
    record(d,a,s);
}
void SavingsAccount::withdraw(const Date &d,double a,const string &s) {
    if(a>balance) error("not enough money");
    else record(d,-a,s);
}
void SavingsAccount::settle(const Date &d) {
    double interest=accumulate(d)*rate/d.distance(Date(d.getYear()-1,1,1));
    if(interest!=0) record(d,interest,"interest");
    accumulation=0;
}
void SavingsAccount::show() const {
    cout << id << "\tBalance: " << balance;
}

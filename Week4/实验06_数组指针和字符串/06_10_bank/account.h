#ifndef LAB_ACCOUNT_H
#define LAB_ACCOUNT_H
#include "date.h"
#include <string>
class SavingsAccount {
    std::string id;
    double balance,rate;
    Date lastDate;
    double accumulation;
    static double total;
    void record(const Date &,double,const std::string &);
    void error(const std::string &) const;
    double accumulate(const Date &date) const {
        return accumulation+balance*date.distance(lastDate);
    }
public:
    SavingsAccount(const Date &,const std::string &,double);
    const std::string &getId() const { return id; }
    double getBalance() const { return balance; }
    double getRate() const { return rate; }
    static double getTotal() { return total; }
    void deposit(const Date &,double,const std::string &);
    void withdraw(const Date &,double,const std::string &);
    void settle(const Date &);
    void show() const;
};
#endif

#include "date.h"
#include <iostream>
#include <stdexcept>
namespace {
const int days[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
}
Date::Date(int y,int m,int d):year(y),month(m),day(d) {
    if(y<1 || m<1 || m>12 || d<1 || d>getMaxDay())
        throw std::invalid_argument("date");
    int years=year-1;
    totalDays=years*365+years/4-years/100+years/400+days[month-1]+day;
    if(isLeapYear() && month>2) ++totalDays;
}
int Date::getMaxDay() const {
    return isLeapYear() && month==2?29:days[month]-days[month-1];
}
void Date::show() const {
    std::cout << year << '-' << month << '-' << day;
}

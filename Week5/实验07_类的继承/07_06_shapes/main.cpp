#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
class Shape {
public:virtual double getArea()const=0;virtual ~Shape()=default;
};
class Rectangle:public Shape {
protected:double width,height;
public:Rectangle(double w,double h):width(w),height(h){
    if(w<0||h<0)throw invalid_argument("negative dimension");
}
    double getArea()const override{return width*height;}
};
class Circle:public Shape {
    double radius;
public:explicit Circle(double r):radius(r){if(r<0)throw invalid_argument("negative radius");}
    double getArea()const override{return 3.14159265358979323846*radius*radius;}
};
class Square:public Rectangle {public:explicit Square(double side):Rectangle(side,side){}};
int main(){
    double w,h,r,s;if(!(cin>>w>>h>>r>>s))return 1;
    try{
        Rectangle rectangle(w,h);Circle circle(r);Square square(s);
        const Shape* shapes[]={&rectangle,&circle,&square};
        const char* names[]={"Rectangle","Circle","Square"};
        cout<<fixed<<setprecision(4);
        for(int i=0;i<3;++i)cout<<names[i]<<" area="<<shapes[i]->getArea()<<'\n';
    }catch(const invalid_argument&e){cout<<"invalid: "<<e.what()<<'\n';}
}

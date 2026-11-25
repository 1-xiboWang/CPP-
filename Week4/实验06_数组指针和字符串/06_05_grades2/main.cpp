#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class GradeBook {
    string course;
    int grades[10][3];
public:
    static const int students=10, tests=3;
    GradeBook(string name,const int a[][3]):course(name) {
        for(int i=0;i<students;++i)
            for(int j=0;j<tests;++j) grades[i][j]=a[i][j];
    }
    void processGrades() const {
        int low=100,high=0,total=0,frequency[11]={};
        cout << course << '\n' << fixed << setprecision(2);
        for(int i=0;i<students;++i) {
            int row=0; cout << "Student " << i+1 << ": ";
            for(int x:grades[i]) {
                cout << x << ' '; row+=x; ++frequency[x/10];
                if(x<low) low=x;
                if(x>high) high=x;
            }
            total+=row; cout << "average=" << double(row)/tests << '\n';
        }
        cout << "min=" << low << " max=" << high
             << " average=" << double(total)/(students*tests) << '\n';
        for(int i=0;i<11;++i) {
            cout << i*10 << (i==10?": ":"-"+to_string(i*10+9)+": ");
            for(int j=0;j<frequency[i];++j) cout << '*';
            cout << '\n';
        }
    }
};
int main() {
    const int a[10][3]={{87,96,70},{68,87,90},{94,100,90},{100,81,82},{83,65,85},{78,87,65},{85,75,83},{91,94,100},{76,72,84},{87,93,73}};
    GradeBook book("CS101 Introduction to C++ Programming",a);
    book.processGrades();
}

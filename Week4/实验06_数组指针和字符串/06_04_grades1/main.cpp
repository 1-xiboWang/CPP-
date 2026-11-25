#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class GradeBook {
    string course;
    int grades[10];
public:
    static const int students=10, tests=1;
    GradeBook(string name,const int a[]):course(name) {
        for(int i=0;i<students;++i)
            for(int j=0;j<tests;++j) grades[i]=a[i];
    }
    void processGrades() const {
        int low=100,high=0,total=0,frequency[11]={};
        cout << course << '\n' << fixed << setprecision(2);
        for(int i=0;i<students;++i) {
            int row=0; cout << "Student " << i+1 << ": ";
            for(int x:{grades[i]}) {
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
    const int a[10]={87,68,94,100,83,78,85,91,76,87};
    GradeBook book("CS101 Introduction to C++ Programming",a);
    book.processGrades();
}

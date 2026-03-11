
// Members declared as public can be accessed from anywhere.

#include <iostream>
using namespace std;

class Student {
public:
    int marks;
    
    void dis(){
        cout<<marks<<endl;
    }
};

int main()
{

Student s;
s.marks = 90;
s.dis();

    return 0;
}
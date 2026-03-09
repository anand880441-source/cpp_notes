// In C++, a friend class is a class that is allowed to access the private and protected members of another class.

// Normally, private members cannot be accessed outside the class, but when a class is declared as a friend, it gets special permission.


#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A() {
        x = 10;
    }

    friend class B; 
};

class B {
public:
    void show(A obj) {
        cout << "Value of x: " << obj.x << endl;
    }
};

int main() {
    A a1;
    B b1;

    b1.show(a1);
}
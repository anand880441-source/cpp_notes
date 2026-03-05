// #include <iostream>
// using namespace std;


// class Count {
// public:
//     int count;   // Not static (separate for each object)

//     Count() {
//         count = 0;   // initialize
//         ++count;     // increment for this object
//     }

//     void display() {
//         cout << "Object count for this object: " << count << endl;
//     }
// };

// int main() {

//     Count c1;
//     Count c2;
//     Count c3;

//     c1.display();
//     c2.display();
//     c3.display();

//     return 0;
// }

//solution

#include <iostream>
using namespace std;

class Count {
public:
    static int count;   // Shared among all objects

    Count() {           // Constructor
        ++count;
    }

    void display() {
        cout << "Objects created: " << count << endl;
    }
};

// Static variable must be defined outside class
int Count::count = 0;

int main() {

    Count c1, c2, c3;
    c3.display();

    return 0;
}
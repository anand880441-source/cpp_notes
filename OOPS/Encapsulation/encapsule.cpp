Encapsulation is a core concept in Object-Oriented Programming (OOP). It means bundling data (variables) and the methods (functions) that operate on that data into a single unit, usually a class, and restricting direct access to some of the object's components.

Simple Definition

Encapsulation = Data + Methods together + Controlled access

Why Encapsulation is Important

🔒 Data protection – Prevents direct modification of internal data.
🧩 Better organization – Keeps related data and methods together.
🛠 Easy maintenance – Internal implementation can change without affecting other code.
🎛 Controlled access – Access data using getters and setters.

Real-Life Example

Think of a capsule medicine 💊:

The capsule wraps the medicine inside.

You cannot see or change what's inside directly.

Similarly, in programming:

Data is hidden inside a class

It can only be accessed using public methods


#include <iostream>
using namespace std;

// Class Box demonstrates Encapsulation
class Box{
private:
    int size;  
    // 'size' is private → data is hidden from outside the class
    // This protects the variable from direct access

public:

    // Public method to set the value of size
    // This provides controlled access to the private data
    void setSize(int s){
        this->size = s;   // 'this' refers to the current object
    }

    // Public method to get the value of size
    // Allows reading the private variable safely
    int getSize(){
        return size;
    }
};

int main() {

    Box b1;   // Create object of class Box

    // Accessing private data through public methods
    b1.setSize(20);  

    // Printing the value using getter method
    cout << "Size of box: " << b1.getSize();

    return 0;
}
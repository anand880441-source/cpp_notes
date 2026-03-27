// Runtime Polymorphism (Dynamic Polymorphism)

//while the code in code in converted into machine code then when the .exe file execute there it will decide which function to run

// Runtime Polymorphism is a type of polymorphism where the method to be executed is decided at runtime (during program execution)
// instead of compile time.

//1>A number of function members which was define in a base class but it got override by its own derived class but with some changes.
//2>The derived class must iverride the base class function members with same name and same number of arguments and same data type
//the return type can vary.
//3>The override function members is alocated during the runtime where decission is actually taken based on object which is created not
//not by "object reference variable".

// In simple words:
// 👉 The program decides which method to call while the program is running.

// Runtime polymorphism is mainly achieved using:

// Method Overriding

// Inheritance

//simple
// #include <iostream>
// using namespace std;

// class Poly{
//     public:
//     void sound(int a,int b){
//         cout<<a-b<<endl;
//     }
// };

// class Child:public Poly{
//     public:
//     void sound(int a,int b){
//         cout<<a+b<<endl;
//     }
// };
// int main() {
// Child c1;
// Poly p1;

// p1.sound(1,1);
// c1.sound(5,5);
//     return 0;
// }

#include <iostream>
using namespace std;

class Poly{
public:
    virtual void sound(int a,int b){
        cout<<a-b<<endl;
    }
};

class Child:public Poly{
public:
    void sound(int a,int b){
        cout<<a+b<<endl;
    }
};

int main() {

    Poly *p1 = new Child;

    p1->sound(1,1);

    return 0;
}


// #include <iostream>
// using namespace std;

// class Parent{
//   public:
//  virtual void dog(){
//      cout<<"Animal"<<endl;
//  }
// };

// class Child: public Parent{
//   public:
//   void dog(){
//       cout<<"Bark"<<endl;
//   }
// };


// int main() {
// //   Parent p1;
// //   p1.dog();
  
// //   Child c1;
// //   c1.dog();

// Parent *p1 = new Child;
// p1->dog();

//     return 0;
// }
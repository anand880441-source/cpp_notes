// 🔹 Polymorphism in C++

// Polymorphism means “many forms.”
// In C++, polymorphism allows the same function or operator to behave differently depending on the object or context.

// There are two main types of polymorphism in C++:

//in a particular class we define number of same function during compile time we will decide which function to execute
//is known as compile time....

//function overloading:
//1 same class and same func name // 2 but make sure the arguments and data type is diffrent
//function overload means when you are defining same function number of time in a same class but with either different number of arguments or
//different datatype

// #include<iostream>
// #include <string>
// using namespace std;

// class Poly{
//     public:
//     void add(int a,int b){
//         cout<<"add of two number is: "<<a+b<<endl;
//     }

//     void add(int a,int b,int c){
//         cout<< "The add of three number is: "<<a+b+c<<endl;
//     }

//     void add(string a,string b){
//         cout<<"The concatanation of two strings is: "<<a+b<<endl;
//     }
    
//     int add(double a,double b){
//         cout<<"The double data type add is: "<<a+b<<endl;
//         return 0;
//     }

// };

// int main(){

// Poly p1;
// p1.add(1,2);
// p1.add("PRIT","ESH");
// p1.add(1,2,3);
// p1.add(22.3,1.3);

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------//

// 🔹 Operator Overloading in C++

// Definition:
// Operator overloading in C++ is a feature that allows programmers to redefine the behavior of operators (like +, -, *, ==, etc.) for user-defined data types such as classes and objects.

// In simple words, it allows operators to work with objects just like they work with built-in data types.

#include<iostream>
#include<string>
using namespace std;

// fucntion overlaod means when you are defining the same fucntion number of times in a same class but with either different number of argumnets or different data types...

class Poly{
    private:
     
        int a1, b1;
        
    
    public:
    
        Poly(int a, int b){
            a1 = a;
            b1 = b;
            cout << "A1 value is: " << a1 << " and B1 value is: " << b1 << endl;
        }
        
        int operator+(Poly& p2){
            int c = this->a1 - p2.b1;
            return c;
        }
        
        void operator() (){
            cout << "Good Morning" << endl;
        }
        
        void operator++(){
            a1 += 5;
            b1 -= 10;
            
            cout << this->a1 << " and " << this->b1 << endl;
        }
        
         void operator++(int){
             --a1;
             --b1;
             cout << this->a1 << " and" << this->b1 << endl;
         }
    

};


int main(){
    
    Poly p1(23, 56);
    Poly p2(56, -45);
    
    cout << p1 + p2 << endl;
    
    p1();
    
    p1++;
    
    ++p1;
    
    // p1.add(10, 20);
    // int b = p1.add(12.23, 78.3);
    // char c = p1.add("Samir" , 68);
    return 0;
};
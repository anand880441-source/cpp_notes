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

// #include <iostream>
// using namespace std;

// class Count {
// public:
//     static int count;   // Shared among all objects

//     Count() {           // Constructor
//         ++count;
//     }

//     void display() {
//         cout << "Objects created: " << count << endl;
//     }
// };

// // Static variable must be defined outside class
// int Count::count = 0;

// int main() {

//     Count c1, c2, c3;
//     c3.display();

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class CodingGita{
//     public:
    
//     string Name;
//   static string organization;
//     int roll;
//    static int tStudent;
    
//     CodingGita(string name,int rn){
//         Name = name;
//         roll = rn;
//         ++tStudent;
//     }
    
//     void dis(){
//         cout<<"The student " << Name << " in " << organization << " have roll no: "<<roll<<" and total students are "<<tStudent<<endl;
//     }
// };

// int CodingGita::tStudent = 0;
// string CodingGita::organization = "CodingGita";



// int main()
// {

//  CodingGita s1("hanu",222);
//  s1.dis();
 
//  CodingGita s2("manu",6969);
//  s2.dis();
 
//     return 0;
// }


#include<iostream>
#include<string>

using namespace std;

class CreateObj{
  
  public:
  
    //  Data member.... but with static keyword
    
      static int count;
      static float num;
      static string name;
      
    // constructor....
    
      CreateObj(){
          ++count;
          cout << "The count is incremented to trace the number of objects.." << endl;
      }
      
    // Function members...
    
      void display(){
          cout << "Total numbers of object created for this class is ->" << CreateObj::count << endl;
          cout << "The static name of this class is:" << CreateObj::name << endl;
      }
      
    // Destrucotr to trace those objects which are going to destroy....
      ~CreateObj(){
          --count;
          cout << "The current object is about to get destroyed through c++ compiler" << endl;
      }    
};

// It is use to intialize the staic data members value....

int CreateObj :: count = 0;
float CreateObj :: num = 56.7;
string CreateObj :: name = "Samir";

void create(){
    cout << "Total 5 object will be created.." << endl;
    CreateObj obj4;
    obj4.display();
    
    CreateObj obj5;
    obj5.display();
    
    CreateObj obj6;
    obj6.display();
    
    CreateObj obj7;
    obj7.display();
    
    CreateObj obj8;
    obj8.display();

    cout <<"All object which is created is about to get destroyed becauise of its life scope" << endl;
}

int main(){
    
    cout << "The object will start creating from this point" << endl;
    
    CreateObj obj1;
    obj1.display();
    
    cout << "Another object is created..." << endl;
    CreateObj obj2;
    obj2.display();
    
    cout << "Another object is created..." << endl;
    CreateObj obj3;
    obj3.display();

    cout << "Function is called to create extra objects.." << endl;
    create();
    
    
    obj2.display();
    return 0;
}
#include <iostream>
using namespace std;    

class MyClass {
    public:

     void myMethod(){
        cout<<"Hello from MyClass!";  // method function defined inside the class 
     }
};

class Car{
    public:
    void myCarMethod(){
        cout<<"Hello from Car !";
    }
};

int main(){
    MyClass obj1;                           //creating and object of MyClass
    obj1.myMethod();
    return 0;                     //calling the method on the object
}


void myNextMethod(){                      // method function defined outside the class 
    cout<<"Hello from myNextMethod!";
};
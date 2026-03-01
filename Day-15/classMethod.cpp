#include<iostream>
using namespace std;


class MyClass{
    public:
    void myMethod(){
        cout<<"{helloworld}";
    }


};

int main(){
    MyClass obj1;
    obj1.myMethod();
    return 0;
}



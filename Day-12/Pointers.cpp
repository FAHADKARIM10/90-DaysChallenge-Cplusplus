#include<iostream>
using namespace std;

int main(){
    int num =10;
    int *ptr;

    ptr =&num;

    cout<<"the value of num:"<<num<<endl;
    cout<<"the adress of num:"<<&num<<endl;
    cout<<"value at adress ptr is pointing:"<<*ptr<<endl;
    
    return 0;
}

// * => used to declare pointer 
// & => Adress of the operator 
// *ptr => derefrence (value at adress)


#include<iostream>
using namespace std;

int main(){
    string teaOrder;

    cout<<"Enter your tea order";
    getline(cin,teaOrder);

    if(teaOrder==""){
        cout<<"you have ordered green tea"<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int marks= 85;

    if(marks >=90){
        cout<<"Grade A+";
    }
    else if(marks>=80){
        cout<<"Grade A";
    }
    else if(marks>=70){
        cout<<"Grade B";
    }
    else{
        cout<<"Grade C";
    }

    return 0;
}
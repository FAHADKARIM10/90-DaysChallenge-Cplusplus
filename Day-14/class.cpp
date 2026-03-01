#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int marks;
    void display(){
        cout<<"Name:" <<name<<endl;
        cout<<"Marks:" <<marks<<endl;   
    }
};


class Car{
    public:
    string brand;
    string model;
    int year ;

    void displayInfo(){
        cout <<"Brand:"<<brand <<endl;
        cout <<"model:"<<model <<endl;
        cout <<"year;"<< year<<endl;
    }
};

class Rectangle{
    public:
    double length;
    double width;

    double calculateArea(){
        return length * width;
    }

    double calculatePeramitre(){
        return 2 *(length + width);
    }


};
 


class BankAccount{
    private:
    double balance;
    public:

    void deposit(double amount){
        balance +=amount;
    }

    void withDraw(double amount){
        balance -=amount;
    }

    double getBalance(){
        return balance;
    }
};





int main(){
    // object creation 

    Student s1;

    s1.name="fahad";
    s1.marks=89;

    s1.display();

    return 0;
}

// class => no memory allocation 
// object => memory allocated 



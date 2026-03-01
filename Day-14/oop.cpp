#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;

    void display(){
        cout << name << endl;
    }
};

int main(){
    Student s1;

    s1.name = "Fahad Karim";
    s1.display();

    return 0;
}
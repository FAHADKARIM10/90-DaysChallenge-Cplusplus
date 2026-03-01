#include<iostream>
using namespace std;

class MyCar{
    public:
    string model;
    string brand;
    int year;

};

int main(){
    // First object for MyCar 
    MyCar obj1;
    obj1.brand ="bmw";
    obj1.model ="1839";
    obj1.year = 1092;

    // Create another object for MyCar

    MyCar obj2;
    obj2.brand="Addidas";
    obj2.model="xyn";
    obj2.year=1739;

    // Print Attributes and values 

    cout<<obj1.brand<<""<<obj1.model<<""<<obj1.year<<endl;
    cout<<obj2.brand<<""<<obj2.model<<""<<obj2.year<<endl;
    return 0;



}

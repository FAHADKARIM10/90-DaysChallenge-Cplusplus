#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};

class Car1{
    public:
    string brand ;
    string model ;
    int year ;

    Car1(string x,  string y,int z);  //constructor declaration

    

};

// constructor  definition outside the class 
Car::Car(string x,string y, int z){
    brand =x;
    model=y;
    year =z;

}



int main() {
     Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;


    Car carObj1("BMW", "X6", 1999);
    Car carObj2("Ford", "Mustang", 1969);
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}

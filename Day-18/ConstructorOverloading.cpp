#include <iostream>
using namespace std;

class construct {
    public:
    float area;
    //constructor with on parameter 
    construct()
    {
        area =0;
    }

    // constructor with parameter 

    construct(int a,int b)
    {
        area =a * b;
    }

    void disp()
    {
        cout<<area<<endl;
    }
};


class Car{
    public:
    string brand;
    string model;

    Car(){
        brand="unknown";
        model="unknow";
    }

    Car(string b,string m){
        brand =b;
        model =m;
        
    }



    
};



int main(){
    Car car1;
    Car car2("bmw","x5");
    construct c1;
    construct c2(10,20);
    c1.disp();
    c2.disp();
    cout << "Car1: " << car1.brand << " " << car1.model << "\n";
    cout << "Car2: " << car2.brand << " " << car2.model << "\n";
    return 0;
}




#include<iostream>
using namespace std;
#include <conio.h>

class CRectangle
{ 
    private:
    int X,Y;
    public:
    void set_values (int a, int b)
    {
        X=a;
        Y=b;
    }
    
    int area ()
    {
        cout<<"Area is: "<<X*Y;
    }
 };


int main()
{ 
    CRectangle R1;
    R1.set_values(3,4);
    R1.area();
    getch();
    return 0;
}
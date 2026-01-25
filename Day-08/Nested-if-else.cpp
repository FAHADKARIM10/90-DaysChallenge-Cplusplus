#include <iostream>
using namespace std;

int main()
{
    int marks= 75;

    if(marks>=50)
    {
        if(marks>=80)
        {
            cout<<"Grade A";
        }
        else
        {
            cout<<"Grade B";
        }
    }
    else {
        cout<<"Failed";
    }

    return 0;
}




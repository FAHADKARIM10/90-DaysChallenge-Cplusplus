#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    char citizen = 'Y';

    if (age >= 18)
    {
        if (citizen == 'Y')
        {
            cout << "Eligible to vote";
        }
        else
        {
            cout << "Not a citizen";
        }
    }
    else
    {
        cout << "Underage";
    }

    return 0;
}

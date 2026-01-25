#include <iostream>
using namespace std;

int main()
{
    int age, marks;
    char citizenship;

  
    cout << "Enter age: ";
    cin >> age;

    cout << "Are you a Pakistani citizen? (Y/N): ";
    cin >> citizenship;

    cout << "Enter marks: ";
    cin >> marks;

    cout << endl;

 
    if (age >= 18)
    {
        if (citizenship == 'Y' || citizenship == 'y')
        {
            cout << "Eligible for admission.\n";

            
            if (marks >= 80)
            {
                cout << "Grade: A";
            }
            else if (marks >= 70)
            {
                cout << "Grade: B";
            }
            else if (marks >= 60)
            {
                cout << "Grade: C";
            }
            else if (marks >= 50)
            {
                cout << "Grade: D";
            }
            else
            {
                cout << "Fail";
            }
        }
        else
        {
            cout << "Not eligible: Citizenship requirement not met.";
        }
    }
    else
    {
        cout << "Not eligible: Age must be 18 or above.";
    }

    return 0;
}

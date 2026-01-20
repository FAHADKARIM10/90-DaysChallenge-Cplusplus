#include <iostream>
using namespace std;

// Function demonstrating all conditional statements
void conditionalExercise() {

    int number = 10;
    int marks = 85;
    int age = 20;
    int password = 1234;
    int choice = 2;

    cout << "----- IF STATEMENT -----\n";
    if (number > 0) {
        cout << "Number is positive\n";
    }

    cout << "\n----- IF-ELSE STATEMENT -----\n";
    if (number % 2 == 0) {
        cout << "Number is even\n";
    } else {
        cout << "Number is odd\n";
    }

    cout << "\n----- ELSE IF LADDER -----\n";
    if (marks >= 90) {
        cout << "Grade A+\n";
    }
    else if (marks >= 80) {
        cout << "Grade A\n";
    }
    else if (marks >= 70) {
        cout << "Grade B\n";
    }
    else {
        cout << "Grade C\n";
    }

    cout << "\n----- NESTED IF -----\n";
    if (age >= 18) {
        cout << "Age verified\n";

        if (password == 1234) {
            cout << "Access granted\n";
        } else {
            cout << "Wrong password\n";
        }

    } else {
        cout << "Under age\n";
    }

    cout << "\n----- SWITCH STATEMENT -----\n";
    switch (choice) {
        case 1:
            cout << "Option 1 selected\n";
            break;
        case 2:
            cout << "Option 2 selected\n";
            break;
        case 3:
            cout << "Option 3 selected\n";
            break;
        default:
            cout << "Invalid option\n";
    }
}

int main() {
    conditionalExercise();
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int choice;

    // Menu system using a for loop to repeat until exit
    for (;;) {  // infinite loop, we'll break when choice == 4
        cout << "\n===== STUDENT UTILITY SYSTEM (FOR LOOP) =====\n";
        cout << "1. Print Multiplication Table\n";
        cout << "2. Calculate Sum of Numbers\n";
        cout << "3. Print Star Pattern\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int num;
            cout << "Enter a number: ";
            cin >> num;

            // for loop for multiplication table
            cout << "Multiplication Table of " << num << ":\n";
            for (int i = 1; i <= 10; i++) {
                cout << num << " x " << i << " = " << num * i << endl;
            }
        }

        else if (choice == 2) {
            int n, sum = 0;

            cout << "Enter how many numbers you want to sum: ";
            cin >> n;

            // for loop for sum
            for (int i = 1; i <= n; i++) {
                sum += i;
            }

            cout << "Sum of first " << n << " numbers is: " << sum << endl;
        }

        else if (choice == 3) {
            int rows;
            cout << "Enter number of rows for star pattern: ";
            cin >> rows;

            // nested for loop for star pattern
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }

        else if (choice == 4) {
            cout << "Exiting program... Goodbye!\n";
            break;  // exit the infinite for loop
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}

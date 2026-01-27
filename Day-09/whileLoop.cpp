#include <iostream>
using namespace std;

int main() {
    int choice = 0;

    // while loop for menu repetition
    while (choice != 4) {
        cout << "\n===== STUDENT UTILITY SYSTEM (WHILE LOOP) =====\n";
        cout << "1. Print Multiplication Table\n";
        cout << "2. Calculate Sum of Numbers\n";
        cout << "3. Print Star Pattern\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int num, i = 1;
            cout << "Enter a number: ";
            cin >> num;

            // while loop for multiplication table
            cout << "Multiplication Table of " << num << ":\n";
            while (i <= 10) {
                cout << num << " x " << i << " = " << num * i << endl;
                i++;
            }
        }

        else if (choice == 2) {
            int n, sum = 0, i = 1;
            cout << "Enter how many numbers you want to sum: ";
            cin >> n;

            // while loop for sum
            while (i <= n) {
                sum += i;
                i++;
            }

            cout << "Sum of first " << n << " numbers is: " << sum << endl;
        }

        else if (choice == 3) {
            int rows, i = 1;
            cout << "Enter number of rows for star pattern: ";
            cin >> rows;

            // while loop for star pattern
            while (i <= rows) {
                int j = 1;
                while (j <= i) {
                    cout << "* ";
                    j++;
                }
                cout << endl;
                i++;
            }
        }

        else if (choice == 4) {
            cout << "Exiting program... Goodbye!\n";
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}

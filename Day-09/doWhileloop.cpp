#include <iostream>
using namespace std;

int main() {
    int choice;

    // outer do-while loop for menu repetition
    do {
        cout << "\n===== STUDENT UTILITY SYSTEM (DO-WHILE LOOP) =====\n";
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

            // do-while loop for multiplication table
            cout << "Multiplication Table of " << num << ":\n";
            do {
                cout << num << " x " << i << " = " << num * i << endl;
                i++;
            } while (i <= 10);
        }

        else if (choice == 2) {
            int n, sum = 0, i = 1;
            cout << "Enter how many numbers you want to sum: ";
            cin >> n;

            // do-while loop for sum
            do {
                sum += i;
                i++;
            } while (i <= n);

            cout << "Sum of first " << n << " numbers is: " << sum << endl;
        }

        else if (choice == 3) {
            int rows, i = 1;
            cout << "Enter number of rows for star pattern: ";
            cin >> rows;

            // nested do-while loop for star pattern
            do {
                int j = 1;
                do {
                    cout << "* ";
                    j++;
                } while (j <= i);
                cout << endl;
                i++;
            } while (i <= rows);
        }

        else if (choice == 4) {
            cout << "Exiting program... Goodbye!\n";
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);  // outer do-while ends

    return 0;
}

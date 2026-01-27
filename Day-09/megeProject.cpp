#include <iostream>
using namespace std;

int main() {
    int choice;

    
    do {
        cout << "\n===== STUDENT UTILITY SYSTEM =====\n";
        cout << "1. Print Multiplication Table\n";
        cout << "2. Calculate Sum of Numbers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int num;
            cout << "Enter a number: ";
            cin >> num;

         
            cout << "Multiplication Table of " << num << ":\n";
            for (int i = 1; i <= 10; i++) {
                cout << num << " x " << i << " = " << num * i << endl;
            }
        }

        else if (choice == 2) {
            int n, sum = 0, i = 1;
            cout << "Enter how many numbers you want to add: ";
            cin >> n;

          
            while (i <= n) {
                sum += i;
                i++;
            }

            cout << "Sum of first " << n << " numbers is: " << sum << endl;
        }

        else if (choice == 3) {
            cout << "Exiting program... Goodbye!\n";
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 3); 

    return 0;
}

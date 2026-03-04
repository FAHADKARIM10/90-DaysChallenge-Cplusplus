#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data member

public:
    // Setter function to deposit money
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
        }
    }

    // Setter function to withdraw money
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    // Getter function to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(500);
    myAccount.withdraw(200);

    cout << "Balance: " << myAccount.getBalance() << endl; // Output: Balance: 300

    return 0;
}
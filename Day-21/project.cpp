#include <iostream>
#include <fstream>
using namespace std;

class Account {
protected:
    int accountNumber;
    string name;
    double balance;

public:
    Account(int accNo, string n, double bal) {
        accountNumber = accNo;
        name = n;
        balance = bal;
    }

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!\n";
    }

    virtual void display() {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    SavingsAccount(int accNo, string n, double bal)
        : Account(accNo, n, bal) {}

    void display() override {
        cout << "\n--- Savings Account ---";
        Account::display();
    }
};


class CurrentAccount : public Account {
public:
    CurrentAccount(int accNo, string n, double bal)
        : Account(accNo, n, bal) {}

    void display() override {
        cout << "\n--- Current Account ---";
        Account::display();
    }
};

// 
int main() {

    Account* accounts[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====";
        cout << "\n1. Create Savings Account";
        cout << "\n2. Create Current Account";
        cout << "\n3. Deposit";
        cout << "\n4. Withdraw";
        cout << "\n5. Display All Accounts";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            int accNo;
            string name;
            double balance;

            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Initial Balance: ";
            cin >> balance;

            if (choice == 1)
                accounts[count++] = new SavingsAccount(accNo, name, balance);
            else
                accounts[count++] = new CurrentAccount(accNo, name, balance);

            cout << "Account Created Successfully!\n";
        }

        else if (choice == 3) {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < count; i++) {
                if (accounts[i]->getAccountNumber() == accNo) {
                    cout << "Enter Amount: ";
                    cin >> amount;
                    accounts[i]->deposit(amount);
                }
            }
        }

        else if (choice == 4) {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            for (int i = 0; i < count; i++) {
                if (accounts[i]->getAccountNumber() == accNo) {
                    cout << "Enter Amount: ";
                    cin >> amount;
                    accounts[i]->withdraw(amount);
                }
            }
        }

        else if (choice == 5) {
            for (int i = 0; i < count; i++) {
                accounts[i]->display();
            }
        }

    } while (choice != 6);

    return 0;
}
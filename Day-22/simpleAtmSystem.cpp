#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

struct Account {
    string ownerName;
    string cardNumber;
    string pin;
    double balance;
    bool isLocked;
    int failedAttempts;
};

void printHeader(const string& title) {
    cout << "\n╔══════════════════════════════════════╗\n";
    cout << "║  " << left << setw(36) << title << "║\n";
    cout << "╚══════════════════════════════════════╝\n";
}

void printReceipt(const string& type, double amount, double newBalance) {
    time_t now = time(0);
    string dt = ctime(&now);
    dt.pop_back(); 

    cout << "\n-------- TRANSACTION RECEIPT ----------\n";
    cout << "  Date/Time : " << dt << "\n";
    cout << "  Type      : " << type << "\n";
    cout << "  Amount    : PKR " << fixed << setprecision(2) << amount << "\n";
    cout << "  Balance   : PKR " << fixed << setprecision(2) << newBalance << "\n";
    cout << "---------------------------------------\n";
}

bool authenticate(Account& acc) {
    string enteredPin;
    const int MAX_ATTEMPTS = 3;

    while (acc.failedAttempts < MAX_ATTEMPTS) {
        cout << "\n  Enter PIN: ";
        cin >> enteredPin;

        if (enteredPin == acc.pin) {
            acc.failedAttempts = 0;
            return true;
        } else {
            acc.failedAttempts++;
            int remaining = MAX_ATTEMPTS - acc.failedAttempts;

            if (remaining > 0) {
                cout << "  ✗ Incorrect PIN. " << remaining << " attempt(s) remaining.\n";
            } else {
                acc.isLocked = true;
                cout << "\n  ✗ Too many failed attempts. Card LOCKED.\n";
                cout << "  Please contact your bank.\n";
            }
        }
    }
    return false;
}

void checkBalance(const Account& acc) {
    printHeader("BALANCE INQUIRY");
    cout << "\n  Account Holder : " << acc.ownerName << "\n";
    cout << "  Card Number    : **** **** " << acc.cardNumber.substr(acc.cardNumber.size() - 4) << "\n";
    cout << "  Available Bal  : PKR " << fixed << setprecision(2) << acc.balance << "\n";
}

void deposit(Account& acc) {
    printHeader("CASH DEPOSIT");
    double amount;
    cout << "\n  Enter deposit amount (PKR): ";
    cin >> amount;

    if (amount <= 0) {
        cout << "  ✗ Invalid amount. Must be greater than 0.\n";
    } else if (amount > 1000000) {
        cout << "  ✗ Deposit limit exceeded (Max: PKR 1,000,000).\n";
    } else {
        acc.balance += amount;
        cout << "  ✓ Deposit successful!\n";
        printReceipt("Deposit", amount, acc.balance);
    }
}

void withdraw(Account& acc) {
    printHeader("CASH WITHDRAWAL");
    double amount;
    cout << "\n  Enter withdrawal amount (PKR): ";
    cin >> amount;

    if (amount <= 0) {
        cout << "  ✗ Invalid amount. Must be greater than 0.\n";
    } else if (amount > 50000) {
        cout << "  ✗ Withdrawal limit exceeded (Max: PKR 50,000 per transaction).\n";
    } else if (amount > acc.balance) {
        cout << "  ✗ Insufficient funds.\n";
        cout << "  Available Balance: PKR " << fixed << setprecision(2) << acc.balance << "\n";
    } else if (fmod(amount, 500) != 0) {
        cout << "  ✗ Amount must be in multiples of PKR 500.\n";
    } else {
        acc.balance -= amount;
        cout << "  ✓ Please collect your cash.\n";
        printReceipt("Withdrawal", amount, acc.balance);
    }
}

void changePin(Account& acc) {
    printHeader("CHANGE PIN");
    string currentPin, newPin, confirmPin;

    cout << "\n  Enter current PIN : ";
    cin >> currentPin;

    if (currentPin != acc.pin) {
        cout << "  ✗ Incorrect current PIN.\n";
        return;
    }

    cout << "  Enter new PIN (4 digits): ";
    cin >> newPin;

    if (newPin.length() != 4 || newPin.find_first_not_of("0123456789") != string::npos) {
        cout << "  ✗ PIN must be exactly 4 numeric digits.\n";
        return;
    }

    cout << "  Confirm new PIN : ";
    cin >> confirmPin;

    if (newPin == confirmPin) {
        acc.pin = newPin;
        cout << "  ✓ PIN changed successfully!\n";
    } else {
        cout << "  ✗ PINs do not match. No changes made.\n";
    }
}

void miniStatement(const Account& acc) {
    printHeader("MINI STATEMENT");
    
    cout << "\n  Account: " << acc.ownerName << "\n\n";
    cout << "  Date          Type           Amount\n";
    cout << "  ──────────────────────────────────\n";
    cout << "  24-Mar-2026   Deposit        +5,000\n";
    cout << "  25-Mar-2026   Withdrawal     -2,500\n";
    cout << "  26-Mar-2026   Transfer Out   -1,000\n";
    cout << "  27-Mar-2026   Deposit        +3,000\n";
    cout << "  28-Mar-2026   Withdrawal     -1,500\n";
    cout << "  ──────────────────────────────────\n";
    cout << "  Current Bal: PKR " << fixed << setprecision(2) << acc.balance << "\n";
}

void showMenu() {
    cout << "\n  ┌─────────────────────────────┐\n";
    cout << "  │        MAIN MENU            │\n";
    cout << "  ├─────────────────────────────┤\n";
    cout << "  │  1. Check Balance           │\n";
    cout << "  │  2. Deposit                 │\n";
    cout << "  │  3. Withdraw                │\n";
    cout << "  │  4. Change PIN              │\n";
    cout << "  │  5. Mini Statement          │\n";
    cout << "  │  6. Exit                    │\n";
    cout << "  └─────────────────────────────┘\n";
    cout << "  Choose an option: ";
}


int main() {
    
    Account myAccount = {
        "Ali Hassan",
        "4111111111110023",
        "1234",
        25000.00,
        false,
        0
    };

    printHeader("WELCOME TO SWIFT BANK ATM");
    cout << "\n  Insert your card...\n";

    if (myAccount.isLocked) {
        cout << "\n  ✗ Your card is locked. Contact the bank.\n";
        return 1;
    }

    cout << "  Card detected: **** **** "
         << myAccount.cardNumber.substr(myAccount.cardNumber.size() - 4) << "\n";

    if (!authenticate(myAccount)) {
        return 1;
    }

    cout << "\n  ✓ Authentication successful. Welcome, " << myAccount.ownerName << "!\n";

    int choice;
    bool running = true;

    while (running) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(myAccount);
                break;
            case 2:
                deposit(myAccount);
                break;
            case 3:
                withdraw(myAccount);
                break;
            case 4:
                changePin(myAccount);
                break;
            case 5:
                miniStatement(myAccount);
                break;
            case 6:
                printHeader("THANK YOU FOR BANKING!");
                cout << "\n  Please take your card. Goodbye!\n\n";
                running = false;
                break;
            default:
                cout << "\n  ✗ Invalid option. Please choose 1–6.\n";
        }
    }

    return 0;
}
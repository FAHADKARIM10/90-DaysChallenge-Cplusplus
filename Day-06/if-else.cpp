#include <iostream>
using namespace std;

int main() {
    int password = 1234;

    if (password == 1234) {
        cout << "Password correct\n";

        if (password % 2 == 0) {
            cout << "Password is even";
        }
    } else {
        cout << "Incorrect password";
    }

    return 0;
}

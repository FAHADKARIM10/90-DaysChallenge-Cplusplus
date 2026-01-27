#include <iostream>
#include <string>
using namespace std;

int main() {
    int numbers[5];
    int total = 0;
    float average;

    cout << "--- Array & Loop Demonstration ---" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Enter value for index [" << i << "]: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        total = total + numbers[i];
    }

    average = (float)total / 5;

    cout << "\nDisplaying Array Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " contains: " << numbers[i] << endl;
    }

    cout << "--------------------------" << endl;
    cout << "Sum of elements: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}
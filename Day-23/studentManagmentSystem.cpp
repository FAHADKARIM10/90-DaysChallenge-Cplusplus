#include <iostream>
using namespace std;

// Global variables
int ids[100], marks[100];
string names[100];
int count = 0;

// Function to add student
void addStudent() {
    cout << "\nEnter Student ID: ";
    cin >> ids[count];

    cout << "Enter Name: ";
    cin >> names[count];

    cout << "Enter Marks: ";
    cin >> marks[count];

    count++;
    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents() {
    if (count == 0) {
        cout << "\nNo Students Found!\n";
        return;
    }

    cout << "\nStudent List:\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << ids[i]
             << ", Name: " << names[i]
             << ", Marks: " << marks[i] << endl;
    }
}


void searchStudent() {
    int id, found = 0;
    cout << "\nEnter ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            cout << "Found: " << names[i]
                 << ", Marks: " << marks[i] << endl;
            found = 1;
        }
    }

    if (!found)
        cout << "Student not found!\n";
}


void calculateAverage() {
    if (count == 0) {
        cout << "\nNo data available!\n";
        return;
    }

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += marks[i];
    }

    float avg = (float)sum / count;
    cout << "\nAverage Marks: " << avg << endl;
}


int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Calculate Average\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: calculateAverage(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
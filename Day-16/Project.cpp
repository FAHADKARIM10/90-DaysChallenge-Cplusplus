#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    string getName() const { return name; }
    int getAge() const { return age; }
};


class Student : public Person {
private:
    int rollNo;
    float cgpa;

public:
    Student(string n = "", int a = 0, int r = 0, float c = 0.0)
        : Person(n, a) {
        rollNo = r;
        cgpa = c;
    }

    int getRoll() const { return rollNo; }
    float getCGPA() const { return cgpa; }

    void updateData(string n, int a, float c) {
        name = n;
        age = a;
        cgpa = c;
    }

    void display() const {
        cout << left << setw(10) << rollNo
             << setw(15) << name
             << setw(10) << age
             << setw(10) << cgpa << endl;
    }

    string toFileString() const {
        return name + " " + to_string(age) + " " +
               to_string(rollNo) + " " + to_string(cgpa);
    }
};


class University {
private:
    vector<Student> students;
    const string filename = "students.txt";

public:
    University() {
        loadFromFile();
    }

    void loadFromFile() {
        ifstream file(filename);
        if (!file) return;

        string name;
        int age, roll;
        float cgpa;

        while (file >> name >> age >> roll >> cgpa) {
            students.push_back(Student(name, age, roll, cgpa));
        }
        file.close();
    }

    void saveToFile() {
        ofstream file(filename);
        for (const Student &s : students) {
            file << s.toFileString() << endl;
        }
        file.close();
    }

    void addStudent() {
        string name;
        int age, roll;
        float cgpa;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter CGPA: ";
        cin >> cgpa;

        students.push_back(Student(name, age, roll, cgpa));
        saveToFile();

        cout << "Student Added Successfully!\n";
    }

    void displayAll() const {
        if (students.empty()) {
            cout << "No Students Found!\n";
            return;
        }

        cout << left << setw(10) << "Roll"
             << setw(15) << "Name"
             << setw(10) << "Age"
             << setw(10) << "CGPA" << endl;

        cout << "---------------------------------------\n";

        for (const Student &s : students) {
            s.display();
        }
    }

    void searchStudent() const {
        int roll;
        cout << "Enter Roll No to Search: ";
        cin >> roll;

        for (const Student &s : students) {
            if (s.getRoll() == roll) {
                cout << "Student Found:\n";
                s.display();
                return;
            }
        }

        cout << "Student Not Found!\n";
    }

    void updateStudent() {
        int roll;
        cout << "Enter Roll No to Update: ";
        cin >> roll;

        for (Student &s : students) {
            if (s.getRoll() == roll) {
                string name;
                int age;
                float cgpa;

                cout << "Enter New Name: ";
                cin >> name;
                cout << "Enter New Age: ";
                cin >> age;
                cout << "Enter New CGPA: ";
                cin >> cgpa;

                s.updateData(name, age, cgpa);
                saveToFile();
                cout << "Student Updated Successfully!\n";
                return;
            }
        }

        cout << "Student Not Found!\n";
    }

    void deleteStudent() {
        int roll;
        cout << "Enter Roll No to Delete: ";
        cin >> roll;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->getRoll() == roll) {
                students.erase(it);
                saveToFile();
                cout << "Student Deleted Successfully!\n";
                return;
            }
        }

        cout << "Student Not Found!\n";
    }
};


int main() {
    University uni;
    int choice;

    do {
        cout << "\n===== SMART UNIVERSITY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: uni.addStudent(); break;
            case 2: uni.displayAll(); break;
            case 3: uni.searchStudent(); break;
            case 4: uni.updateStudent(); break;
            case 5: uni.deleteStudent(); break;
            case 6: cout << "Exiting Program...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
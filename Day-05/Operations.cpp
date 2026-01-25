#include <iostream>
using namespace std;


void operatorsExercise() {

    int a = 10, b = 3;
    cout << "Arithmetic Operators\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\nRelational Operators\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    cout << "\nLogical Operators\n";
    cout << "(a > 5 && b < 5) : " << (a > 5 && b < 5) << endl;
    cout << "(a > 5 || b > 5) : " << (a > 5 || b > 5) << endl;
    cout << "!(a == b) : " << !(a == b) << endl;

  
    cout << "\nAssignment Operators\n";
    int x = 5;
    x += 3;   
    cout << "x after += 3 : " << x << endl;

  
    cout << "\nIncrement / Decrement\n";
    int y = 5;
    cout << "Prefix ++y : " << ++y << endl; 
    cout << "Postfix y++ : " << y++ << endl; 
    cout << "Value of y : " << y << endl;   

   
    cout << "\nConditional Operator\n";
    int max = (a > b) ? a : b;
    cout << "Maximum value : " << max << endl;

 
    cout << "\nBitwise Operators\n";
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

 
    cout << "\nSizeof Operator\n";
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
}

int main() {
    operatorsExercise();
    return 0;
}



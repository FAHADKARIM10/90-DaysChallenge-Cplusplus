#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
    char ch1, ch2;

    puts("demonstration of gets(),getche() and puts()");
    cout << "\nPress any key (getch): ";
    ch1 =getch();
    cout << "\nYou pressed (using getch): " << ch1 << endl;

    // Using getche()

    cout << "\nEnter a character (getche): ";
    ch2 = getche();  // character IS shown on screen
    cout << "\nYou entered (using getche): " << ch2 << endl;


    // Using puts() again
    puts("\nProgram execution completed.");
    puts("Press any key to exit...");

     // Pause screen
    getch();

    return 0;
}

    


// all header library
#include <iostream>
#include <string>
#include <windows.h>
#include <limits>
#include <conio.h>

// no std:: codes
using namespace std;

void setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    // calculator variables
    char type;
    double n1;
    double n2;
    double res;
    string welcome;
    string novalidtype;
    welcome = "Beigerocks Console Calculator v0.10";
    novalidtype = "Not a recognized calculation type!";

    // printing for the calc
    setConsoleColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << welcome << "\n";
    cout << "Thanks for using beigerocks's calculator!"<< endl;

    // calculation types
    setConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << "Available types: (+, -, *, /)\n";
    cout << "Select calculation type: ";
    cin >> type;

    // calculation number 1
    cout << "Enter calculation number 1: ";
    cin >> n1;

    // calculation number 2
    cout << "Enter calculation number 2: ";
    cin >> n2;
    cout << endl;

    // operator cases
    switch(type){
        case '+':
            res = n1 + n2;
            setConsoleColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Calculation Result: " << res << "\n";
            break;
        case '-':
            res = n1 - n2;
            setConsoleColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Calculation Result: " << res << "\n";
            break;
        case '*':
            res = n1 * n2;
            setConsoleColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Calculation Result: " << res << "\n";
            break;
        case '/':
            res = n1 / n2;
            setConsoleColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "Calculation Result: " << res << "\n";
            break;
        default:
            setConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << novalidtype << "\n";
            break;
    }

    cout << "Press any key to exit..." << endl;
    _getch(); // press any key to exit

    // terminates the application
    return 0;
}

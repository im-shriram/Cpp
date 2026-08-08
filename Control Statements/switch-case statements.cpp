/*
    Rules of the Switch Statement in C++
        1. In C++ switch statement, the case value of the program must be either [char or int] type (imp).
        2. It does not allow duplicate case value in C++.
        3. It can have several number of cases.
        4. Every case statement can have a break statement. It is an optional in switch statement.
        5. The case labels should be followed by a colon ":".
        6. The default statement of the switch statement is also an optional.
*/

#include <iostream>
using namespace std; // using standard namespace

int main() {
    float num1, num2;
    char oper;
    cout << "Choose any operator (+, -, *, /): " << endl;
    cin >> oper;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    switch (oper) {
        case '+': // case 1 addition
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-': // case 2 subtraction
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*': // case 3 multiplication C++
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/': // case 4 division
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default: // default case
            // if any operator doesn't match any given case
            cout << "Error! Choosen operator is not correct" << endl;
            break;
    };

    return 0;
}
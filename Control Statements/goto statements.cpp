#include <iostream>
using namespace std;

void codeFirst() {
    ineligible: // You can name anything anywere even after mentioning goto statment.
        cout << "You are not eligible to vote" << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) goto ineligible;
    else
        cout << "You are eligible for vote" << endl;
} // This is not a goog desing since its keep looping until the age >= 18.

void codeSecond() {
    // Breaking the loop
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                goto exitloop; // Based on certain condition
            }
        }
    }

    exitloop:
        cout << "Escaped from the nested loop";
}

void codeThird() {
    // Error Handling Without Exception Mechanism
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        // If negative, jump to the 'error' label
        goto error;
    }
    cout << "You entered: " << number << endl;

    error:
        cout << "Error! Negative numbers are not allowed." << endl;
}

void codeForth() {
    cout << "Processing data...\n";

    // Unconditional jump to the label 'skip'
    goto skip;

    cout << "This statement will be skipped!\n";
    
    // Label 'skip' serves as a target for the goto statement
    skip:
        cout << "Execution resumed after skipping.\n";
}

int main() {
    codeFirst();
    codeSecond();
    codeThird();
    codeForth();

    return 0;
}
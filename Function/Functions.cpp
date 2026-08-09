#include <iostream>
#include <ostream>
using namespace std;

// NOTE: A function can be called after it has been declared. You cannot call a function who has no defination → int add();
int add() {
    // NOTE: All functions except main and void return type must return a value of its corrosponding value.
    return 0;
}

// Default parameter are always initialized at the end
int subtract(int a, int b = 7) {
    return a - b;
}

// Function Overloading
int multiply(int a) {
    return a * 10;
}
int multiply(int a, int b) {
    /* overloading with more than one arguments */
    return a * b;
}
int multiply(float a, int b) {
    /* overloading with different data-typed arguments */
    return a * b;
}
// NOTE: Function that only differs in the return type cannot be overloaded

// Calling through Forward Decalration
double division(double a, double b = 5);

int main() {
    cout << subtract(10) << endl;
    cout << subtract(10, 20) << endl;

    cout << multiply(10) << endl;
    cout << multiply(int(10), 20) << endl;
    cout << multiply(float(4.5), 10) << endl; // you can also pass `4.5f`
    // NOTE: explicitely add int and float to get rid of ambiguity issues.

    cout << division(100);
    return 0;  
};

double division(double a, double b) {
    return a / b;
};
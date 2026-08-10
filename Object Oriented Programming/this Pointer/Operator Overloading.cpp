#include <bits/stdc++.h>
using namespace std;

class ComplexNumber {
    private:
        float real;
        float imag;

    public:
        ComplexNumber(float real, float imag): real(real), imag(imag) { };

        void show() {
            cout << real << " + " << imag << 'i';
        };
        
        // Since first object is accessed by `this`, you only need mention second object as overloading method parameter.
        ComplexNumber* operator+ (ComplexNumber c2) {
            ComplexNumber *sum = new ComplexNumber(0, 0);

            sum -> real = this -> real + c2.real;
            sum -> imag = this -> imag + c2.imag;

            return sum;
        };
};

int main() {
    ComplexNumber c1(4.5, 9.23);
    ComplexNumber c2(6.90, 8.31);

    // The first object accessed using `this` pointer
    ComplexNumber* sum = c1 + c2;
    sum -> show();

    return 0;
}

/*
    Limitations of this Pointer
    • Can not be modified: A programmer cannot change the fundamental properties of this pointer as it remains default and irreversible.
    • Not available in static functions: This ponter is inaccessible in static functions because they do not belong to any object example.
    • Limited to class scope: Only non-static class members can appoint this indicator as an operation.
*/
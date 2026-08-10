# include <bits/stdc++.h>
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

        friend ComplexNumber operator+ (ComplexNumber c1, ComplexNumber c2); /* `this` can be only accessed in normal functions */
        float operator- (ComplexNumber obj) {
            /* the object that called this method (through operator) passed indirectly and accessed by `this` pointer */
            return this -> real - obj.real;
        };
};

ComplexNumber operator+ (ComplexNumber c1, ComplexNumber c2) {
    ComplexNumber ans(0, 0);
    ans.real += (c1.real + c2.real);
    ans.imag += (c1.imag + c2.imag);

    return ans;
};

int main() {
    ComplexNumber c1(4.5, 9.23);
    ComplexNumber c2(6.90, 8.31);

    ComplexNumber sum = c1 + c2;
    cout << "real numbers subtraction → " << (c1 - c2) << endl;
    sum.show();

    return 0;
};

/*
    Friend Function
        • It can be called like a normal function without using the object.
        • It can be declared either in the private or the public section of the class.
*/
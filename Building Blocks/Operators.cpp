/*
    The behavour of operator is dependent on both the larger sized operands.
    e.g.
        int / int → int (4)
        float / int → float (8)
*/

#include <iostream>
using namespace std;

class ArrowOperator {
    public:
        int a = 0;
}; // semicolon must

int main() {
    int a = 10, b = 3;

    // 1. Arithmetic Operators
    cout << (a + b) << endl; // 13  → addition
    cout << (a - b) << endl; // 7   → subtraction
    cout << (a * b) << endl; // 30  → multiplication
    cout << (a / b) << endl; // 3   → integer division (drops decimal!)
    cout << (a % b) << endl; // 1   → remainder (modulo)

    // Implicit Type Conversion
    int m = 10;
    float n = 11;
    cout << (m / n) << endl; // The answer is in float

    // 2. Assignment Operators
    a += 5; // a = a + 5  → 15
    a -= 3; // a = a - 3  → 12
    a *= 2; // a = a * 2  → 24
    a /= 4; // a = a / 4  → 6
    a %= 4; // a = a % 4  → 2

    // 3. Comparison / Relational Operators
    a == b; // false  → equal to
    a != b; // true   → not equal
    a > b;  // false  → greater than
    a < b;  // true   → less than
    a >= b; // false  → greater or equal
    a <= b; // true   → less or equal

    // 4. Logical Operators → Unlike `Python`, there is no exceptional outputs → "Hello" and True → True (returns last truthy value)
    bool x = true, y = false;
    x && y;  // false
    x || y; // true
    !x;     // false
    cout << "Hello" && "World"; // First "Hello" will print then "Hello" && "World" computed - Solution ⬇️
    cout << endl << ("Hello" && "World") << endl;

    // 5. Increment / Decrement Operators
    a++; // post-increment → use THEN add 1
    ++a; // pre-increment  → add 1 THEN use
    a--; // post-decrement → use THEN minus 1
    --a; // pre-decrement  → minus 1 THEN use
    /*
        NOTE: The behavour of these operators are confusing in loops and control statements
            int a = 1, b = 10;
            if ((++a + b++) == (a++ + ++b)) {
                cout << "Both are same" << endl;
            };
            cout << a << ' ' << b << endl; 
        What will be the output of a and b also the expression inside if - statement.
    */

    // 6. Bitwise Operators - only works with integer
    int p = 5; // binary: 0101
    int q = 3; // binary: 0011
    p & q;     // 0001 = 1   → AND  (1 only if BOTH bits are 1)
    p | q;     // 0111 = 7   → OR   (1 if EITHER bit is 1)
    p ^ q;     // 0110 = 6   → XOR  (1 if bits are DIFFERENT)
    ~p;        //      = -6  → NOT  (flips all bits)
    p << 1;    // 1010 = 10  → left shift  (multiply by 2)
    p >> 1;    // 0010 = 2   → right shift (divide by 2) → What if the number is odd → Divide by 2 and ignore the remender
    cout << (~p) << endl;
    /*
        Flipping 0000 0101 results in 1111 1010.
            In a signed integer system (Two's Complement), if the leftmost bit (the sign bit) is 1, the number is negative.
        Invert the bits: 1111 1010 → 0000 0101
        Add 1: 0000 0101 + 1 = 0000 0110 (which is 6 in decimal).
        Apply the negative sign: Since the original sign bit was 1, the result is -6.

        For any integer p, the bitwise NOT operation is always equivalent to: ~p = -(p + 1)
    */

    // 7. Ternary Operator
    // syntax: condition ? value_if_true : value_if_false
    a = 10;
    b = 20;
    int min = (a < b) ? a : b;
    cout << min; // 10

    // 8. sizeof Operator
    cout << sizeof(int) << endl;    // 4
    cout << sizeof(char) << endl;   // 1
    cout << sizeof(double) << endl; // 8
    cout << sizeof(bool) << endl;   // 1
    cout << sizeof(long) << endl;   // 8 → long, long int, long long all are same
    cout << sizeof(long double) << endl; // 16
    
    cout << sizeof(&a /* or a pointer like *ptr */) << endl; // 8

    int arr[5];
    cout << sizeof(arr) << endl; // 20 (5 × 4 bytes)

    // 9. Comma Operator
    int k, l, v = (1, 2, 3);
    cout << v << endl;

    for (int i = 0, j = 10; i < j; i++, j--) {
        cout << i + j << " ";
    }; cout << endl;

    // 10 Arrow Operator → Replacement to *ptr.a (* and .)
    ArrowOperator obj = ArrowOperator();
    ArrowOperator *ptr = &obj;
    ptr -> a = 100;
    cout << ptr -> a << " " << obj.a << endl;

    // 11 Casting Operator → Using the casting operator, we can convert one data type to another data type.
    float var = 34.89;
    int modf_var = static_cast<int>(var);
    modf_var = (int)var;
    modf_var = int(var);

    return 0;
};
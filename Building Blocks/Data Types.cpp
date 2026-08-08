#include <bits/stdc++.h>
using namespace std;

// User-Defined Data Type 1 → typedef and using - To provide alieases
typedef unsigned long int ulint;
using ullong = unsigned long long;
const ulint people = 10;
const ullong likes = 20;

// Enumeration - 
enum Colour {
    RED, GREEN, BLUE, YELLOW
};
Colour favouritColour = BLUE;

// Structure
struct Student {
    int id;  
    char name[50];  
    float grade;  
};
Student s = {18, "sam", 9.1};

// Union - objects id union shares the same memory so the modification will reflect to all the objects ever created.
union School {
    int id_;  
    char name[50];  
    float rooms;  
};
School S; // revisit

class Bike{
    private: string brand;
    public:
        Bike(string b) { brand = b; };
        void showBrand() { cout << "Bike brand: " << brand << endl; };
};

// Fundamental (Built-in) Data Types
void fundamental_datatypes() {
    // 1. Integer Types (Signed)
    int a = 10;          
    short b = 100;       
    long c = 100000L; // optional prefix `L` 
    long long d = 9999LL; // optional prefix `LL`
    // NOTE: <long>, <long int> and <long long> all are same

    // Unsigned (only positive)
    unsigned int e = 42;       
    unsigned long long f = -99; // converts into positive

    // Integer Overflow
    unsigned long long total_likes = numeric_limits<unsigned long long>::max();
    try {
        /*
        Total values unsigned long long can hold = 2⁶⁴
            Result = 2⁶⁴ + 1
                = 18,446,744,073,709,551,616 + 1
                = 18,446,744,073,709,551,617 [Wrapping]
        */
        cout << total_likes << endl;
        total_likes += 1;
        cout << total_likes << endl;
        /*
            NOTE: The output is 0 because unsigned integer overflow is defined behavior in C++. It doesn't throw an exception; it wraps around to zero.
                The math works like this:
                    (M + 1) wraps to 0
                    (M + 2) wraps to 1
                    (M + 3) wraps to 2
                    (M + x) wraps to x - 1
            This wrapping behavour is same for all the data types.
        */
    } catch(char *message) {
        cout << "Integer Overflow error" << endl;
    }

    // 2. Floating Point Types
    float g = 3.14f;      
    double h = 3.14159265; // default floting point type
    long double i = 3.14L; 
    // `Long` doubles the size → int (4) - long int (8) | double (8) - long double (16)

    // 3. Character Type - single quotes
    char j = 'A'; // 1 byte
    char k = 65;  // also 'A'! (ASCII value) → A to Z - (65 to 90), a to z - (97 to 122)

    // Implicit Type Conversion → ASCII ←→ Character
    cout << int('a') << endl;
         << char(99);

    // 4. Boolean Type
    bool l = true;  // stored as 1, 1 byte
    bool m = false; // stored as 0

    // 5. auto Type
    auto n = 10;   // int
    auto o = 3.14; // double
    auto p = 'A';  // char
    auto q = true; // bool

    // REVISIT
    auto r = "Hello"; // const char*
}

// 6. void Type → Only used with functions
void print() {
    cout << "Returns nothing";
}

// Derived Data Types
void derived_datatypes() {
    // Arrays
    int arr[5] = {1, 2, 3, 4, 5}; // 1D array
    int multy_arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    }; // 2D array
    int *dynamic_arr = new int[5]; // Dynamic array
    delete[] dynamic_arr;

    // Pointers
    int x = 100;
    int *ptr_x = &x;

    cout << x << endl
         << *ptr_x << endl
         << &x << endl
         << ptr_x;

    // Referance Variable
    int &ref_x = x; // Here the value of ref_x is same as x as well as they are pointing to the same memory location
    cout << ref_x << endl
         << &ref_x << endl
         << &x;
}

int main() {
    // Exception 1 — Floating point imprecision:
    float a = 0.1 + 0.2;
    cout << a << endl; // 0.3 ✅ looks fine

    // but...
    if (a == 0.3) // ❌ can be FALSE!
        cout << "equal";
    else
        cout << "not equal" << endl;

    // Because internally: 0.1 + 0.2 = 0.30000000000000004
    // Fix: use a small tolerance
    if (abs(a - 0.3) < 0.0001) // ✅ correct way
        cout << "equal" << endl;

    // Exception 2 — char is actually a number:
    char b = 'A';
    cout << b << endl            // A
         << b + 1 << endl       // 66  (arithmetic works!)
         << (char)(b + 1) << endl; // B → Explicit Type conversion

    // Exception 3 — any non-zero is true:
    bool c = -99;   // true!
    bool d = 0;     // false
    bool e = 0.001; // true!

    cout << true << endl; // prints 1, NOT "true"
    // Fix:
    cout << boolalpha << true << endl; // prints "true"

    return 0;
};
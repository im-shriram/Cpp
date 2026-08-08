/*
    Types of variables
        1. Local Variables - Limited for the block in which they have decalred
        2. Global Variables - Able to access every. Recommended to be constant
        3. Static Variables - The value of these types of variables are shared across all the instances of that class
        4. Referance Variables & Pointers - The variables that stores the referance / address of other variables known as referance variables
        5. Constant Variables - The values of such variables are fixed when they are initialized
*/

#include <iostream>
#include <string>
using namespace std;

// Global Variable → They are modifiable without mentioning scope resolutions but should recommended to be constant
const auto standard = 1;

class StaticVariables {
    public:
        // Static Variable
        static char division;
        static int batch;
};
int StaticVariables :: batch = 10;
char StaticVariables :: division = 'B';

// Local, Non-Local and Global variables scope.
void outer(int a, int b) {
    // nonlocal variable
    string name = "dexter";
    int roll_no = 32;
    int standard = 5;

    /*
        [&] (read and write all) capture all outer variables by reference (like nonlocal and gloabl)
        [=] (read all) capture all outer variables by value (copy, can't modify)
        [&x] (read and write x) capture only x by reference
        [x] (read x → dont use =x) capture only x by value

        `=` always before `&`
    */
    auto inner = [=, &name, &roll_no, &standard](int a, int b) {
        standard = 15; // changing nonlocal variable value.
        cout << ::standard << ' ' << standard << endl; // accessing global using ::

        // Modifying outer (nonlocal) variable
        name = "Sam";
        roll_no = 18; 
    }; 
    /* 
        This is called lambda functions 
        More about lambda function → ./functions/lambda_function.cpp
    */

    inner(a, b);
    cout << name << ' ' << roll_no << endl;

    return ;
}

int main() {
    // Local Variables
    string name = "Dexter";
    int roll_no = 10;
    auto standard = 12;
    cout << ::standard << ' ' << standard << endl; // :: is scope resolution operator

    // Reference Variable
    string &name_ref = name;
    int *roll_no_ref = &roll_no;

    // Constant Variable
    const float grades = 98.65;

    // Static Variable
    StaticVariables obj_1 = StaticVariables();
    StaticVariables obj_2 = StaticVariables();
    obj_1.batch = 8;
    cout << obj_2.batch << endl;

    outer(1, 2);

    return 0;
};
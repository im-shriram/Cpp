/*
    Function Parameters
        1. Pass by value: In Pass by Value, a copy of the actual parameter is passed to the function. It means any modifications made inside the function do not affect the original variable.

        2. Pass by reference: In Pass by Reference, a function receives the actual memory address of the argument instead of a copy. It means any changes made inside the function directly affect the original variable.

        3. Pass by Pointers: In Pass by Pointer, we pass the memory address of a variable using a pointer. The function modifies the value stored at the given address.
*/

#include <iostream>
using namespace std;

void pass_by_value(int a, int b, int c = 10) {
    int swap = a;
    a = b;
    b = swap;

    cout << "The value of c = " << c << endl;
}

/*
    Pass by reference with this approach `&a` does not create a copy but pointers can be copied so functions create a copy of pointer as well.
*/
void pass_by_reference(int &a, int &b) {
    int swap = a;
    a = b;
    b = swap;
}

void pass_by_pointer(int *a, int *b) {
    int swap = *a;
    *a = *b;
    *b = swap;
}

/*
    citical bug in my previous code
        void pass_by_pointer(int *a, int *b)
        {
            int *swap = a;
            a = b;
            b = swap;
        }
        → In this code, we are swapping the pointer and not the values present at that locations but these pointer ended up being local and not global. That means the function created the copy of pointer and not using the actual pointers.
*/

int main() {
    int a = 100, b = 200;
    pass_by_value(a, b, 20);
    cout << a << " " << b << endl;

    a = 100, b = 200;
    pass_by_reference(a, b);
    cout << a << " " << b << endl;

    a = 100, b = 200;
    pass_by_pointer(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}
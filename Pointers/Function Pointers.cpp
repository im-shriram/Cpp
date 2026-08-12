#include <bits/stdc++.h>
using namespace std;

int add(const int a, const int b){
    return a + b;
};

int subtract(const int a, const int b){
    return a - b;
};

int multiply(const int a, const int b){
    return a * b;
};

double arethmatic_operation(int (*function_pointer)(int, int), int a, int b) {
    return 3.14 + function_pointer(a, b);
}

int main() {
    cout << "memory address of main function → " << main << endl;

    /* function pointer */
    int (*function_pointer)(int, int) = add; /* return_type (*name)(parameters)*/
    cout << "addition of two numbers → " << function_pointer(2, 3) << endl;

    /* array of function pointers */
    int (*function_pointer_array[3])(int, int) = {add, subtract, multiply};
    cout << "array of function pointers → " << function_pointer_array[0](2, 3) << endl;

    /* passing function as argument */
    cout << "passing function as argumenrt → " << arethmatic_operation(function_pointer, 2, 3) << endl;

    return 0;
}
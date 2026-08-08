#include <bits/stdc++.h>
using namespace std;

int main() {
    // Chained Assignment Expression → Only values are same and not memory location.
    int a, b = 0;
    int c = 10, d = 11;
    int var1 = 40; int var2 = 90;

    int x;
    int y;
    x = y = 100; // int a = b = 10 → Error
    cout << &x << ' ' << &y << endl;

    // Embedded Assignment Expression → assignment expression is enclosed within another assignment expression.
    int m;
    int n;
    m = 10 + (n = 20);
    cout << m << ' ' << n << endl;

    // Pointer Expressions
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    ptr += 1; // next memory location
    cout << "Using Pointer - " << 2[ptr] << ' ' << ptr[2] << endl; // ptr[2] = ptr[ptr + sizeof(int) * 2] or *(arr + i);
    cout << &arr << " " << arr << endl; // Both are same
    cout << sizeof(&arr) << endl; // Size of hexadecimal number → 8
    
    return 0;
};

/*  
    Unresolved → What is exactly n[&arr]?
    cout << "Using Reference - " << 2[&arr] << ' ' << &arr[2] << endl;
*/
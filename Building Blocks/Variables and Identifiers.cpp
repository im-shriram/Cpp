/*
    `Variables` are `containers` that stores and manages the data. The `labels` of those variables are called `Identifers`.

    In the C++ program, everything named by a developer is an identifier.
    1. Variable Identifiers
        Use camelCase formatting for floating point (for constants, use UPPER_SNAKE_CASE).
        Begin with a lowercase letter for integers.
        Use clear and descriptive names that reflect their purpose.

    2. Function Identifiers
        Use camelCase for function names.
        Select verb-based or action-descriptive names to indicate their behaviour.

    3. Classes Identifiers
        Use PascalCase (each word starts with an uppercase letter).
        Use nouns or noun phrases to represent objects or entities. 
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // All the values except `string` and `char` get initialized to a random value (a number which is already present at that location which is assigned to these variables and arrays).

    // Initializing the variables 
    int a;
    int arr[5];
    vector<int> vec; // NOTE: How to define vector size

    // Different ways of initialization
    auto m; // If you are not sure about the type of data get stored in the variable → configured during runtime (slow)
    int n, o, p = (1, 2, 3); // Tuple Unpacking using `,` operator
    int q = 0, int r = 1;
    int s, t;
    s = t = 10;

    // Accessing the variables
    cout << a << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }; cout << endl;

    for (auto it: vec) {
        cout << it << ' ' << vec[it] << endl;
    }; cout << endl;

    // Modifying the values of variables
    a = 45; // Type conversion just by assigning different value is not possible.
    cout << a << endl;

    return 0;
};
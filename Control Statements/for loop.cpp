#include <iostream>
using namespace std;

int main() {
    // for loop with multiple variables
    for (int i = 0, j = 0; (i < 5) || (j < 3); i++, j += 2) {
        cout << i, cout << j; // NOTE: you can write multiple statements on one line using `,` operator
    };

    return 0;
};
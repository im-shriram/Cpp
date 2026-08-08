#include <iostream>
using namespace std;

int main() {
    // while loop
    int i = 0;
    while (i < 20) {
        cout << i << endl;
        i++;
    }

    // do while loop - always runs at least a single time because the condition is checked after execution (early execution)
    int j = 0;
    do {
        cout << j << endl;
        j++;
    } while (j < 20);

    return 0;
};
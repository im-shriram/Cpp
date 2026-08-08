/*
    for-each loop → performs an operation for each element
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int numbers[5] = {15, 20, 25, 30, 35};

    // Range-based for-each loop to modify each element
    for (int &num : numbers) {
        num += 5; // add each number with 5
    }

    for (int num : numbers) {
        cout << num << " "; // prints the output
    }

    return 0;
}
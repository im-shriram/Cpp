#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break;
        cout << i << "\n";
    }

    for (int i = 1; i <= 8; i++) {
        if (i == 6) continue;
        cout << i << "\n";
    }

    return 0;
};
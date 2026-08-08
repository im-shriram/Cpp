#include <iostream>
using namespace std;

// Block comments can also start and end within a single line
double sum(/* argument a: int */ int a = 0, /* argument b: float */ float b = 0.0) {
    return double(a + b);
}

int main() {
    /*
    Block Comments 
    Initializing variables
    Taking Input
    */
    int a; float b;
    cin >> a >> b;
    
    // Single line comment - Adding numbers
    cout << sum(a, b);

    return 0;
}
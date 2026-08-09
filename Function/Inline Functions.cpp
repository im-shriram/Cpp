/*
    The Problem First — Why do we need it?
    → Every time you call a function, C++ does extra behind-the-scenes work:
        1. Save current state
        2. Jump to function location in memory
        3. Execute function
        4. Jump back
        5. Restore state
    This is called function call overhead. For small functions called thousands of times, this overhead adds up!

    What is inline?
    Instead of jumping to the function, the compiler copy-pastes the function code directly where it's called.

    Aspects of inline function
    1. small, simple, frequently called functions
    2. Lenghty code (over 100 lines) → compiler will likely IGNORE the inline keyword here
    3. inline is just a REQUEST, not a command
        The compiler can ignore your inline request if:
            - Function is too large
            - Function is recursive
            - Function has loops
    4. Inline with Classes
        Class methods defined inside the class are automatically inline!
*/

# include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    float sum = add(10, 20);
    cout << sum;
    return 0;
}

/*
    Trade-off — Speed vs Size because of the `Redundancy`
        Inline  → faster speed ✅  but larger program size ⚠️
            (code copy-pasted everywhere)

        Normal  → slower speed ⚠️  but smaller program size ✅
            (one copy, jump to it)
*/
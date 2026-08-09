#include <bits/stdc++.h>
using namespace std;

/* Higher Order Functions */
void applyFunction(int x, int y, function<int(int, int)> func) {
    /*
        The first int is what the function returns.
        The second int (inside parentheses) is what the function takes as input.
    */
    function<void(int, int)> beautify = [=](int a, int b){
        /* the = sign is maindatory otherwise lambda function cannot access local function argument */
        cout << "The sum of two numbers → " << func(x, y) << endl;
    };
    beautify(x, y);
};

int main() {
    applyFunction(3, 5, [](int a, int b) { return a + b; });

    /* Recursive Lambda Function*/
    function<int(int)>factorial;
    factorial = [&](int n){
        /*
            error → The [=] tells the compiler: "Capture all outer variables by value (make a copy) at this exact moment." At the moment this line executes, the variable factorial has not been assigned the lambda body yet. It is still an empty std::function. So, the lambda captures an empty copy of factorial. When the lambda runs and tries to call factorial(n - 1), it calls that empty copy. Calling an empty std::function throws std::bad_function_call.
        */
        return (n <= 1) ? 1 : n * factorial(n - 1);
    };
    cout << factorial(5) << endl;
    return 0;
};
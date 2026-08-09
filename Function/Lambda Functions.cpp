/*
    Lambda Functions
        A lambda is a small, unnamed function that you can write inline where you need it.
        Think of it like writing a quick helper function right where you use it, instead of creating a separate named function.
*/

#include <bits/stdc++.h>
#include <functional> /* accessing function */
using namespace std;

int main() {
    function<int(int, int)>add = [](int a, int b) {
        return a + b;
    }; // `auto` → compiler figures out the return type of function.
    cout << add(3, 5) << endl;

    /* Capturing global variables access - read/write */
    int var = 100;
    auto threeSum = [=](int a, int b) {
        /*
            [&] capture all outer variables by reference (like nonlocal and gloabl)
            [=] capture all outer variables by value (copy, can't modify)
            [&x] capture only x by reference
            [x] capture only x by value
        */
        return var + (a + b);
    };
    cout << threeSum(10, 20) << endl;

    /* Mixed captures with explicit return type */
    int x = 10, y = 20, z = 30;
    function<int()>mixed = [=, &x]() -> int {
        x = 999;
        return x + y + z;
    };
    cout << mixed() << endl;

    /* Higher Order Functions */
    vector<int> nums = {1, 2, 3, 4, 5};
    
    /* Custom sorting using lambda function */
    sort(nums.begin(), nums.end(), [](int a, int b) { return a < b; }); // Ascending
    sort(nums.begin(), nums.end(), [](int a, int b) { return a > b; }); // Descending
    return 0;
};
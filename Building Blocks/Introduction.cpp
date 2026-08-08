/*
    Programmatic Features of C++
        • Object Oriented Programming 
        • Memory Management
        • Programming Language behavour
            Mid Level → High level (functions and classes) and Low level (memory management - pointers)
            Static Type → Compile time data type specification       
*/

// Header File inclusion statment
#include <iostream> // cin, cout, cerr, clog, endl
#include <vector>
#include <algorithm> 

#include <bits/stdc++.h> /* bits/stdc++.h is a non-standard, implementation-specific header file provided by the GNU C++ Compiler (g++). It was designed to save time during competitive programming or quick prototyping so you don't have to type #include <vector>, #include <algorithm>, #include <iostream>, etc., individually.*/

/*
    Think of the std namespace as a massive, organized warehouse full of tools. iostream is one specific tool inside that warehouse (vector, algorithms...).
        • If you want to use that tool, you can't just grab it from the floor of your program (global namespace) because it's locked inside the warehouse.
        • You have to either walk into the warehouse (prefix with std::) or bring the tool out (import it).
    
    Purpose → There are lot of functions with the same name in different header files, if you want to use them properly you have to use the namespaces since those functions via header files are classified in different namespaces.
*/
using namespace std; // NOTE: not recommended for production level code

// The starting point of execution → Called automatically
int main() {
    int total = 10;
    std::cout << total << std::endl;

    // Static array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << count(arr, arr + 5, 3) << endl; // if any variable name same as a built-in function then you can use std::function()

    // Dynamic array
    vector<int> arr(5); // vector of size 5 all initialied with 0
    vector<int> lst; // The default size is 0
    vector<int> vec = {1, 2, 3, 4, 5};
    /*
        cout << sizeof(arr) → 24 << lst.size(arr) → 5
        A std::vector object is not the array of integers itself. Instead, it is a structure (object) that contains just three pointers (or pointers + size + capacity variables) to manage the actual data:
            - Pointer to the start of the data (on the heap).
            - Pointer to the end of the data.
            - Pointer to the end of capacity (or just the capacity size).
        → So, sizeof(arr) is telling you: "The vector control block on the stack takes up 24 bytes of memory." This size never changes, regardless of how many integers you add to the vector.
    */

    // Input → use of cout, cin, clog and cerr.
    int age;
    cout << "Enter your age: ";
    cin >> age;
    clog << "Taken the age input." << endl; // For logging the flow of program.

    if(age < 18) {
        cerr << "Your age is below 18. You are not eligible for driving licence" << endl; // f any condition of the program fails, and we need to print any error message in the code, cerr is very helpful.
    } else {
        cout << "Congrulation you can drive" << endl;
    }
    clog << "Driving verification completed" << flush; 
    /* 
        • You explicitly tell it to flush using std::flush or std::endl to print the buffer and close the strem. Used after the execution of function or an entire code
        • If you are writing a long-running program that logs thousands of events, you care about performance. clog waits to fill the buffer before printing, making the program run faster.
    */

    return 0; // main functions return statement is optional.
};
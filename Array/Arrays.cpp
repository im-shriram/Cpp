#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Initializing size is optional */
    int arr[] = {1, 2, 3, 4, 5};

    /* Elements initialized with zeros */
    int numbers[3];
    cout << numbers[0] << endl;
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    /* Accessing array elements (2 ways) → arr[n] = *(arr + n) */
    cout << arr[3] << endl; 
    cout << 3[arr] << endl;

    /* Array with Empty Elements */
    int empty_arr[5] = {3, 5, 9}; // The remaining values initialized to zeros
    cout << empty_arr[4] << endl;

    /* Finding size of an array → There is'nt any built-in function to find the size/length of an array */
    int arr_length = (int)(sizeof(arr) / sizeof(arr[0]));
    cout << arr_length << endl;
    
    vector<int>array(5);
    cout << array.size() << endl;

    /* 
        NOTE → Dynamically allocated arrays or pointers cannot be utilized with the sizeof() operator. It is only applicable to statically declared arrays. 
    */
    return 0;
}
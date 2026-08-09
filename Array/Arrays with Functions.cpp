/*
    Methods to Passing an Array to Function in C++
      There are several methods that we can use to pass an array to function in C++. Some main methods are as follows:
        1. Passing Array as a Pointer
        2. Passing array as a Reference
        3. Passing as a Sized Array
        4. Passing as an Unsized Array
*/

#include <bits/stdc++.h>
using namespace std;

/* Passing Array as a Pointer */
float average(int *arr, int length) {
    /* need of end along with pointer → arr is just a pointer — it only knows the starting address of the array. It has no idea where the array ends */
    double arr_avg = 0; // `signed double` is not approprate → signed and unsigned are only meant for integer types.
    for (int i = 0; i < length; i++) arr_avg += arr[i];
    /*
        for each loop with pointers?
        → Range-based for loop needs to know both start AND end to work. More precisly, the array which is being used is not created in this function scope so this function does not know the start and end of this array.
        → for - each loos on a perticular array is only valid in the scope where that perticular array initialized.
    */

    // Since you have the reference of original array, you can also update the values of it.
    return arr_avg / length;
};

/*
    Passing Array as a Reference
    "Pointer Decay" →
        void myFunc(int* arr) {    
            // array "decayed" into a pointer → gives 8 (pointer size), NOT 20 (array size)
            sizeof(arr);
        }

        void myFunc(int (&arr)[5]) {   
            // & means reference to the ACTUAL array → gives 20 (correct array size!)
            sizeof(arr);               
        }

    Note → The size must be hardcoded in the function signature. You will only use this approach if the array size if flexible else `pass by pointer`
*/
float standard_deviation(int (&arr)[5]) {
    float mean = 0;
    for (auto it : arr) mean += it;
    mean /= (sizeof(arr) / sizeof(arr[0]));
    cout << "mean - " << mean << endl;

    float variance = 0;
    for (auto it : arr) variance += ((it - mean) * (it - mean));
    variance /= (sizeof(arr) / sizeof(arr[0]));
    cout << "variance - " << variance << endl;

    return sqrt(variance);
};

/* Passing as a Sized Array to Function */
void show(int arr[5]) {
    cout << "Elements in the array: ";
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << endl;
};

/*
    Passing as an Unsized Array
        In C++, passing as an unsized array to a function is similar to passing as a sized array. We can pass an unsized array to a function by avoiding the size in the parameter declaration.
*/
void print(int arr[], int size /*`size` is maindatory*/) {
    cout << "Unsized Array elements are: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
};

int main() {
    int arr[] = {1, 3, 5, 7};

    cout << average(arr, 4) << endl; // Since arr (name of an array) itself holds the address of 1st member of an array.
    cout << "Compairing array addresses → " << arr << ' ' << &arr << endl; // Both are same

    int array[] = {1, 3, 5, 7, 9};
    cout << "std - " << standard_deviation(array) << endl;

    show(array);
    print(array, 5);

    return 0;
};

/*
    all these function parameters are same (arr is pointer in all the cases). [5] gets ignored by compiler, that means you always needs to pass the size along with array decalration even with reference passing.
        void print(int arr[5]) { ... }
        void print(int arr[]) { ... }
        void print(int* arr) { ... }
*/
#include <bits/stdc++.h>
using namespace std;

// Function to print a 2D array
void print2DArray(int arr[2][3]){
    /* note → the number of columns must be specified, while the number of rows can be omitted → void print2DArray(int arr[][3], int rows) */
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
};

int sizeOf(int (&arr)[][3]) {
    /* 
        note → sizeof only works with arrays passed by reference 
            func(int arr[a][b])
            func(int arr[][b])
            func(int *arr)
        `sizeof(arr)` does not work with above cases even if you pass the number of rows and columns 
    */
    return sizeof(arr[0]) / sizeof(arr[0][0]) * 2;
    // Another way sizeof(arr) / sizeof(arr[0][0])
};

int main(){
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << matrix << endl;
    cout << matrix[0] << endl;
    cout << matrix[0][0] << endl;

    cout << "2D Array Elements:" << endl;
    print2DArray(matrix); // Passing a 2D array

    cout << sizeOf(matrix);
    return 0;
};
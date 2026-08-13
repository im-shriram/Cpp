/* Vectors store elements in contiguous memory locations and automatically allocate more memory when required. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* vector creation */
    vector<int>arr_1;
    cout << "size of empty vector → " << arr_1.size() << endl;

    vector<int>arr_2(5); /* all elements initialized with zero */
    for(vector<int>::iterator i = arr_2.begin(); i != arr_2.end(); i++) {
        cout << *i << ' ';
    }; cout << endl;

    vector<int>arr_3(5, 10); /* all elements initialized with constant 10 */
    for(vector<int>::iterator i = arr_3.begin(); i != arr_3.end(); i++) {
        cout << *i << ' ';
    }; cout << endl;

    vector<int>arr_4 = {1, 2, 3, 4, 5};
    cout << "array size → " << arr_4.size() << endl;
    
    /* inserting elements */
    arr_4.push_back(6); /* size gets doubled and then shrinked till actual elements */
    cout << "array size after inserting an element → " << arr_4.size() << endl;

    arr_4.insert(arr_4.begin() + 3, 100); /* the position must be pointer to that location and the position should below arr.end() pointer */
    for(vector<int>::iterator i = arr_4.begin(); i != arr_4.end(); i++) {
        cout << *i << ' ';
    }; cout << endl;

    /* emplace → insert and emplace_back → push_back are slightly faster methods */

    /* deleting element */
    arr_4.pop_back(); /* deleting last element */
    vector<int>::iterator idx = find(arr_4.begin(), arr_4.end(), 3); /* finding 3 from start to end of array */
    if(idx != arr_4.end()) {
        cout << "index where 3 present → " << *idx << endl;
        arr_4.erase(idx); /* delete an element from specified index as pointer */
    };
    for(vector<int>::iterator i = arr_4.begin(); i != arr_4.end(); i++) {
        cout << *i << ' ';
    }; cout << endl;

    /* when vectors dynamically expands (doubles) there size, the total contigious blocks allocated to that array returned by capacity method */
    cout << "capacity of array → " << arr_4.capacity() << endl;
    arr_4.shrink_to_fit();
    cout << "capacity of array after `shrink_to_fit` → " << arr_4.capacity() << endl;

    /* clear → removes all the element */
    arr_4.clear();
    if(arr_4.empty()) {
        cout << "the array is empty" << endl;
    };

    return 0;
}
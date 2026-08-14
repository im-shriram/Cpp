/*
    multimap is an associative data structure that stores key-value pairs which may or may not be duplicate in a key sorted order.   
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* creating multimap */
    multimap<int, string> mmp {
        {1, "john"},
        {1, "david"},
        {2, "dexter"},
        {2, "sam"},
        {3, "marcus"}
    };

    /* size of map → consider duplicate keys as different entity */
    cout << "size of multimap → " << mmp.size() << endl;

    /* iterating over multimap */
    cout << "iterating over multimap → " << endl;
    for(multimap<int, string>::iterator it = mmp.begin(); it != mmp.end(); it++) {
        cout << (*it).first << " → " << (*it).second << endl;
    }; cout << endl;

    /* accessing elements */
    cout << "iterating over values corrosponding to key = 1 → " << endl;
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> it = mmp.equal_range(1); /* if key not present then `it.first` points to next greater key but it does not access its values, if not oven that then it points to `mmp.end()` */
    for(auto idx = it.first; idx != it.second; ++idx) {
        cout << idx->first << ' ' << idx-> second << endl;   
    }; cout << endl;

    /* modifying elements → direct modification is not possible, first erasing all occurences then insert for the same key */
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> idx = mmp.equal_range(1);
    for(auto it = idx.first; it != idx.second; ++it) {
        mmp.erase(it); /* erasing all the occurances of that perticular key component */
        break; /* segmentation fault if you try to erase that key component again */
    }; mmp.emplace(1, "monty"); /* inserting a new key componenet in place of previous one */

    /* removing all elements*/
    if (mmp.empty() == false) {
        mmp.clear();
        cout << "size after removing all components from multimap → " << mmp.size() << endl;
    } else {
        cout << "multimap is already empty" << endl;
    };

    return 0;
}
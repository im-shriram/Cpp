/*
    maps are the associative containers that store `sorted - based on key` key-value pair, in which each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* map initialization */
    map<int, string>mp = {
        {1, "john"},
        {2, "david"},
        {3, "dexter"},
        {4, "sam"},
        {5, "marcus"}
    }; /* `=` sign is optional */

    /* iterating over map */
    for(map<int, string>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << "key → " << (*it).first << " value → " << (*it).second << endl;
    }; cout << endl;

    /* accessing, modifying and inserting values → inserting new value with existing key → does not override but throws an error */
    cout << "key at 2 → " << mp[2] << ' ' << mp.at(2) << endl; /* pass the key value */
    mp[6] = "monty"; /* adding new key-value pair */
    mp[3] = "hero"; /* modifying the value */
    mp.at(3) = "hero";

    auto index = mp.insert({7, "page"}); /* insert method → for adding a key-value pair and returns the pointer to that inserted location → emplace is more faster */

    for(map<int, string>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << "key → " << (*it).first << " value → " << (*it).second << endl;
    }; cout << endl;

    /* removing pairs */
    mp.erase(7); /* pass the key to this function */

    /* size of map */
    cout << "size of map (number of key-value pairs) → " << mp.size() << endl;

    if(mp.empty() /* return true if map is empty */ == false) {
        mp.clear(); /* removes everyting from map */
    }; cout << "size after removing everything → " << mp.size() << endl;

    return 0;
};
/*
    set represents the fundamental data structure that arranges the unique elements in some sorting order and stores them.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* creating a set */
    set<int>st = {5, 4, 3, 2, 1};
    set<int>direct_set {5, 4, 3, 2, 1};

    /* iterating over set → stored in ascending order */
    cout << "set elements → ";
    for(set<int>::iterator it = st.begin(); it != st.end(); it++) {
        cout << *it << ' ';
    }; cout << endl;

    /* inserting elements */
    st.insert(10); /* set reorders itself whenever new element inserted → but the time complexity O(log(n)) because set implemented in binary search trees */
    st.emplace(11);

    /* accessing elements */
    set<int>::iterator it = st.begin();
    cout << "element at third position → " << *next(it, 2) << endl; /* the begin pointer moves 2 position further and return that element */

    /* finding element */
    it = st.find(3);
    if(it != st.end()) {
        cout << "first occurence of 3 in set → " << *it << endl;
    } else cout << "element is not present in set" << endl;

    /* deleting element */
    st.erase(2); /* removes all occurences of 2 */
    st.erase(next(it = st.begin(), 4)); /* erase element at 5th position */

    cout << "set elements after removing some elements → ";
    for(set<int>::iterator it = st.begin(); it != st.end(); it++) {
        cout << *it << ' ';
    }; cout << endl;

    return 0;
};
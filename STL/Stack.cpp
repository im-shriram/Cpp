/*
    stack is a linear data structure that performs its operations on the Last In First Out (LIFO) principle.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>st;

    /* inserting elements */
    st.push(1);
    st.emplace(2);
    st.push(3);

    cout << "size of stack → " << st.size() << endl;

    /* iterating over stack */
    cout << "printing stack elements (LIFO) → ";
    while(!st.empty() /* returns true if stack is empty */) {
        cout << st.top() << ' '; /* returns the last inserted element */
        st.pop(); /* removes the last inserted element */
    }; cout << endl;

    /* implement queue from stack */

    return 0;
}
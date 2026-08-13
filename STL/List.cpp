/*
    std::list is a sequence container that enables the non-contiguous storage of elements. it is implemented as a "doubly linked list", where every element contains the address of both the next and previous list elements.
*/

#include <bits/stdc++.h>
using namespace std;

void iter_list(list<int>lst, const string& message = "") {
    cout << message;
    for(auto it: lst) {
        cout << it << ' ';
    }; cout << endl;

    return ;
};

int main() {
    /* initializing a list */
    list<int>lst = {1, 2, 3, 4, 5};
    list<int>direct_list {1, 2, 3, 4, 5};
    list<int>constant_list(5, 100); /* list with all numbers assigned with 100 */

    iter_list(lst, "iterating over a list → ");

    /* inserting elements */
    lst.push_back(6); /* pushing at the end of linked list */
    lst.emplace_back(7); /* faster than push_back */

    lst.push_front(0); /* pushing at the head node */
    lst.emplace_front(-1);

    list<int>::iterator it = lst.begin();
    /* 
        in-order to insert an element at a perticular location, you have to increment your iterator incremently (i++) because unlike arrays you cannot jump from one place to nth place since each node has an address of next and previous node so (i + n) or even (i + 1) and i += 1 does not work with lists 
    */
    lst.insert(++(++it) /* 3rd position */, 300);
    iter_list(lst, "list after pushing and inserting some elements → ");
    
    /* removing element */
    cout << *it << endl;
    lst.erase(--it /* even after inserting an element at a specific location the iterator is pointing to the location at old position and not the inserted one → --it to reach at inserted element location */);

    lst.pop_front();
    lst.pop_back();
    
    lst.remove(6); /* pass the value to remove all the occurances of that value */
    iter_list(lst, "list after poping and erasing some elements → ");

    /* some more common list methods */
    cout << "size of list → " << lst.size() << endl;
    if(!lst.empty()) {
        cout << "list is not empty" << endl;
    };
    lst.sort(); /* sorting is ascending order → implement this from scratch */
    lst.reverse(); /* reverse the list */
    lst.clear(); /* remove all the nodes */

    iter_list(lst);

    return 0;
};
/*
    Smart pointers are classes that wrap raw pointers. They automatically delete the object when the smart pointer goes out of scope
*/
#include <bits/stdc++.h>
#include <memory> /* for using smart pointer class wrappers */
using namespace std;

int main() {
    /* unique pointer → only one unique_ptr can own the object at a time, you cannot copy it, only move it. */
    unique_ptr<int>unique_pointer = make_unique<int>(42);
    cout << "address of pointer → " << unique_pointer.get() << " value of pointer → " << *unique_pointer << endl;

    /* unique_ptr<int>new_unique_pointer = unique_pointer; → only one memborship, cannot copy */
    unique_ptr<int>new_unique_pointer = move(unique_pointer); /* unique_pointer → deleted and assigned to nullptr */
    cout << "address of new pointer → " << new_unique_pointer.get() << endl;
    cout << "address of old pointer → " << unique_pointer.get() << endl; /* address → 0 */

    /* shared pointer → Multiple shared_ptrs can point to the same object. The object is deleted only when the last shared_ptr pointing to it is destroyed or reset. */
    auto shared_pointer = make_shared<int>(42);
    auto new_shared_pointer = shared_pointer;
    cout << "address of shared pointers → " << shared_pointer.get() << ' ' << new_shared_pointer.get() << endl;
    cout << "number of shared references → " << shared_pointer.use_count() << endl;
    
    /* resetting / deleting one pointers memory could not hamper others */
    shared_pointer.reset(); /* `shared_pointer` becomes nullptr */
    cout << "value of new shared pointer after deleting shared pointer → " << *new_shared_pointer << endl;
    cout << "number of shared references → " << new_shared_pointer.use_count() << endl;
    /* with normal pointers → deleting one occurence also deletes the rest of the occurences */

    /* remaining → weak pointers */
    return 0;
};
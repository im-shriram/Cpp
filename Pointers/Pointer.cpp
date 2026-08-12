#include <bits/stdc++.h>
using namespace std;

int* getPointer() {
    int var = 10;
    int* pointer = &var;
    return pointer; /* function delete this local pointer → the returned pointer is dangling */
};

int main() {
    /* null pointer → pointer is pointing to nothing (address → 0) */
    int* null_pointer = nullptr; /* these pointers are used to indicate invalid reference safety */
    cout << "address of null pointer → " << null_pointer << endl;
    if(null_pointer != nullptr) {
        cout << *null_pointer << endl; /* dereferencing is not allowed */
    } else {
        cout << "segmentation fault" << endl;
    }; /*segmentation fault → a program tries to access a memory location it is not allowed to access or tries to access memory in an invalid way */

    /* void pointer → a generic pointer that holds the reference of any data type */
    int var = 100;
    void* void_pointer = &var; /* void pointer is pointing to stack memory and not heap → you cannot delete it */
    cout << *(static_cast<int*>(void_pointer)) << endl; /* need to type cast it before dereferencing it */
    cout << "reference before and after type-casting void pointer → " << void_pointer << ' ' << static_cast<int*>(void_pointer) << endl; /* both are same */
    /*
        delete void_pointer; → deleting a void* pointer is undefined behavior in C++ because the compiler does not know the size or type of the object being pointed to, so it cannot correctly call the destructor or calculate how much memory to free.
    */
    void_pointer = nullptr;

    /* wild pointer → randomly pointing to any memory location (dangerous → could be pointing to read only location) */
    int* wild_pointer;
    /*cout << "wild pointer data → " << *wild_pointer << endl; → segmentation fault depending on the compiler */
    /* *wild_pointer = 100; → segmentation fault */

    /* dangling pointer */
    int* dangling_pointer = new int(100); /* pointer is pointing to heap memory */
    cout << "before dangling pointer → " << dangling_pointer << endl;
    delete dangling_pointer; /* after deleting this pointer → the pointer becomes dangling */
    
    /*
        Why Dangling Pointers Are Dangerous?
        → When you delete a pointer, the memory / data this pointer holds get deleted and not the pointer, that means this dangling pointer still holds that same address and the problem is that same address could be assigned to someone else pointer. In future if you change the value of dangling pointer the value for an actual pointer also gets changed.
    */

    cout << "after dangling pointer → " << dangling_pointer << endl;
    cout << "data holded by dangling pointer → " << *dangling_pointer << endl;
    dangling_pointer = nullptr;

    int *function_pointer = getPointer(); /* this `function_pointer becomes a dangling pointer → always dont return by reference */
    function_pointer = nullptr;

    return 0;
};
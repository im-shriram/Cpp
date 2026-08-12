#include <bits/stdc++.h>
using namespace std;

int main() {
    /* difference between string creation from character arrays vs string class */
    char c[] = "hello world";
    char* character_pointer = c; /* this is possible → since the datatype is character array, "hello world" split into characters and pointer `ptr` is pointing to the first character of a string */
    cout << "single character → " << *character_pointer << " entire string → " << character_pointer << endl;

    string s = "hello world";
    string* string_pointer = &s; /* unlike character arrays, string does not split the characters into character arrays insted it acts like it holds the entire string into one container, thats why you cannot store string reference to character pointer */
    cout << "address of string → " << string_pointer << " address of first character → " << static_cast<void*>(&s[0]) << ' ' << (void*)&s[0] << endl; /* the address of string is different than the address of first character */

    const char* string_array[] = {"john", "dexter", "sam", "page"}; /* const is must */
    for(const char* itr: string_array) {
        cout << itr << ' ';
    }; cout << endl;
    cout << "variations → " << string_array << ' ' << string_array[0] << ' ' << (string_array + 1) << ' ' << *(string_array + 1) << ' ' << &string_array << endl;

    return 0;
};
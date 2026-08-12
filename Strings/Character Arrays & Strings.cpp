#include <bits/stdc++.h>
using namespace std;

int main() {
    /* string creation */
    char a[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "string from character array → " << a << endl;
    cout << "printing character → " << a[3] << endl;
    cout << "pointer → " << &(a[3]) << endl;
    string b = string(a); /* string from character array → stops when it will get \0 null character */
    /*
        the << operator has different overloads based on the type of the argument:
        • char* (pointer to char) → treated as a C-string. Prints characters until \0.
        • char (single character) → treated as a single character. prints just that one character.
        • unsigned char* or signed char* → also treated as a C-string.

        → the above assignment of character array as list of characters does not explicitely adds \0 (null character) at the end so if you try to print the pointer to the string `&a` or a pointer to the specific character `&a[2]` it prints from that character until it reaches to the \0 (null character).
    */

    char c[] = "aeiou";
    string d = "aeiou";
    cout << "all strings → " << c << ' ' << d << endl;
    /* these assignments for strings are safer than previous because they implicitely adds the \0 (null character) at the end */

    char e[] = "aeiou"; /* char* e = "aeiou" is invalid */
    char* string_pointer = e; /* do not specify &e */
    cout << "pointer → " << string_pointer << " pointer + 1 → " << *(string_pointer + 1) << endl; 
    /* do not stop printing until it reaches \0 null character. apply pointer arethamatic and not arr[0] also dereferencing operator prints element and not entire string until \0 */

    /* more ways*/
    string f("aeiou");
    string g(5, 'a');
    cout << "more ways of string initialization → " << f << ' ' << g << endl;
    cout << "string concatination → " << (f + " " + g) << endl;

    /* accessing characters */
    cout << "element at 3rd position → " << f.at(3) << endl;
    cout << "starting element → " << f.front() << " ending element → " << f.back() << endl; /* ending element is not \0 */

    /* string iterator */
    cout << "begin → " << *(f.begin()) << " end → " << *(f.end()) << endl; /* end is pointing at arr_len + 1 means \0 character */
    for(string::iterator c = f.begin(); c != f.end(); c++) {
        cout << *c << ' ';
    }; cout << endl;

    for(char c: f) {
        cout << c << ' ';
    }; cout << endl;

    /* modifying strings → unlike python, strings are mutable in c++. both character array-string and normal strings are mutable */
    f[0] = 'b';
    f.at(0) = 'c';
    cout << "string after modification → " << f << endl;

    return 0;
};

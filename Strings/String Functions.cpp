#include <bits/stdc++.h>
using namespace std;

int main() {
    /* string input */
    string str_1; 
    string str_2;
    cout << "string input 1 → "; cin >> str_1;
    cout << "string input 2 → "; cin >> str_2;
    cout << str_1 << ' ' << str_2 << endl;

    /* append → inplace */
    string appended_string_1 = (str_1 + str_2);
    string appended_string_2 = str_1.append(str_2); /* append is an inplace method and return a reference to modified string → str_1 = str_1 + str_2 */
    cout << "appended string → " << appended_string_1 << ' ' << appended_string_2 << endl;
    str_1 = "hello";

    /* replace → inplace */
    string replaced_string = str_1.replace(1, 4, "ydrabad");
    cout << "replaced string → " << replaced_string << endl;
    str_1 = "hello";

    /* length of string */
    cout << "string length → " << str_1.length() << ' ' << str_2.size() << endl;
    return 0;
}
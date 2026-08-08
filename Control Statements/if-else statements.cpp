/*
    The C++ if-else-if-else ladder statement executes one condition from multiple statements. Multiple cases can be handled through an if-else if conditional sequence in this structure.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 18) {
        cout << "You are underage" << endl;
    } else if(age >= 18 && age <= 60) {
        cout << "You are eligible to drive" << endl;

        /* Nested if-else */
        if(age <= 30) {
            cout << "Your speed limit will be 80 km/hr" << endl;
        } else if(age > 30 && age <=50) {
            cout << "Your speed limit will be 60 km/hr" << endl;
        } else {
            cout << "Your speed limit will be 40 km/hr" << endl;
        }
    } else {
        cout << "You are overaged" << endl;
    }

    return 0;
};
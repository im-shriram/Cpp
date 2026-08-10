/*
    A programming language in which everything is defined as an object is called pure object oriented programming language → Python
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name; // default - name (string) - null
        int age; // default - age (int) - garbage value
        int* variable = nullptr; // always do this

    public:
        Student(string n, int a): name(n), age(a) {}; // this syntex is recommended than initialization inside constructor.
        /*
            const int variable → value will not get modified after creation
            int& variable → you could have accessed read-only memory ( → nullptr)
        */

        void display() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        };
};

int main() {
    Student studname("John", 24); 
    /* 
        default constructor → Student student;
        parameterized constructor → Student student(); → If the constructor is default and you wrote `Student student()` then this is the call for parameterized constructor not the default one.
    */

    /*
        const Student student()
            const object → can only call → const functions
            normal object → can call → both const and non-const functions
    */
    studname.display();
    return 0;
};
/*
    access modifier for class name in C++ → https://stackoverflow.com/questions/46411484/access-modifier-for-class-name-in-c
*/

#include <bits/stdc++.h>
using namespace std;

class Parent {
    private:
        long mobile_no;
        string password;

    protected:
        char division;
        int rooms;
        string subjects[3] = {"maths", "science", "english"};

    public:
        string name;
        int age;

        Parent(string name, int age, long mobile_no, string password, char division, int rooms) : name(name), age(age), mobile_no(mobile_no), password(password), division(division), rooms(rooms) {
            cout << "parent constructor called" << endl;
        };

        void display(int temp) {
            cout << "student name → " << this -> name << endl;
        };
};

class Child : public Parent {
    public:
        Child(string name, int age, long mobile_no, string password, char division, int rooms) : Parent(name, age, mobile_no, password, division, rooms) {
            /* parent constructor is parameterized */
            cout << "child constructor called" << endl;
        };

        /* this is not method overriding → since both function names are same the difference is just extra parameter, so if you try to call base class method using child object the compiler will throw an error → `p.Parent::display(90)` */
        void display() {
            cout << "student age → " << Parent::age << endl;
        };
};

int main() {
    Child p = Child("sam", 21, 1234567890, "sam_21", 'A', 100);
    p.display();

    /* invoking parent display like `p.display(90)` will throw an error */
    p.Parent::display(90); /* you need to call parent method via child object */

    return 0;
};
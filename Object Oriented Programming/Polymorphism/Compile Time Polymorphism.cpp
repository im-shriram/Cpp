/*
    Types of Compile Time Polymorphism
    • Function Overloading
    • Operator Overloading
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        string name;
        int age;

    public:
        Student(string name, int age) : name(name), age(age) {
            cout << "calling student constructor" << endl;
        };
        
        /* method overloading → difference in number and/or type of arguments */
        void display(const Student& obj) const {
            cout << "printing student reference object values : name → " << obj.name << " age → " << obj.age << endl;
        };

        void display(const Student* obj) const {
            cout << "printing student pointer object values : name → " << obj->name << " age → " << obj->age << endl;
        };

        /* operator overloading → changing the behavours of operators (performing operations between objects) */
        bool operator + (const Student& obj) const {
            if(this->age == obj.age) {
                return true;
            } else {
                return false;
            }
        };
};

int main() {
    Student* sam = new Student("sam", 21);
    Student* dexter = new Student("dexter", 23);

    sam->display(*sam); /* calling first display */
    sam->display(sam); /* calling second display */

    cout << boolalpha << (*sam) + (*dexter) << endl;
    return 0;
}
/*
    Types of Destructors
        1. Default Destructor → When all the data members are static    
        2. User Defined Destructor → The default destructor is perfect unless we have dynamically allocated memory or pointers in class. In such cases, a custom destructor is needed to release the memory and prevent memory leaks.
*/

# include <iostream>
using namespace std;

class Student {
    private:
        string *name;

    public:
        Student(const string studentName) {
            name = new string(studentName);
            cout << "Constructor: Memory allocated for name" << endl;
        }

        ~Student() {
            delete name;
            cout << "Destructor: Memory deallocated for name" << endl;
        }

        void display() {
            cout << "Student Name: " << *name << endl;
        }
};

int main() { 
    Student s1("David");
    s1.display();
    /* `s1.~Student()` explicitely calling a destructor → automatically get called when main function returns. Doing it manually causes double free : invalid pointer → Aborted`*/

    Student* s2 = new Student("Sam");
    s2->display();
    delete s2; /* the objects created in a heap memory, the destructor of these classes will called if you explicitely delete this object */

    return 0;
};
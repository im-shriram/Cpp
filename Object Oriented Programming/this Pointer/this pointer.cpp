#include <bits/stdc++.h>
using namespace std;

class Teacher;
class Student;
void classTeacher (Teacher *obj);

class Student {
    private:
        string passward;
    
    public:
        string name;

        Student(string name, string passward) {
            this -> name = name;
            this -> passward = passward;
        };

        /* Modifying data members using setter and returning object itself */
        Student* setter(string name, string passward) {
            this -> name = name;
            this -> passward = passward;

            return this;
        };

        /* Printing the values using this pointer */
        void show() {
            cout << this -> name << endl;
            cout << this -> passward << endl;
        }
        
        /* Passing the Current Object */
        friend void classTeacher (Teacher *obj);

        /* Destroying `this` */
        void drop() {
            delete this;
            cout << "this deleted successfully" << endl;
        }
};

class Teacher {
    public:
        string name;
        string subject;

        Teacher(string name, string subject) {
            this -> name = name;
            this -> subject = subject;
        }

        void details() {
            classTeacher(this);
        }      
};

void classTeacher (Teacher *obj) {
    cout << obj -> name << " " << obj -> subject;
};

int main() {
    Student *dexter = new Student("dexter", "1234");

    dexter -> setter("dexter morgan", "5678") -> show(); /* method chaining */
    dexter -> drop();

    Teacher *Stacy = new Teacher("Stacy", "English");
    Stacy -> details();
    
    return 0;
}
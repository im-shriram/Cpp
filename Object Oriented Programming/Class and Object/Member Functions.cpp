/*
    Types of Member Function →
        • Simple Methods
        • Static Methods
        • Inline Methods
        • Constant Methods
        • Friend Methods
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    /* all the member function of class by-default requested as inline */
    private:
        string passward;
        int phone_no;

        inline static int total_students = 0; // only static variables could be inline
    
    public:
        string name;
        int roll_no;

        Student(string name, int roll_no, string passward, int phone_no): name(name), roll_no(roll_no), passward(passward), phone_no(phone_no) {
            incrementTotalStudent();
        };

        void showDetails() {
            cout << name << endl;
            cout << roll_no << endl;
        };

        static void incrementTotalStudent() {
            /* static functions should only access and modify static data members */
            total_students++;
        };

        void showStaticVars() const {
            /* constant functions are not allowed to modify the values of this class data members*/
            cout << total_students << endl;
        };

        inline void changePassward(string passward) {
            /* inline methods are not stored in a memory insted they get copy pasted whereever they get used → inline is a request and not a command */
            passward = passward;
        };

        /* Friend Function → access all the data members and member funtions through object (must) */
        friend void reveal(Student &obj);
};

void reveal(Student &obj) {
    cout << "Passward: " << obj.passward << endl;
    cout << "Phone No: " << obj.phone_no << endl;
    return ;
};

int main() {
    Student *dexter = new Student(
        "Dexter", 45, "-dexter-", 1234 
    );
    dexter -> showDetails();
    dexter -> showStaticVars();
    dexter -> changePassward("+dexter+");

    // friend function called without object.
    reveal(*dexter);

    return 0;
};
/*
    1. Class: A class is the DNA of object. It is made up of `data members → (variables)` and `member functions → (methods)` that defines the characteristics of it.

    2. Object: In general, Any entity that has a state and behaviour is known as an object. Programmatically, An instance of class is called an object.
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    /*
        The default access specifier in class is `private` → That's actually the only real difference between class and struct in C++!
            class  → private
            struct → public
    */
    long int phone_no;

    /*
        Access Specifiers: These are the keywords (such as public, private, and protected) that are used to control the accessibility of data members and methods.
            1. Public: In C++, public data members may be accessed from outside the class using the dot (.) operator.
            2. Private: Private data members may only be accessed within the class in C++. They cannot be accessed directly from outside the class.
            3. Protected: A protected member variable of a class acts as a private member. It can be accessed inside the class and by derived classes.
    */

    private:
        string passward;
        int birth_year;

    /* `protected` access specifier changes the access of its variable based on how this class gets inherited (public or private) → For this class it acts as a private member. */
    protected:
        string subject[3] = {"English", "History", "Geography"};
        string div;

    public:
        string name;
        string email;
        int roll_no;

    Student() {
        cout << "I'm default constructor" << endl;
    };

    Student(string s, string e, int r, string p, int b, long int f) : name(s), email(e), roll_no(r), passward(p), birth_year(b), phone_no(f) {
        cout << "I'm Parameterized Constructor";
    };

    /* Declaring the function and defining using :: (scope resolution operator) */
    void changePassward();

    /* This function is public since its below `public` defination */
    void displayData(Student obj) const {
        /* const → This function is not allowed to modify the values of data variables of this class*/
        cout << "Student Details" << endl;
        cout << "name - " << obj.name << endl;
        cout << "Roll No. - " << obj.roll_no << endl;
        cout << "Email - " << obj.email << endl;
    };
};

/* Defining the function */
void Student ::changePassward() {
    string current_passward;

    cout << "Varify yourself" << endl;
    cout << "Enter your passward: ";
    cin >> current_passward;

    if (current_passward == passward) {
        cout << "Varification Successfull" << endl;

        string new_passward;
        cout << "Enter new passward: ";
        cin >> new_passward;

        passward = new_passward;
        cout << "You passward changed successfully!";
    } else {
        cout << "Wrong Passward";
    };
};

int main() {
    /* Direct Initialization */
    Student sam("sam", "sam@gmail.com", 45, "1234", 2000, 12345);
    sam.displayData(sam);

    /* Assignment Style */
    Student dexter = Student("dexter", "dexter@gmail.com", 45, "1234", 2000, 12345);
    dexter.displayData(dexter);

    /* Uniform Initialization (C++11) */
    Student rock{"rock", "rock@gmail.com", 45, "1234", 2000, 12345}; // strict type checking → no implicit type conversion
    rock.displayData(rock);

    /* Heap (using new) */
    Student *emma = new Student("emma", "emma@gmail.com", 45, "1234", 2000, 12345);
    emma->displayData(*emma);

    /*
        In above ways of creating objects, default constructor cannot be executed.

        Can you call parameterized constructor AFTER object is created?
        → No — constructors can only be called once, at the time of object creation. But you can fake it using a few tricks:
    */

    Student gwen;                                                      // default constructor called
    gwen = Student("gwen", "gwen@gmail.com", 45, "1234", 2000, 12345); // creates new temp object and copies it - parameterized constructor called
    gwen.displayData(gwen);

    /* Creating multiple objects, array of abjects */
    Student harry, ash;
    Student students[] = {
        Student(),
        Student(),
        Student(),
    };

    // emma wants to change her passward
    emma->changePassward();

    return 0;
};
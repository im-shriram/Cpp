/*
    Instance variable → each object owns it
    Static variable → all objects share it
*/

#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll_no;

        /*
            From C++17 onwards, you CAN initialize inside the class using inline
            inline static int total_students = 0;
        */
        static int total_students; // Must define static variable OUTSIDE the class!
        inline static int total_classes = 0;
    
    Student(string name, int roll_no): name(name), roll_no(roll_no) {
        total_students++;
    }
    
    static void showDetails() {
        cout << "Total Students - " << total_students << endl; // static function → static variable
        // cout << name; - static function can't access instance vars!
    }
};

/*
    Why defination is not inside the class?
    Because a class can be included in multiple files:
        main.cpp     → includes Student.h
        utils.cpp    → includes Student.h
        database.cpp → includes Student.h
    
    If the definition was inside the class, 3 copies of totalStudents would be created — one in each file!
        main.cpp     → totalStudents (copy 1) 
        utils.cpp    → totalStudents (copy 2) 
        database.cpp → totalStudents (copy 3) 
    
    By defining outside (in one .cpp file), there's only ONE copy in memory — which is exactly what static means!
*/
int Student :: total_students = 0;

int main() {
    Student *dexter = new Student("dexter", 15);
    Student *sam = new Student("Sam", 32);

    // Calling static method using objects
    dexter -> showDetails();
    sam -> showDetails();

    // Calling static method using class name itself
    Student :: showDetails();

    // You can also modify the value like this
    Student :: total_students += 1;
    Student :: showDetails();

    return 0;
};
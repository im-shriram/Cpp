/*
    The function name, return type, number of arguments, type of arguments if all of these are same then this is called method overriging
*/

# include <bits/stdc++.h>
using namespace std;

class First {
    public:
        virtual inline void display() {
            cout << "display function called → first" << endl;
        };

        void print(string a) {
            cout << "base → " << a << endl;
        };
};

class Second : public First {
    public:
        void display() {
            cout << "display function called → second" << endl;
        };

        void print(string a) { 
            cout << "derived → " << a << endl; 
        }; // method overriding → method inherited from based class
    
        void print(int a) {
            cout << a << endl;
        }; // method overloading → same class have same method but different data typed parameters 
};

int main() {
    Second obj;

    /* calling base class method using derived class object */
    obj.First::print("calling base class methods");

    /* derived class method */
    obj.print("calling derived class method");
    obj.Second::print("calling derived class method");
    obj.print(10);

    First* object = new Second;
    object->display();
    object->First::display();
    
    return 0;
};
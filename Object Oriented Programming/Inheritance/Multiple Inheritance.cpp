#include <bits/stdc++.h>
using namespace std;

class Father {
    private:
        int a, b;
    
    public:
        Father(int a, int b) : a(a), b(b) {
            cout << "Father constructor called" << endl;
        };

        void display() {
            cout << "addition of a and b → " << this->a + this->b << endl;
        };

        ~Father() {
            cout << "Father destructor called" << endl;
        }
};

class Mother {
    private:
        int a, b;
    
    public:
        Mother(int a, int b) : a(a), b(b) {
            cout << "Mother constructor called" << endl;
        };

        void display() {
            cout << "subtraction of a and b → " << this->a - this->b << endl;
        };

        ~Mother() {
            cout << "Mother destructor called" << endl;
        };
};

class Child : public Father, public Mother {
    private:
        int a, b;
    
    public:
        Child(int a, int b) : Father(a, b), Mother(a, b) {
            cout << "Child constructor called" << endl;
        };

        ~Child() {
            cout << "Child destructor called" << endl;
        };
};

int main() {
    Child *obj = new Child(20, 10); /* father → mother → child */

    /* calling obj->display will throw ambiguity error*/
    obj->Father::display();
    obj->Mother::display();
    
    delete obj; /* child → mother → father */
    return 0;
};
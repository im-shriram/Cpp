#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        virtual ~Base() = 0; /* pure virtual destructor */
};

Base :: ~Base() {
    cout << "Base destructor called\n";
};

class Derived : public Base {
    public:
        ~Derived() {
            cout << "Derived destructor called\n";
        };
};

int main() {
    Base *ptr = new Derived(); /* abstraction of derived class object through base class pointer → only possible with pointers */

    /* deleting the pointer calls the derived class destructor first then base class destructor */
    delete ptr;

    return 0;
}
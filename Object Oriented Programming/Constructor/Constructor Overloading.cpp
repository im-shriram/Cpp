/*
    when the object instance of the 'child class' is created, the constructor of the 'parent class' is executed first, followed by the constructor of the 'child class'. When the program terminates, the destructors are called in the reverse order.
*/

#include <bits/stdc++.h>
using namespace std;

class Animal {
    private:
        string name;
        string sound;
    
    public:
        /* default constructor */
        Animal() {
            cout << "This is default consturctor" << endl;
        };

        /* parameterized constructor */
        Animal(string name) {
            this -> name = name;
        };
        
        /* copy constructor */
        Animal(const Animal& obj) {
            /* object must pass with reference and const for not modifying the values of that object inplace */
            this -> name = obj.name; /* deep copy */
            this -> sound = obj.sound;
        };

        /* move constructor → This type of constructors are used to pass the resources from one class to other. Generally, from other class to current class */
        Animal(Animal&& obj) {
            this -> name = obj.name;
            this -> sound = obj.sound;
            
            /* since they are static modifying to empty string else nullptr*/
            obj.name = "";
            obj.sound = "";
        };

        void show() {
            if((name != "") || (sound != "")) {
                cout << "name → " << name << "  sound → " << sound << endl;
            } else {
                cout << "both are null" << endl;
            };
        };
};

int main() {
    Animal obj_1;
    Animal obj2("Dog");

    Animal obj3(obj2);
    obj3.show();

    Animal obj4 = move(obj3); /* we are moving the resources of object 3 to object 4 and distroying object 3 */
    obj4.show();
    obj3.show();
    return 0;
};
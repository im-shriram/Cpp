#include <bits/stdc++.h>
using namespace std;

class GrandParent {
    private:
        int a;
        int b;
    
    public:
        GrandParent(int a, int b) : a(a), b(b) {
            cout << "grand_parent constructor called" << endl;
        };

        void display() {
            cout << "grand_parent → " << a + b << endl;
        };
};

class Parent1 : public GrandParent {
    private:
        int a;
        int b;
    
    public:
        Parent1(int grandparent_a, int grandparent_b, int a, int b) : GrandParent(grandparent_a, grandparent_b), a(a), b(b) {
            cout << "parent_1 constructor called" << endl;
        };

        void display() {
            cout << "parent_1 → " << a + b << endl;
        };
};

class Parent2 : public GrandParent {
    private:
        int a;
        int b;
    
    public:
        Parent2(int grandparent_a, int grandparent_b, int a, int b) : GrandParent(grandparent_a, grandparent_b), a(a), b(b) {
            cout << "parent_2 constructor called" << endl;
        };

        void display() {
            cout << "parent_2 → " << a + b << endl;
        };
};

/*
    Both parent classes have called grand_parent constructor. This is completely valid since both parent classes want to have different grand_parent objects → Then if you want to call grand_parent display function then you need to choose which classe's display function you want to call (diamond problem). 
*/

class Child : public Parent1, public Parent2 {
    private:
        int a;
        int b;

    public:
        Child(
            int grand_parent_a,
            int grand_parent_b,
            int parent1_a, 
            int parent1_b, 
            int parent2_a,
            int parent2_b,
            int a, int b
        ) : Parent1(grand_parent_a, grand_parent_b, parent1_a, parent1_b), Parent2(grand_parent_a, grand_parent_b, parent2_a, parent2_b), a(a), b(b) {
            cout << "child constructor called" << endl;
        };

        void display() {
            cout << "child → " << a + b << endl;
        };
};

int main() {
    Child* obj = new Child(1, 2, 3, 4, 5, 6, 7, 8);
    
    /* calling child class function */
    obj->display();

    /* calling parent class function */
    obj->Parent1::display();
    obj->Parent2::display();

    /* calling grand_parent function using child object */
    static_cast<Parent1*>(obj)->GrandParent::display(); /* type-casting of objects from one class type to another is only possible if one class inherits from other or vice-versa */

    return 0;
};
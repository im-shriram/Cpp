#include <bits/stdc++.h>
using namespace std;

class Parent {
    virtual inline void display() = 0; /* virtual function only needs to get overrided in next inherited class → Friend has not overrided the display function */
};

class Child : public Parent {
    private:
        int age;

    public:
        Child(int age) : age(age) {
            cout << "child constructor called" << endl;
        };

        void display() {
            cout << "age → " << this->age << endl;
        };
};

class Friend : public Child {
    private:
        float weight;

    public:
        Friend(int age, float weight) : Child(age), weight(weight) {
            cout << "friend constructor called" << endl;
        };
};

int main() {
    Friend *obj = new Friend(21, 70);
    return 0;
};
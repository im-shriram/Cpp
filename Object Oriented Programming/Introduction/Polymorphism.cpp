/*
    Polymorphism       
        When one task is performed in different ways, i.e. known as `polymorphism`.
    
    Benifits:
        • Code Flexibility
        • Eliminates Code Duplication - "Provide a single interface to change multiple times based on requirement."
*/

#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        virtual void makeSound() const { cout << "Animal sound" << endl; } // The primary purpose of virtual functions is to support overriding in inheritance hierarchies.
};

class Dog : public Animal {
    public:
        void makeSound() const override { cout << "Bark" << endl; } // Method overriding
};

int main() {
    // Creating object dynamically
    Animal *animal = new Dog();
    animal -> makeSound();

    // Calls the destructor
    delete animal;
    return 0;
};
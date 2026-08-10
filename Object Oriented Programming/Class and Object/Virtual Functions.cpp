#include <bits/stdc++.h>
using namespace std;

/* If a class contain only one pure virtual function, it becomes abstract and cannot be used to create objects directly. */
class Shape {
    public:
        /* Virtual class also have a constructor → Executed automatically when derived class constructor gets created */
        Shape() {
            cout << "This is shape's constructor" << endl;
        };

        /*
            Pure virtual function → A virtual function that is declared in the base class and must be overridden in the derived class. The function declaration ends with = 0, which indicates that it cannot contain any default implementation in the class body. However, it can still be defined outside the body of class if required.
        */
        virtual double area() = 0;
        virtual double parimeter() = 0;
};

/* No need to define it outside the class because anyway it gets ignored */
double Shape :: area() {
    cout << "This is area function";
    return 0;
};

class Circle : public Shape {
    /* Any class that inherits from the base class is expected to define the function.*/
    private:
        double radius;
    
    public:
        Circle(double r): radius(r) { };

        double area() override {
            /* override is a flag that specifies this function is overrider from its base class */
            return (double)(3.14 * radius * radius);
        };

        double parimeter() override {
            return (double)(2 * 3.14 * radius);
        };
};

int main() {
    // Shape obj → Throws a compile time error
    Circle *obj = new Circle(4.89);
    cout << obj -> area() << endl;
    cout << obj -> parimeter() << endl;
    delete obj;

    return 0;
};

/*
    Unresolved Points →
        1. Runtime Polymorphism: Pure virtual functions use dynamic (late) binding, which means the appropriate function is called based on the actual object type at runtime, particularly when accessed through base class pointers or references.
        2. The compiler applied the implementation rules. If a subclass fails to override a needed function, an error is thrown at build time, which helps to reduce the runtime surprises and increases dependability.
        3. Disadvantage - Minor Runtime cost: Dynamic dispatch has a minimal impact on performance-critical applications.
*/
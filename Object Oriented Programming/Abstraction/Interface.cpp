/*
    Interfaces in C++ are used to define a set of functions that must be implemented by derived classes. It acts like a blueprint that specifies what functions a class should provide without defining how those functions will work.
*/

#include <bits/stdc++.h>
using namespace std;

class Shape {
    /* shape class is act as an interface for classes who inherits this class */
    public:
        inline virtual double area() = 0;
        inline virtual double perimeter() = 0;
};

class Rectangle {
    private:
        double length;
        double breadth;
    
    public:
        Rectangle(double length, double breadth) : length(length), breadth(breadth) {};

        double area() {
            return length * breadth;
        };

        double perimeter() {
            return 2 * (length + breadth);
        };
};

class Circle {
    private:
        double radius;
    
    public:
        Circle(double radius) : radius(radius) {};
        
        double area() {
            return 3.142 * radius * radius;
        };

        double perimeter() {
            return 2 * 3.142 * radius;
        };
};

int main() {
    Rectangle r{2.90, 7.8};
    Circle c(6.75);

    cout << "area → " << r.area() << " perimeter → " << r.perimeter() << endl;
    cout << "area → " << c.area() << " perimeter → " << c.perimeter() << endl;

    return 0;
};
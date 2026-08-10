#include <bits/stdc++.h>
using namespace std;

class Vehicle {
    protected:
        string brand;

    public:
        Vehicle(string b) : brand(b) {}
        void showBrand() const { cout << "Brand: " << brand << endl; }
};

class Car : public Vehicle {
    /* base class protected member becomes private for derived class since base class derived publically */
    private:
        int speed;

    public:
        Car(string b, int s) : Vehicle(b), speed(s) {}
        /*
            You can execute the base class constructor like this efficient syntes `: Vehicle(b), speed(s)`
            If the base class constructor is parameterized then you need to execute it explicitely.
        */
        void showDetails() const {
            showBrand();
            cout << "Speed: " << speed << " km/h" << endl;
        };
};

int main() {
    Car myCar{"Hundai", 150}; // When you create an object of a derived class, the Base class constructor is called FIRST, followed by the Derived class constructor.
    myCar.showDetails();

    return 0;
}
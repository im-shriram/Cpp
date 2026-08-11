#include <bits/stdc++.h> 
using namespace std;

class Test {  
    public:  
        int number;  
        string city, state;  

        Test(int number, string city, string state) : number(number), city(city), state(state) { 
            cout << "Test constructor called" << endl;
        };
};  

class Address {  
    private:  
        Test* address; /* has-a relationship */ 

    public:  
        string name; 

        Address(string name, Test* address) : name(name), address(address) {  
            /* pointer to object of Test passed as an argument → aggregation */   
            cout << "Address constructor called" << endl;  
        };

        void display() {  
            cout<< " Name : " << name << " \n " << " number : " << address->number << " \n " << " City : " << address->city << " \n " << " State : " << address->state << endl << " ------------------------- " << endl;  
        }; 
};  

int main() {  
    Test obj1 = Test(45, "Los Angeles", "USA");  
    Test obj2 = Test(65, " London", "UK"); 

    Address a1 = Address("Joy", &obj1);  
    Address a2 = Address("Jack", &obj2); 

    cout << " Below are the details : " << endl << " ------------------------------ " << endl;  

    a1.display();  
    a2.display();  

    return 0;  
};
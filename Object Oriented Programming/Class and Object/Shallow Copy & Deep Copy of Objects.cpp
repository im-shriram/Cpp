#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int* data;
        int info;
        int prime[5] = {2, 3, 5, 7, 11}; /* must specify size of arrays espically those who initialized in classes */

        /* character arrays behaves differently → printing wont stop until it gets `\0` character → /Arrays/Character Arrays */

        Student(int value, int info) {
            /* this - *class. */
            this -> data = new int(value);
            this -> info = info;
            cout << "Constructor called" << endl;
        };

        /* deep copy constructor → called automatically when class obj_2 = obj_1 */
        Student(const Student& source) {
            this -> data = new int(*(source.data)); /* allocate new memory and copy value */
            for (int i = 0; i < 5; i++) {
                this->characters[i] = source.characters[i]; /* copy array elements */
            }
            cout << "Copy Constructor called" << endl;
        };

        ~Student() {
            delete data;
            cout << "Destructor called" << endl;
        };

};

int main() {
    Student s1(42, 98); 
    Student s2 = s1; /* shallow copy if `deep copy constructor` is not defined in the class else deep copy */

    /* the address locations of these objects are different */
    cout << "s1 - " << &s1 << endl;
    cout << "s2 - " << &s2 << endl;

    /* both are pointing to the same memory locations */
    cout << "s1.data - " << &*(s1.data)<< endl;
    cout << "s2.data - " << &*(s2.data) << endl;

    cout << "s1.info - " << &s1.info << endl;
    cout << "s2.info - " << &s2.info << endl;
    
    for(int i = 0; i < 5; i++) {
        /* the address locations are different → whenever the array gets copied, the completely new array created by copying just values, the memory locations of individual elements are completely different */
        cout << &s1.prime[i] << ' ' << &s2.prime[i] << endl;
    };

    return 0;
};
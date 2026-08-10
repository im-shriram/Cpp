#include <bits/stdc++.h>
using namespace std;

class Last; /* need to decalre first in-order to mention as a friend class */
class First {
    private:
        int a;
        int b;

    public:
        int variable = 0;
        First(int a, int b): a(a), b(b) {}; 
        friend class Last; /* The private and protected members of `First` class can be accessed and modified anywere inside `Last` class but you cannot access them through friend class object */
};

class Last {
    /* all functions inside friend class become friend functions */
    public:
        int show(First &obj) {
            /* 
                all the data members and member functions of `first` class is accessed in this friend class but only through the `first` class object.
                it is recommended to to access them by reference to avoide creating unnecessary copies
            */
            obj.variable = 10;
            return obj.a + obj.b;
        };
};

int main() {
    First f(3, 4);
    Last l;

    cout << l.show(f) << endl;
    cout << f.variable << endl;

    return 0;
};

/*
    When multiple methods of a class need access to all the data members of another class, it is more efficient to declare the entire class as a friend, rather than declaring multiple individual friend functions.
*/
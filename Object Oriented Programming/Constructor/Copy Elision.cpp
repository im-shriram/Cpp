#include <bits/stdc++.h>
using namespace std;

class CopyElision {
    public:
        int data;
        CopyElision() : data(0) {
            std::cout << "Default constructor\n";
        };

        CopyElision(int d) : data(d) {
            std::cout << "Parameterized constructor\n";
        };

        CopyElision(const CopyElision &g) : data(g.data) {
            std::cout << "Copy constructor\n";
        };

        ~CopyElision() {
            cout << "Destructor\n";
        };

        inline friend CopyElision generateGadget(); /* friend inline also valid */
};

CopyElision generateGadget() {
    /*
        The compiler constructs the `obj` object directly on the return's value memory. It does NOT create a temporary and then copy/move it. Therefore, the Copy/Move constructors are NEVER called.
    */
    CopyElision obj{50};
    return obj;
};

int main() {
    CopyElision obj = generateGadget();
    /*
        How copy elision is different than direct strateforward initialization?
        → The compiler creates a temporary object on the right side (HeavyObject("hello")) and then tries to initialize obj on the left side. Logically it's Temp -> obj
    */
    return 0;
};
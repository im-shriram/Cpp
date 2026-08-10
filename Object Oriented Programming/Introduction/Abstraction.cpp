#include <bits/stdc++.h>
using namespace std;

class Atm { 
    /* abstract class*/
    public:
        /* pure virtual function */
        virtual void withdrawMoney(double amount) = 0;

        /*
            virtual functions → has body and optional to override
            pure virtual function → has no body and maindatoy to override
        */

        ~Atm() {
            cout << " virtual destructor → deleting both base class memory and derived class memory";
        }; /* must add this to perform this above task */
};

class BankAtm : public Atm {
    public:
        void withdrawMoney(double amount) override {
            cout << "Processing withdrawal of $" << amount << "" << endl;
        }
};

int main() {
    /*
        Abstraction through base class →
            Atm *atm[3] → you can perform loop over it
            The object creation does not become messy
        
        Note → This will only work if base class have virtual function
    */                   
    Atm* atm = new BankAtm();
    atm -> withdrawMoney(80.0);
    return 0;
};
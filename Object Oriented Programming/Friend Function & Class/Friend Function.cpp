#include <bits/stdc++.h>
using namespace std;

class First;
class Second {
    public:
        Second() {};
        void friend_of_first(First& obj);
};

class First {
    private:
        string passward;

    protected:
        char division;

    public:
        string name;
        string email;

        First(string email, string passward, char div): email(email), passward(passward), division(div) { };
        
        /* non-member friend function*/
        friend void interact(First obj); /* if you just want to access the variables then pass the object by value else pass by reference */

        /* member friend function */
        friend void Second :: friend_of_first(First& obj);
};

/* friend functions are always decalred in class but defined outside the class */
void Second :: friend_of_first(First& obj) {
    cout << "changing name → ";
    obj.name = "sam";
    return ;
};

void interact(First obj) {
    cout << obj.email << endl;
    cout << obj.passward << endl;
    cout << obj.division << endl;
};

int main() {
    First obj("dexter@gmail.com", "1234", 'B');
    interact(obj);

    Second object;
    object.friend_of_first(obj);
    cout << obj.name << endl;

    return 0;
};
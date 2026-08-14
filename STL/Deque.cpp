/* deque (Double-Ended Queue) is used to insert and remove elements from both the front and back of the container efficiently */

#include <bits/stdc++.h>
using namespace std;

void iter_deque(deque<int>dq, const string message) {
    cout << message;
    for(deque<int>::iterator it = dq.begin(); it != dq.end(); it++) {
        cout << *it << ' ';
    }; cout << endl;
    return ;
}

int main() {
    /* creating deque */
    deque<int>dq = {1, 2, 3, 4, 5}; /* initializing like arrays is possible */

    /* iterating over a deque */
    cout << "printing deque elements → ";
    for(deque<int>::iterator it = dq.begin(); it != dq.end(); it++) {
        cout << *it << ' ';
    }; cout << endl;

    cout << "printing deque elements → ";
    for(int it: dq) {
        cout << it << ' ';
    }; cout << endl;

    /* push and pop from front and back → emplace_front and emplace_back are faster then normal push */
    dq.push_front(0); /* inserting from front */
    dq.push_back(6); /* inserting from back */
    dq.pop_front(); /* removing from front */
    dq.pop_back(); /* removing from back */

    dq.insert(dq.begin() + 2, 300); /* emplace */
    iter_deque(dq, "deque elements after inserting at 3rd position → ");

    auto it = find(dq.begin(), dq.end(), 3);
    if(it != dq.end()) {
        dq.erase(it);
    }; iter_deque(dq, "deque elements after removing frist occurance of 3 → ");

    /*
        these inserting and removing element from certain position are out of the scope of deque because it violates the principle of queue → stl deque is exactly behave as vectors  
    */

    /* accessing and modifying elements */
    cout << "accessing element at 3rd position → " << dq[3] << ' ' << dq.at(3) << endl;
    cout << "accessing front and back elements → " << dq.front() << ' ' << dq.back() << endl;

    dq.at(3) = 400;
    dq[2] = 300;
    iter_deque(dq, "deque after modifying values → ");

    cout << "size of deque → " << dq.size() << endl;

    /* shrinking and expanding the size */
    dq.resize(2); /* shrinking → remaining elements get removed */
    dq.resize(10, -1);
    iter_deque(dq, "deque after shrinking and expanding → ");

    return 0;
}
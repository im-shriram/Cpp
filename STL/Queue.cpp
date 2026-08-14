/* queues (linear data structure) are used to store and process elements in First-In-First-Out (FIFO) order. The element inserted first is removed first from the queue */

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int>q; /* this is the only way to create a queue → unlike vectors you cannot specify like {1, 2, 3} */
    
    /* inserting element from backwords → push method */
    q.push(1);
    q.push(2);
    q.push(3);

    /* size of queue */
    cout << "size of queue → " << q.size() << endl;

    /* front and back elements */
    cout << "front element → " << q.front() << " back element → " << q.back() << endl;

    /* iterating over queue */
    do {
        cout << q.front() << ' ';
        q.pop(); /* removes the first element */
    } while(q.empty() /* return true is queue is empty */ == false); cout << endl; 

    /* push → inserting from back, pop → removing from front (FIFO) */
    q.push(1);
    q.pop(); /* both function does not return anything */

    /*
        if you want to access middle elements from the queue, you need to remove (pop) the front elements until that perticular middle element becomes front
    */

    return 0;
};
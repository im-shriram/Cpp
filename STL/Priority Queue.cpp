/*
    priority queue →
        → priority queue is used to store elements in such a way that the highest priority element is removed first.
        → If two or more elements have the same priority, then their order is determined according to their position in the queue.
        → Priority queues internally use the binary heap data structure (two types) for storing and managing elements.
            → Max Heap: In a max heap, the largest element has the highest priority and appears at the top.
            → Min Heap: In a min heap, the smallest element has the highest priority and appears at the top.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* creating priority queue */
    priority_queue<int>pq;

    /* inserting element from backwords → push method */
    pq.push(1);
    pq.emplace(2);
    pq.push(4); /* the priority of this 4 is more than the next 4 since this 4 is inserted before that next 4*/
    pq.emplace(3);
    pq.push(4);

    /* size of priority queue */
    cout << "size of priority queue → " << pq.size() << endl;

    /* since elements have priority, you can only access top (front) element */
    cout << "front element → " << pq.top() << endl;

    /* iterating over priority queue */
    cout << "poping order → ";
    while(pq.empty() == false) {
        cout << pq.top() << ' '; /* the poping order would be 4 → 4 → 3 → 2 → 1 */
        pq.pop();
    }; cout << endl;

    return 0;
}
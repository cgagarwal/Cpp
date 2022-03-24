#include <iostream>
#include <queue>            // for priority queue
using namespace std;

int main() {

    // insertion and removal from front
    // stroed internally as vector by default
    // element inserted in priority order (largest value has largest priority at front)
    // for inserting object of any class in priority queue it must has overloaded operator '<'
    // No iterators supported

    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);        // inserted in priority order
    pq.push(5);
    pq.push(8);

    cout << pq.top() << endl;       // 20

    pq.pop();       // highest priority removed (20)

    cout << pq.size() << endl;      // 3

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;       // 10 8 5

    return 0;
}

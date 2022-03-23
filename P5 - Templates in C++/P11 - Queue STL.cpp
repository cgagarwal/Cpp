#include <iostream>
#include <list>
#include <queue>            // First in First out
using namespace std;


int main() {

    queue<int> q;                      // deque  (by default)
    queue< int, list<int> > q1;         // list
    queue< int, deque<int> > q2;       // deque

    q.push(10);
    q.push(20);            // push at back of queue
    q.push(25);
    q.push(30);

    cout << q.back() << endl;           // 30
    cout << q.front() << endl;          // 10

    q.pop();           // front element removed

    cout << q.size() << endl;  // 3

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;           // 20 25 30
    

    return 0;
}

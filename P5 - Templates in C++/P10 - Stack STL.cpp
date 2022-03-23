#include <iostream>
#include <list>
#include <deque>
#include <stack>            // Last in First out
#include <vector>
using namespace std;


int main() {

    stack<int> s1;                      // deque  (by default)
    stack< int, vector<int> > s2;      // vector
    stack< int, list<int> > s3;         // list
    stack< int, deque<int> > s4;       // deque

    s1.push(10);
    s1.push(20);            // push at top of stack
    s1.push(25);
    s1.push(30);

    cout << s1.top() << endl;       // 30 (top element of stack)

    s1.pop();           // remove top element

    cout << s1.size() << endl;  // 3 (size of stack)

    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;           // 25 20 10     (display in reverse)
    

    return 0;
}

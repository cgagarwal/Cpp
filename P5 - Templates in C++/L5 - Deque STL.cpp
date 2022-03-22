#include <iostream>
#include <deque>            // for deque STL    ; double ended queue
using namespace std;

void display(deque<int> &d) {
    for(int i = 0 ; i < d.size() ; i++) {
        cout << d[i] << ' ';
    }
    cout << endl;
}

int main() {
   
    deque<int> d(4,10);     // 4 times 10
    display(d);     // 10 10 10 10

    d.clear();      // clear the deque
    display(d);
    cout << d.empty() << endl;      // 1
    cout << endl;

    deque<int> d1;

    d1.push_back(4);        // insert at last
    d1.push_back(3);
    d1.push_back(2);
    d1.push_front(7);       // insert at first
    d1.push_front(1);

    display(d1);        // 1 7 4 3 2

    cout << d1.at(3) << endl;       // 3
    cout << d1.back() << endl;      // 2
    cout << d1.front() << endl;     // 1

    d1.pop_back();
    d1.pop_front();

    display(d1);      // 7 4 3
  
    return 0;
}

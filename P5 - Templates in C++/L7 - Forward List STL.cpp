#include <iostream>
#include <forward_list>         // Singly linked list
using namespace std;

void display(forward_list<int> &l) {
    forward_list<int> :: iterator li;       // declare a iterator
    li = l.begin();        // points at first index

    for( ; li != l.end() ; li++)
        cout << *li << " ";
    cout << endl;
}

int main() {

    forward_list<int> l1;       // 0 length list

    l1.push_front(2);       // Insert at start of list
    l1.push_front(4);
    l1.push_front(6);
    l1.push_front(2);

    cout << l1.front() << endl;     //  2

    l1.pop_front();      // delete from front

    display(l1);        // 6 4 2
    cout << endl;

    forward_list<int> :: iterator li;
    li = find(l1.begin(), l1.end(), 4);
    
    l1.insert_after(li,2);
    l1.insert_after(li,7);
    l1.insert_after(li,3);

    display(l1);        // 6 4 3 7 2 2

    li++;
    li++;

    l1.erase_after(li);
    display(l1);            // 6 4 3 7 2


    l1.sort();          // sort the list
    display(l1);     // 2 3 4 6 7 

    l1.resize(3);
    display(l1);        // 2 3 4

    l1.resize(8);
    display(l1);        // 2 3 4 0 0 0 0 0

    return 0;
}

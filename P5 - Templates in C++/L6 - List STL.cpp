#include <iostream>
#include <list>         // doubly linked list
using namespace std;

void display(list<int> &l) {
    list<int> :: iterator li;       // declare a iterator
    li = l.begin();        // points at first index

    for( ; li != l.end() ; li++)
        cout << *li << " ";
    cout << endl;
}

int main() {

    list<int> l1;       // 0 length list

    l1.push_back(3);        //  Insert at last of list
    l1.push_back(7);
    l1.push_back(5);

    l1.push_front(2);       // Insert at start of list
    l1.push_front(4);

    cout << l1.back() << endl;      // 5
    cout << l1.front() << endl;     //  4

    l1.pop_back();      // delete from end
    l1.pop_front();      // delete from front

    cout << l1.size() << endl;          // 3
    display(l1);        // 2 3 7
    l1.push_front(4);
    cout << endl;


    list<int> l2(2);       // empty list of 2 length
    l2.push_back(5);        // add at 3 place (2 index)
    display(l2);
    
    list<int> :: iterator li;       // declare a iterator
    li = l2.begin();        // points at first index
    *li = 9;
    li++;
    *li = 9;
    display(l2);        // 9 9 5

    l2.remove(9);       // remove all occurrences of 9
    display(l2);       //  5
    l2.push_front(7);
    l2.push_back(1);

  
    l1.sort();          // sort the list

    // if both the list are sorted then merged list is sorted otherwise just merged
    l1.merge(l2);       // merge l2 list in l1
    display(l1);    // 2 3 4 7 7 5 1

    l1.reverse();   // reverse the list
    display(l1);        // 1 5 7 7 4 3 2
    cout << endl;


    li = find(l1.begin(), l1.end(), 4);

    l1.erase(li);           // erase the element ; iterator aslo destroyed
    display(l1);        // 1 5 7 7 3 2

    li = l1.begin();
    li++;
    li++;

    l1.insert(li,2);
    display(l1);        //  1 5 2 7 7 3 2

    l1.resize(3);
    display(l1);        // 1 5 2 

    l1.resize(8);
    display(l1);        // 1 5 2 0 0 0 0 0

    return 0;
}

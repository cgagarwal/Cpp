#include <iostream>
#include <set>         //  no duplicates allowed   ;   ordered by key 
#include <unordered_set>   //  no duplicates allowed   ;  elements  unordered
using namespace std;

void display(set<int> &s) {
    set<int> :: iterator t = s.begin();
    for( ; t != s.end() ; t++)
        cout << *t << " ";
    cout << endl;
}

int main() {

    set<int> s;         // store in ascending order

    s.insert(2);       // insertted ; no concept of front and back
    s.insert(8);
    s.insert(1);
    s.insert(5);
    s.insert(3);
    display(s);         // 1 2 3 5 8 

    cout << s.size() << endl;  // 5

    s.erase(5);

    set<int> :: iterator s1 = s.find(8);

    if(s1 != s.end())
        s.erase(s1);
    display(s);         // 1 2 3

    s.insert(3);     // 1 2 3 ; no duplicate allowed

    int k = s.count(13);        // present - 1  ;  else - 0
    cout << k << endl;          // 0

    s.clear();
    cout << s.empty() << endl;      // 1
    cout << endl;

    // multiset and unordered_multiset           ; allow duplicate element
    
    return 0;
}

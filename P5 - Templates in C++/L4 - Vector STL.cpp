#include <iostream>
#include <vector>           // for vector STL   ; variable sized array
using namespace std;

void display(vector<int> &v) {
    for(int i = 0 ; i < v.size() ; i++)
        cout << v[i] << ' ';
    cout << endl;
}

int main() {
    
    vector<int> v2(8);     // vector of length (8)
    cout << v2.size() << endl;  // 8

    vector<int> v3(v2);     // 8 length vector from v2 (copy of v2)
    
    vector<int> v4(4,5);    // 4 length vector of 5s
    display(v4);        // 5 5 5 5

    vector<int> v1;     // 0 length vector
    v1.push_back(5);        // insert at last
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(6);

    cout << v1.at(1) << endl;           // 4 (element at first index)
    cout << v1.front() << endl;         // 5
    cout << v1.back() << endl;          // 6

    cout << v1.size() << endl;      //  4 (size of vector)
    display(v1);        // 5 4 2 6

    v1.pop_back();        //  delete the last element
    display(v1);        // 5 4 2
    cout << endl;


    vector<int> :: iterator vec = v1.begin();       // iterator to vector class

    vec++;
    v1.insert(vec, 7);          // insert 7 at vec iterator
    display(v1);            // 5 7 4 2

    vec++;
    v1.insert(vec,3, 8);          // insert 8 at vec iterator 3 times
    display(v1);            // 5 7 8 8 8 4 2

    vec = find(v1.begin(), v1.end() , 4);       // iterator to element 4 (at 4th idx)

    v1.erase(vec);    // erase element 4
    v1.erase(vec-3, vec); // erase element from vec-3 to one before vec (8,8,8)
    display(v1);    // 5 7 2
 

    sort(v1.begin() , v1.end());        // sort the vector
    display(v1);        // 2 4 5
  
    return 0;
}

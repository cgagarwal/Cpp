#include <iostream>
#include <map>          // key : value pairs
#include <unordered_map>    //  no duplicates allowed   ;  elements unordered
using namespace std;

void display(map<string,int> &movie) {
    map<string,int> :: iterator mp = movie.begin();     // iterate over keys
    while (mp != movie.end()) {
        cout << (*mp).first << " : " << (*mp).second << endl;
        mp++;
    }
}

//           map    ->  BST             O(log n)
// unordered_map    ->  HashTable       O(1)

int main() {

    map<string, int> movie;
    movie["Allu Arjun"] = 22;
    movie["Ram Charan Teja"] = 15;
    movie["Ravi Teja"] = 56;
    movie["Ram Pothineni"] = 19;

    movie.at("Allu Arjun") = 24;      // only for updation
    
    movie.insert(make_pair("Vijay", 48));   // inserting in map using insert

    cout << movie.size() << endl;   // 4

    display(movie);
    cout << endl;

    cout << movie.empty() << endl;  // 0

  
    movie["Vijay"] = 52;    // both update and initialise
    
    movie.erase("Ram Charan Teja");     // remove by key value


    map<string,int> :: iterator mp = movie.find("Vijay");

    if (mp != movie.end())
        cout << (*mp).first << " : " << (*mp).second << endl;

    movie.clear();
    cout << movie.empty() << endl;  // 1

    // multimap and unordered_multimap            ; allow duplicate element
    
    // Check the presence of an element
    cout << movie.count("Johnny Depp") << endl;         // 0

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1 = "Chi";
    string s2 = "rag";

    // s1 = s1 + s2
    s1.append(s2);      // append s2 in s1
    cout << s1 << endl;     // Chirag

    s2.clear();         // s2 cleared
    cout << s2 << endl;

    if (s2.empty())
        cout << "String is empty" << endl;

    s2 = "Chirag";
    if (s1.compare(s2) == 0)
        cout << "Equal Strings" << endl;


    // s1.erase(index from erasing start, no of characters erased)
    s1.erase(2);        // erase everyhting from index 2 (from i)
    cout << s1 << endl;         // Ch
    s2.erase(2,3);          //  ira --> deleted
    cout << s2 << endl;         // Chg
    
    s2.insert(2, "ira");        // insert ira at 2 index
    cout << s2 << endl;         // Chirag
    
    // s.find(string to be searched, pos from search start = 0)
       // returns the index from which word starts
         // if not in string then ---> it returns string::npos
    s1 = "I Chirag Goyal, ambrother";
    int t = s1.find("am");
    if (t == string::npos)
        cout << "NOT FOUND" << endl;
    else
        cout << t << endl;      // 16
    
    /* ------------------------- string::npos  -----------------------------
    ---- It is a constant static member value with the highest possible value for an element of type size_t.
    ---- It actually means until the end of the string.
    ---- It is used as the value for a length parameter in the string’s member functions.
    ---- As a return value, it is usually used to indicate no matches.
    */
  
    // s.substr(starting index, length of substring)
    string g = "OkkBroo...";
    cout << g.substr(3) << endl;    // Broo...
    // substring from 3 position and onwards
    
    string k = g.substr(3, 4);
    cout << k << endl;          // Broo
  
  
    // convert numerical string into int
    s1 = "1708";
    int s = stoi(s1);
    cout << s+2 << endl;      // 1710 ----> int

    // convert int to string
    cout << to_string(s) + "ijk" << endl;     // 1708ijk
    
    return 0;
}

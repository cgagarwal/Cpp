/* ------------------------ Standard Template Library ------------------------
Library of Generic classes and functions.

Components of STL
            ----> Containers    (object to store data ; use template classes)
            ----> Algorithms    (sorting, searching ; use template functions)
            ----> Iterators     (object points to an element in container ; connect algo with containers)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    /* --------------------------------- Containers ---------------------------------
    ---- Sequence Containers        {vector , list , deque}
    ---- Associative Containers     {set , map, multiset, multimap}
    ---- Derived Containers         {stack , queue, priority_queue}
    
    ------------------------------------ Iterators -----------------------------------
    --- iterator                                             begin() & end()
    --- const_iterator                                      cbegin() & cend()
    --- reverse_iterator                                    rbegin() & rend()
    --- const_reverse_iterator                             crbegin() & crend()
    */
            
    pair<int,string> p;            // pair of int and string
    p = make_pair(4,"Hyy");     
            
    
    cout << p.first << " : " << p.second << endl;                       // first and second value of pair
    
  
    return 0;
}

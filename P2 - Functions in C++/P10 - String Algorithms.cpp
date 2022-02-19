#include <bits/stdc++.h>
using namespace std;

int main() {

    // sort the string
    string str = "vaikunthapurramuloo";
    sort(str.begin(), str.end());       // sort(itr to start, itr to end)
    cout << str << endl;        // aaahiklmnooprrtuuuv

    // sort in descending order
    sort(str.begin(), str.end() , greater<int>());
    cout << str << endl;        // vuuutrrpoonmlkihaaa

  
    // transform the string (in uppercase and in lowercase)
    // transform(itr to start, itr to last, itr to where result is stored, unary_operator)
    string s = "KhiLadi";
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout << s << endl;      // khiladi

    s = "Duvvada Jagannadham";
    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout << s << endl;      // DUVVADA JAGANNADHAM
    
    
    // reverse the string
    s = "Republic";
    reverse(s.begin(), s.end());
    cout << s << endl;          //  cilbupeR

    return 0;
}

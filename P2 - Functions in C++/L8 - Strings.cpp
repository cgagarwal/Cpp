#include <iostream>
#include <string>           // also in namespace std
#include <cstring>      // as like as string.h in C ; functions on C-type strings i.e character array
using namespace std;

int main() {

    string s0;                   //  empty string
    string s1 = "Hello";
    string str(6, 'C');         // str = 6 times C
    string s_0(s1);          // copy of s1
    string s_1("Chirag",4);     // Chir
    string s_2("Chirag Goyal", 3 , 5);      //  (str , starting idx, length)

    cout << s1 << endl;      // Hello
    cout << str << endl;    // CCCCCC
    cout << s_2 << endl;      // rag G

    int len = s1.size();    // compute the length of string
    cout << len << endl;      // 5

  
    string s2 = "Chirag";
    string s = s1 + " " + s2;     // Concatetate the String
    cout << s << endl;      // Hello Chirag

    int l = s.length();     // also used to find the length of string in C++
    cout << l << endl;      // 12


    // Accessing or updating the string
    char c = s[2];                  // s.at(2) is also valid
    cout << c << endl;      //  l
    cout << s << endl;      // Hello Chirag
    s[5] = '.';
    cout << s << endl;      // Hello.Chirag


    // INPUTTING THE STRING FROM USER
    string a,b;       // only read till whitespace or next line char
    cin >> a;       // Chirag Goyal
    cout << a << endl;  // Chirag

    getchar();    // for one extra character in input buffer from upper output

    // getline(cin,str,character reads till = '\n' -- default);
    getline(cin,b);         // Chirag Goyal
    cout << b << endl;      // Chirag Goyal
    
    return 0;
}

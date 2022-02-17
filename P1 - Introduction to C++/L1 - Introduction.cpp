#include <iostream>         // <bits/stdc++.h>  ----> for including all header files

/*  This is a preprocessor directive.
It tells the preprocessor to include the contents of iostream header file in the program before compilation.
This file is required for input-output statements.
*/

using namespace std;    // omitting std is admissible

// main() ----> program execution begins
int main() {

    /* ------- omit std (using namespace std) --------
        std::cout << "Hello, Chirag"; 
        std::cin        std::endl
    */
    cout << "Hello, Chirag\n";

    int a;
    cin >> a;       // for user input
    
    // get and put
    char ch;
    cin.get(ch);        // input char -> '\n'
    cout.put(ch);       // output -> newline
    // cin.get()  is also admissible
    
    // cin.getline(name , length, character reads till = '\n' -- default);
    char str[10];
    cin.getline(str, 10);      // read only 9 characters, 10th is automatially null
    cout.write(str, 10);        // print the 10 characters of str
    
    return 0; // not necessary
}

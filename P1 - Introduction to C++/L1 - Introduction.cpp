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
    cout << "Hello, Chirag";

    int a;
    cin >> a;       // for user input
    
    // get and put
    char ch;
    cin.get(ch);        // input char -> 'a'
    cout.put(ch);       // output -> a
    // cin.get()  is also admissible

    return 0; // not necessary
}

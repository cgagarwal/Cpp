/* ------------------------------ Destructors in C++ -----------------------------------
---- special member function with same name as of class with a tilde(~).
---- neither takes any argument nor does it return any value.
---- it invoked when any object is destroyed and there should be only one destructor in a class.
*/

#include <bits/stdc++.h>
using namespace std;

class num{
    int ct;
    
    public:
        num(int n) {                     // Constructor
            ct = n;
            cout << "Constructor invoked for " << ct << endl;
        }

        ~num() {                     // Destructor
            cout << "Destructor invoked for " << ct << endl;
        }
};

int main() {
    
    num n1(1);             // Constructor for n1
    num n5(5);
  
    {   
        // scope of object declared here is only inside this block
        num n2(2), n3(3);         // Constructor for n2 , n3
        num n4(4);
        num n6(6);
        
    }
    // destructor invoked in reverse order of their declaration (n6 , n4 , n3 , n2)
    
    num n7(7);         // Constructor for n7

    // destructor ----> at the end of program   (n7 , n5 , n1)

    return 0;
}

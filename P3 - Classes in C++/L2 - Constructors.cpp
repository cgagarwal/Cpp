/* ----------------------------- Constructors in C++ ------------------------------
---- special member function with same name as of class.
---- used to initialize objects of class and does not have any return type.
---- automatically invoked when the object is created and should be declared in public section of class.
---- there may be multiple constructors in a class i.e they can be overloaded.

---------------------------- Types of Constructor ----------------------------
---- Default Constructor         ---- Parameterized Constructor          ---- Copy Constructor
*/

#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a,b;
    
    public:
        Complex() {         //  default constructor , because it has no parameters
            a = 0;
            b = 0;
        }
        Complex(int x , int y) {
            a = x;              // parameterized constructor because it has parameter
            b = y;
        }
        Complex(int x) {
            a = x;
            b = 0;
        }
    
        void print() {
            cout << a << "+" << b << "i" << endl;
        }
};

class Comp {
    int a,b;
    public:
        Comp(int x = 0 , int y = 0) {
            a = x;                   // constructor with default argument
            b = y;
        }

        void print() {
            cout << a << "+" << b << "i" << endl;
        }
};


int main() {
    
    // pass x and y value by IMPLICIT CALL
    Complex a(2,3);
    a.print();              // 2 + 3i

    // pass x and y value by EXPLICIT CALL
    Complex b = Complex(3,4);
    b.print();              // 3 + 4i

    // Constructor Overloading
    Complex c(3);
    c.print();              // 3 + 0i

    Complex d;
    d.print();              // 0 + 0i

    
    // Default argument in class Comp
    Comp a1(2,3), b1(3), c1;
    a1.print();              // 2 + 3i
    b1.print();              // 3 + 0i
    c1.print();              // 0 + 0i

    return 0;
}

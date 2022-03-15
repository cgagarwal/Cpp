#include <bits/stdc++.h>
using namespace std;

class Complex {

    int x;
    int *y;

    public:
        Complex(int a = 0 , int b = 0) : x(a) {
            y = new int;
            *y = b;
        }
        void setdata(int x , int y) {
            this -> x = x;
            *(this -> y) = y;
        }
        void getdata() {
            cout << x << " + " << *y << "i" << endl;
        }

        // Overload the Assignment Operator
        // For generating deep copy ; (not shallow copy)
    
        // Complex &Complex::operator = (const Complex &rhs)
        Complex &operator = (const Complex &rhs) {
            if (this == &rhs)       // for self assignment case
                return *this;
            
            this -> x = rhs.x;

            delete this -> y;
            this -> y = new int;
            *(this -> y) = *(rhs.y);

            return *this;
        }
};

int main() {

    // all operator overloaded except    ::  :?  .*  .  sizeof
    // [] () -> =      these 4 oprators must be overloaded as member functions


    Complex c1(4,4);

    Complex c2;
    c2 = c1;
    // Assignment Operator does Shallow copy by default
    // c2.x is a copy of c1.x
    // c2.y is same as c1.y (shallow copy) ; located in heap

    c1.getdata();           // 4 + 4i (Shallow Copy)    ;    4 + 4i (Deep Copy)
    c2.getdata();           // 4 + 4i (Shallow Copy)    ;    4 + 4i (Deep Copy)

    c2.setdata(2,2);

    c2.getdata();           // 2 + 2i (Shallow Copy)    ;    2 + 2i (Deep Copy)
    c1.getdata();           // 4 + 2i (Shallow Copy)    ;    4 + 4i (Deep Copy)

    return 0;
}

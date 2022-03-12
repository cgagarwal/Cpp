#include <bits/stdc++.h>
using namespace std;

class Complex {
    int x,y;
    public:
        Complex(int a = 0 , int b = 0) {
            x = a;
            y = b;
        }
        
        // this keyword --> pointer points to object which invokes the member function
    
        void setdata(int x , int y) {
            this -> x = x;
            this -> y = y;              // x = x ; not applicable ; both are same local x
        }
    
        // const keyword gurantees that object is not changing inside this constant
        // we cannot change object inside this function
        // useful for const objects
        void getdata() const {
            cout << x << " + " << y << "i" << endl;
        }
    
        // this keyword --> used to return the same object via member functon
        Complex& returnMe() {
            return *this;               // return the same object which invoked this function
        }
};

int main() {
    
    Complex c1;
    Complex *p = &c1;       // p is a pointer points to c1
    
    // accessing the class function by deferencing the ptr
    (*p).setdata(3,4);
    (*p).getdata();             // 3 + 4i

    Complex *ptr = new Complex; // dynamically allocate memory to ptr
    
    // accessing the class function by arrow operator
    ptr -> setdata(9,17);
    ptr -> getdata();           //  9 + 17i

    
    c1.getdata();                   // 3 + 4i
    c1.returnMe().getdata();        // 3 + 4i
    
    
    const Complex c2(9,7);
    c2.getdata();           // if const is absent after function name ; then this statement is invalid
    
    return 0;
}

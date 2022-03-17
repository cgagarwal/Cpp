/* -------------------------- Constructors in Derived Class --------------------------
--- If base class has constructror with no arguments, no need to make constructor in Derived Class.
--- If base class has constructror with arguments, derived class need to pass arguments to base class constructor.

--- Constructors of Base Class invoked prior than Derived Class.
--- In multiple inheritance , constructors are called in order their classes derived in derived class declaration.
--- In multilevel inheritance, constructors are executed in order of inheritance.
--- Constructor of Virtual Base Class Invoked first (if any).

--- Destructors of Derived Class invoked prior than Base Class.
*/

#include <bits/stdc++.h>
using namespace std;

class Base1 {
    int data1;
    public:
        Base1(int i) {
            data1 = i;
            cout << "Base Class - 1 Constructor Invoked." << endl;
        }
        ~Base1() {
            cout << "Base Class - 1 Destructor Invoked." << endl;
        }
};

class Base2 {
    int data2;
    public:
        Base2(int i) {
            data2 = i;
            cout << "Base Class - 2 Constructor Invoked." << endl;
        }
        ~Base2() {
            cout << "Base Class - 2 Destructor Invoked." << endl;
        }
};

class Derived: public Base1, public Base2 {
    int data;
    public:
        Derived(int a , int b , int c) : Base1(a), Base2(b) {
            data = c;
            cout << "Derived Class Constructor invoked." << endl;
        }
        ~Derived() {
            cout << "Derived Class Destructor invoked." << endl;
        }
};

int main() {
    
    Derived d(1,2,3);
    
    //  constructor  ;      Base1 -----> Base2 ------> Derived
    //  destructor   ;      Derived ------> Base2 -----> Base1

    return 0;
}

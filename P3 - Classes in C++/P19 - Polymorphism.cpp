/* ---------------------------- Polymorphism in C++ ------------------------------
Compile Time Polymorphism   ---->  Function  Overloading, Operator  Overloading
Run Time Polymorphism       ---->  Virtual Functions
*/

#include <bits/stdc++.h>
using namespace std;

class Base {
    int a;
    public:
        int var1;
        void display() {
            cout << "Base var : " << var1 << endl;
        }
};

class Derived : public Base {
    public:
        int var2;
        void display() {
            cout << "Base var : " << var1 << endl;
            cout << "Derived var : " << var2 << endl;
        }
};

int main() {

    // Static Binding

    Base *bptr;
    Derived dr;
    bptr = &dr;     // Base class pointer points to derived class object

    // But it only can access the inherited members of base class.
    bptr -> var1 = 54;
    //  bptr -> var2        --->     NOT ACCESSIBLE
    bptr -> display();          // Base :: display

    cout << dr.var1 << endl;        //  54
    dr.var2 = 67;
    dr.display();           //  54      67


    Derived *dptr = new Derived();

    dptr -> var1 = 36;
    dptr -> var2 = 17;
    dptr -> display();      //  Derived :: display


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Number{
    int a;
    public:
        Number() {
            a = 0;           // default constructor to create object directly
        };
        Number(int n) {
            a = n;
        }

        Number(Number &obj) {
            a = obj.a;              // Copy constructor
        }
        // When no copy constructor is found , compiler supplies its own copy constructor.

        void display() {
            cout << a << endl;
        }
};

int main() {

    Number x,y,z(12);
    x.display();            // 0
    y.display();            // 0
    z.display();            // 12

    Number z1(z), z2;           // Copy Constructor invoked
    z1.display();           // 12
    // z1 is a copy of z via copy constructor

    z2 = z;                 // Copy Constructor not invoked
    z2.display();         // 12

    Number z3 = z;          // Copy Constructor invoked
    z3.display();

    return 0;
}

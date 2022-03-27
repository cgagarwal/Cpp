#include <bits/stdc++.h>
using namespace std;

class Number{
    int n;
    public:
        Number(int a = 0) : n(a) {}

        Number(Number &obj) {               // Copy constructor
            n = obj.n;
            cout << "Copy Constructor Invoked" << endl;
        }
        // In absence of copy constructor, C++ compiler creates a default Copy Constructor.
        // Default Copy Constructor only does Shallow Copy.
        // Deep copy is possible only with user defined copy constructor.
        // Shallow Copy and Deep Copy works same if none of the variables are defined in the heap.
        // If some variables are located in heap, then copied object variable will also reference the same memory location.
        // But in Deep Copy, they have different memory locations.

        void display() {
            cout << n << endl;
        }
};

int main() {

    Number z(12);
    z.display();            // 12

    Number z1(z), z2;           // Copy Constructor invoked
    z1.display();           // 12

    z2 = z;                 // Copy Constructor not invoked i.e. Default Assignment operator
    z2.display();         // 12

    Number z3 = z;          // Copy Constructor invoked
    z3.display();

    return 0;
}

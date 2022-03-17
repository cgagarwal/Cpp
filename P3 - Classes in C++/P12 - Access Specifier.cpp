#include <bits/stdc++.h>
using namespace std;

class Base {
    private:
        int a;              // access only by members or friends of the class
    
    protected:
        int b;          // protected members are the members which is private but inheritable
    
    public:
        int c;             // always accessible
        Base() {
            a = 3;
            b = 7;
            c = 9;
        }
};

/*                                      class DERIVED_CLASS : access_specifier BASE_CLASS

Private Members      ---->                              NOT INHERITED IN ANY MODE
Protected Members    ---->  remains proected (public specifier)     becomes private (private specifier)       remains protected (protected specifier)
Public Members       ---->  remains public (public specifier)       becomes private (private specifier)       becomes protected (protected specifier)

access_specifier is private (by default, i.e. if not mentioned)
*/

class Derived : protected Base {
    // a not inherited
    // b remains protected
    // c becomes protected
    
    public:
        void get() {
            cout << b << " + " << c << "i" << endl;
        }
};

int main() {
    Base b1;
    Derived b2;

    b2.get();           // 7 + 9i
    
    return 0;
}

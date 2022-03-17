#include <bits/stdc++.h>
using namespace std;

class Base1 {
    public:
        void say() {
            cout << "Hello....\n";
        }
};

class Base2 {
    public:
        void say() {
            cout << "Hyy....\n";
        }
};

class Derived : public Base1, public Base2 {
    public:
        void say() {
            Base1 :: say();     // ambiguity resolved by specifying the class
        }
};

int main() {
    Base1 b1;
    Base2 b2;

    b1.say();           // Hello....
    b2.say();           // Hyy....

    Derived d;
    d.say();                    // Hello....
    // derived class functions overwrite the function of base class , if they have same name

    return 0;
}

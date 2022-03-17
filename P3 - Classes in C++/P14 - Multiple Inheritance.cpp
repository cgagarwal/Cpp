#include <bits/stdc++.h>
using namespace std;

class Base1 {
    protected:
        int num1;
    public:
        void set_num1(int a) {
            num1 = a;
        }
};

class Base2 {
    protected:
        int num2;
    public:
        void set_num2(int a) {
            num2 = a;
        }
};

class Base3 {
    protected:
        int num3;
    public:
        void set_num3(int a) {
            num3 = a;
        }
};

class Derived : public Base1, public Base2, public Base3 {
    public:
        void show() {
            cout << num1 << endl;
            cout << num2 << endl;
            cout << num3 << endl;
            cout << num1 + num2 + num3 << endl;
        }
};


int main() {

    Derived add;
    add.set_num1(6);
    add.set_num2(18);
    add.set_num3(21);

    add.show();     //  6    18    21   45

    return 0;
}

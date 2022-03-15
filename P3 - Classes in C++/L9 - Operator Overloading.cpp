#include <bits/stdc++.h>
using namespace std;

class Complex {

    int x,y;

    public:
        Complex(int a = 0 , int b = 0) : x(a), y(b) {}

        void getdata() {
            cout << x << " + " << y << "i" << endl;
        }

        // Operator Overloading as Member Functions

        Complex operator - () const;

        Complex operator + (const Complex &rhs) const {
            Complex cmp;
            cmp.x = x + rhs.x;
            cmp.y = y + rhs.y;
            return cmp;
        }

        bool operator == (const Complex &rhs) const {
            return ((this->x == rhs.x)  && (this->y == rhs.y));
        }

        // Operator Overloading as Global Functions ; by making them friend

        friend bool operator != (const Complex &lhs , const Complex &rhs);
        friend Complex operator * (const Complex &lhs , const Complex &rhs);

        
        // Overload stream insertion and extraction operator
        // No sense to overload as Member Function      (lhs must be class object)
        // return reference to stream ; to keep inserting or extracting

        friend ostream &operator << (ostream &os , const Complex &rhs);
        friend istream &operator >> (istream &is , Complex &rhs);

};

Complex Complex::operator - () const {
    Complex cmp;
    cmp.x = (-1) * x;
    cmp.y = (-1) * y;
    return cmp;
}

bool operator != (const Complex &lhs , const Complex &rhs) {
    return (!(lhs.x == rhs.x)  && (lhs.y == rhs.y));
}

Complex operator * (const Complex &lhs , const Complex &rhs) {
    Complex cmp;
    cmp.x = lhs.x * rhs.x;
    cmp.y = lhs.y * rhs.y;
    return cmp;
}

ostream &operator << (ostream &os , const Complex &rhs) {
    os << rhs.x << " + " << rhs.y << "i";           // overload insertion operator
    return os;
}

istream &operator >> (istream &is , Complex &rhs) {
    int x,y;                        // overload extraction operator
    is >> x >> y;

    rhs.x = x;
    rhs.y = y;

    return is;
}


int main() {

    Complex c1(4,2);
    Complex c2,c3;

    c2 = -c1;
    c3 = c1+c2;

    c2.getdata();           // -4 - 2i
    c3.getdata();           // 0 + 0i

    cout << (c1 == c2) << endl;     // 0
    cout << (c1 != c2) << endl;     // 1

    Complex c4;
    c4 = c1*c2;
    c4 = -c4;

    c4.getdata();       // 16 + 4i

    Complex c5;
    cin >> c5;      // 8 6

    cout << c5 << endl;         // 8 + 6i

    return 0;
}

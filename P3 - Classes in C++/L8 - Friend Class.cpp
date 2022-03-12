#include <bits/stdc++.h>
using namespace std;

class Complex;  // forward declaration to access in class Addition

class Addition {
    public:
        int add(int a ,int b) {
            return a+b;
        }
        
        int addReal(Complex, Complex);      // only declaration no proof of member of Complex class now
        int addImg(Complex, Complex);       // so cannot define function now only declaration is valid
};


class Complex {
    int a,b;
    
    friend int Addition::addReal(Complex , Complex);       // Individually declaring a class function as Friend

    friend class Addition;             // declare entire class as frined
    
    public:
        void set(int n1 , int n2) {
            a = n1;
            b = n2;
        }
        void print() {
            cout << a << " + " << b << 'i' << endl;
        }
    
        friend Complex sumComplex(Complex, Complex);  // not a member of class but permitted to access the private member of class
        // declaration inside both public or private section is legit
};

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.set(o1.a+o2.a , o1.b+o2.b);
    return o3;
}

int Addition::addReal(Complex c1, Complex c2) {
    return c1.a+c2.a;
}

int Addition::addImg(Complex c1 , Complex c2) {
    return c1.b + c2.b;
}

int main() {
    Complex c1,c2, c3;
    
    c1.set(1,4);
    c2.set(5,8);

    c3 = sumComplex(c1, c2);
    c3.print();                 // 6 + 12i

    Addition add;
    cout << add.addReal(c1, c2) << endl;       // 6
    cout << add.addImg(c1,c2) << endl;     // 12

    return 0;
}

#include <iostream>
using namespace std;

inline int product(int a , int b) {
    return a*b;
}

int sweet() {
    static int c = 1;   // this statement execute only once
    c *= 3;
    return c;
}

int sum(int x , int y = 0 , int z = 0 , int w = 0) {
    // function with default arguments
    return x+y+z+w;
}

// Recursion
int factorial(int n) {
    // base case
    if (n == 1 || n == 0)
        return 1;

    // call recursively
    return n * factorial(n-1);
}

int main() {
    int a = 2, b = 4;
    cout << product(a,b) << endl;
    // inline ---> replace the name of function by code of function
    cout << sweet() << endl;    //  3
    cout << sweet() << endl;    //  9
    cout << sweet() << endl;    // 27

    cout << sum(10,20,30,40) << endl;
    cout << sum(10,20,30) << endl;
    cout << sum(10,20) << endl;
    cout << sum(10) << endl;
    // argument value not passed so take its default value 0

    return 0;
}

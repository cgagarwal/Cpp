#include <bits/stdc++.h>
using namespace std;

// Initialization list helps to declare the value of members when they are initialising

class Fun {
    int x,y;
    
    public:
    
        // x initialize first because declared first ; no matter the order in function statement
    
        // Fun(int i, int j) : x(i), y(j)      ---->   x = i , y = j
        // Fun(int i, int j) : x(i), y(i+j*2)  ---->   x = i, y = i+j*2
        // Fun(int i, int j) : y(x+i) , x(j)   ---->   x = j , y = x+i
        // Fun(int i, int j) : y(i) , x(y+j)   ---->   x = garbage_value_of_y + j , y = i
    
        // Fun(int x, int y) : x(x) , y(y)     ---->   No need of this pointer
    
        // Fun(int x, int y) : x(2*x) , y(y+x)  ; (x & y inside brackets are arguments)     ---> VALID

        Fun(int i, int j) : x(i), y(x+j) {
            cout << "Constructor invoked." << endl;
            cout << "Value of x is " << x << endl;          // i
            cout << "Value of y is " << y << endl;          // x+j
        }

};

int main() {

    Fun c(5,9);

    return 0;
}

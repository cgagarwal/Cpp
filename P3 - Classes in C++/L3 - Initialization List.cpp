#include <bits/stdc++.h>
using namespace std;

// Initialization list helps to declare the value of members in initialization section

class Fun {
    int x,y;
    
    public:
    
        // x initialize first because declared first ; no matter the order in function statement
    
        // Fun(int i, int j) : x(i), y(j)      ---->   x = i , y = j
        // Fun(int i, int j) : x(i), y(i+j*2)  ---->   x = i, y = i+j*2
        // Fun(int i, int j) : y(x+i) , x(j)   ---->   x = j , y = x+i
        // Fun(int i, int j) : y(i) , x(y+j)   ---->   x = garbage_value_of_y + j , y = i

        Fun(int i, int j) : x(i), y(x+j) {
            cout << "Constructor invoked." << endl;
            cout << "Value of x is " << x << endl;
            cout << "Value of y is " << y << endl;
        }

};

int main() {

    Fun c(5,9);

    return 0;
}

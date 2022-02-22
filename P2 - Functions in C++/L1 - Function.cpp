#include <iostream>
using namespace std;

int sum(int , int);     // function prototype ----> forward declaration

void greet() {
    cout << "Hello\n";
}

int main() {
    int x = 7 ,y = 2;
    cout << sum(x,y) << endl;   //  9
    // x and y are actual parameters
    // x and y are not actually passed
    
    int a = 5 , b = 12;
    cout << sum(a,b) << endl;   // 17
    // copy of a and b pass , so not change a and b inside function

    greet();

    return 0;
}

// definition of sum function
int sum(int a , int b) {
    // a = x ; b = y
    // a and b  are formal parameters
    int c = a+b;
    return c;
}

#include <iostream>
using namespace std;

int c = 72;     //  global variable

int main() {
    int a = 8, b = 5;
    int c = a + b;      // local variable

    cout << c << endl;      //  13 (local)
    cout << ::c << endl;    // 72 (global)
    // :: --> scope resolution operator
    // use for accessing global variable c

    float d = 34.4f;        // f --> float (F also used)
    long double e = 34.4l;  // l -> long double
    // 34.4 is a double

  
    // Reference Variables
    float x = 45;
    float &y = x;   // y is reference to x
    x++;
    cout << y << endl;  // 46
    // y is not another var , it is aliases to x
    // if we update x , y also changed

    // l-values ----> variables
    // r-values ----> which are not the l-values
    // references are only reference to l-value
    
    // Typecasting
    float k = 4.56;
    cout << k << endl;      // 4.56
    cout << (int)k << endl;         // 4
    cout << int(k) << endl;         // 4
    cout << static_cast<double>(5)/16 << endl;      // 0.3125
    // static_cast<datatype>(---)   ---> also valid syntax for typecasting
    
    return 0;
}

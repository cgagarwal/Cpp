#include <iostream>
#include <climits>
#include <cfloat>       // limits of floating point numbers
using namespace std;

int main() {

    // contains size and precision information

    cout << SHRT_MIN << endl;       // min value of short int
    cout << SHRT_MAX << endl;       // max value of short int

    cout << INT_MIN << endl;        // min value of int
    cout << INT_MAX << endl;        // max value of int

    cout << LONG_MIN << endl;       // min value of long int
    cout << LONG_MAX << endl;       // max value of long int

    cout << LLONG_MIN << endl;      // min value of long long int
    cout << LLONG_MAX << endl;      // max value of long long int

    cout << SCHAR_MIN << endl;      // min value of signed char
    cout << SCHAR_MAX << endl;      // max value of signed char

    cout << CHAR_MIN << endl;      // min value of char
    cout << CHAR_MAX << endl;      // max value of char


    cout << FLT_MIN << endl;       // min positive value of float
    cout << FLT_MAX << endl;       // max value of float

    cout << DBL_MIN << endl;       // min positive value of double
    cout << DBL_MAX << endl;       // max value of double

    cout << LDBL_MIN << endl;      // min positive value of long double
    cout << LDBL_MAX << endl;      // max value of long double

    return 0;
}

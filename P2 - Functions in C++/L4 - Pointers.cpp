#include <iostream>
using namespace std;

int main() {
    // pointer is a datatype which holds the address of other datatypes
  
    int var = 2;
    int* ptr = &var;
    // & --> (address of) operator
    // * --> (value at) deferencing operator

    cout << &var << endl;    // address of var
    cout << ptr << endl;    // address of var

    cout << var << endl;    // var (2)
    cout << *ptr << endl;    // var (2)

    *ptr = 42;
    // value of var change but address of var same

    int** ptrr = &ptr;      // address of pointer ptr
  
    cout << ptrr << endl;   // address of ptr
    cout << *ptrr << endl;   // ptr (address of var)
    cout << **ptrr << endl;   // var (42)

    return 0;
}

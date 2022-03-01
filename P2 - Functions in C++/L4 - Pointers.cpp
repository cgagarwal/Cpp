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
    
    
    //  ------------------ Constant Pointers --------------------
    
    int a = 8;
    const int* p1 = &a;
    // data of pointer cannot be changed
    // but pointer itself can point to some other object
    
    int *const p2 = &a;
    // data of pointer can be changed
    // but pointer itself can not point to some other object
    
    const int* const p3 = &a;
    // data of pointer and pointer itself both cannot be changed

    return 0;
}

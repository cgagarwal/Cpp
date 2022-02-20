#include <iostream>
using namespace std;

// return type must be int, no other are admissible
int main() {
    // Arithmetic opertors
    // + , - , * , / , %

    cout << 4+5 << endl;    // 9
    cout << 4*5 << endl;    // 20
    cout << 4/5 << endl;    // 0  (Quotient)
    cout << 4%5 << endl;    // 4  (Remainder)

    //    Relational opertors
    // == , != , > , >= , < , <=

    //    Logical Operators         ----- precedence (not > and > or)
    // && (and) , || (or) , ! (not)
    // result is bool

    //    Assignment opertaor
    // = , += ( a = a+1 ) , -= , *= , /=

    
    // increment and decrement operator ---> Unary operator
    int a = 3;      // a++ , ++a , --a, a--
    // post and pre (change by value  1)

    cout << a++ << endl;    // (3) print a  ; a += 1
    cout << ++a << endl;    // (5) a += 1 ; print a
    cout << --a << endl;    // (4) a -= 1 ; print a
    cout << a-- << endl;    // (4) print a ; a -= 1
    cout << a << endl;      //  3

    //          Bitwise operator
    //  & (AND) ,  | (OR) ,  ^ (XOR) , ~ (Not)
    // similar to logic gate
    // convert in binary and then solve bitwise and again convert back

    a = 7;
    int r = a >> 2;     // right shift (bitwise operator)
    // remove last 2 digits of a's binary
    // 7 --> (111)     ---> 1

    int l = a << 2;     // left shift (bitwise operator)
    // add 2 zero at binary of a's last
    // 7 ---> (111)     ---> 11100 ---> (28)

    // a << n       left shift          a*2^n
    // a >> n       rihgt shift         a/2^n
    
    cout << l << '\t' << r << '\n';
    // 28       1

    return 0;
}

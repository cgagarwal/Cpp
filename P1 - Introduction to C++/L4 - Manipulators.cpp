#include <iostream>
#include <iomanip>  // for setw() and setfill() manipulator
using namespace std;

/* ------------------- Header Files --------------------
    System header file              #include <iostream>
    User define                     #include "myfile.h"
*/

int main() {
    
    // cin for input    cout for output
    // cin ignore whitespaces, tabspaces , newline
    // all inputs are stored in an input buffer, and read accordingly
    int a,b;
    cin >> a >> b;              // '>>' ---> Extraction Operator

    cout << a+b << endl;        // '<<' ---> Insertion Operator
    // endl is a manipulator

    /*   
                Modifiers   ----->  signed , unsigned , long , short
                
    short int (2)                   char (1)
    int (4)                         float (4)
    long int (4)                    double (8)
    long long int (8)               long double (12)


    signed int (int)   --- 4 bytes (8 bit) ---- -2^(31) to 2^(31) - 1   (2^32)
    unsigned int       --- 4 bytes (8 bit) ---- 0 to 2^(32) - 1   (2^32)
    */
    
    cout << setw(4) << 12 << endl;              // __12
    cout << setw(4) << setfill('*') << 12 << endl;    // **12

    return 0;
}

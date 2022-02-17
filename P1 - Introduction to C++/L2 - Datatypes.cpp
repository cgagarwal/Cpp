#include <iostream>
using namespace std;

int main() {

    int p = 2;
    float k = -3.4;
    double z = 100.657;
    
    // first bit for +ve(0) / -ve(1) then other bits are values

    /*
        Primary (built in) data type    --- int , char , float , bool , double , void
        Derived data type               --- array , function , pointer , refernce
        User Defined data type          --- structure , union , enumeration , class
        
       positive values are directly stored in their binary form
       negative values are stored as 2's complement of the value
       
       1's Complement ----> convert 1 to 0 and 0 to 1 in binary
       2's Complement ----> add 1 in 1's complement
    */

   bool a = true, b = false;
   // true (1)  ;  false (0)
   cout << a << '\t' << b << endl;
   // endl for new line

   cout << p << ' ' << z << '\n';

   /*   line seperator ---> endl or '\n'            tab space ----> '\t'
        
        long (ld)       double (lf)     int (d)       float (f)     char (c)
   */
    
   const int x = 9;    // always constant
   // read only variable
  
   return 0;
}

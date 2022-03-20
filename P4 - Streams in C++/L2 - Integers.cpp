#include <iostream>
#include <iomanip>    // for manipulators
using namespace std;

int main() {

   // Stream Manipulators  ----- Integers

   int num = 106;

   // default values of int are in base 10 (i.e. dec)

   cout << hex << num << endl;      // in hexadecimal (6a)
   cout << oct << num << endl;      // in octal (152)
   cout << dec << num << endl;      // in decimal (106)
   cout << endl;

   // by default base is not shown (i.e. noshowbase)

   cout << showbase;
   cout << hex << num << endl;      // prefix 0x for hexadecimal (0x6a)
   cout << oct << num << endl;      // prefix 0 for octal (0152)
   cout << dec << num << endl;      // no prefix for decimal (106)
   cout << endl;

   // letters in integers are lower cased (i.e. nouppercase)

   cout << uppercase;           // all letter upercased
   cout << hex << num << endl;      // 0X6A
   cout << endl << dec;

   // '+' is not displayed for positive int in base 10 (i.e. noshowpos)

   cout << showpos;           // no '+' before other base int
   cout << num << endl;         // +106

   cout << noshowbase << nouppercase << noshowpos;  // default values again

   // Using setf method

   cout.setf(ios::showbase);
   cout.setf(ios::uppercase);
   cout.setf(ios::showpos);

   cout << resetiosflags(ios::basefield);    // set to base 10 (dec)
   cout << resetiosflags(ios::showbase);
   cout << resetiosflags(ios::uppercase);
   cout << resetiosflags(ios::showpos);

   // All settings reamins throught the stream unless changed again

   return 0; 
}

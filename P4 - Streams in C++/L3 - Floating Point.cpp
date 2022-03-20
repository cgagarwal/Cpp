#include <iostream>
#include <iomanip>    // for manipulators
using namespace std;

int main() {

   // Stream Manipulators  ----- Floating Point

   float num = 1201.659;
   double num2 = 1204564.58;

   // setprecision --- no of digit displayed (6)

   cout << num << endl;       // 1201.66  (rounding off ocuurs)
   cout << num2 << endl;      // 1.20456e+06    (scientific notation ; digits greater than 6 before decimal pt)
   cout << setprecision(7) << num2 << endl;     // 1204565 

   // fixed --- fixed to precision digits after decimal pt

   cout << setprecision(3) << fixed << num << endl;    // 1201.659 (three digit after decimal)
   cout << num2 << endl;            // 1204554.580

   cout << scientific << num2 << endl;    // 1.205e+06
   
   // letters in floating pt are lower cased (i.e. nouppercase)

   cout << uppercase << num2 << endl;    // 1.205E+06  (scientic is already flagged) 

   // '+' is not displayed for positive floats (i.e. noshowpos)

   cout << showpos << num << endl;     // +1.202E+03
   cout << fixed << showpos << num2 << endl;    // +1204564.580

   
   cout.unsetf(ios::scientific | ios::fixed);
   cout << noshowpos;

   // trailing zeroes are not displayed (i.e. noshowpoint)
   
   cout << setprecision(6);
   num2 = 121.20;
   cout << num2 << endl;            // 121.2
   cout << showpoint << num2 << endl;     // 121.200

   // Back to default

   cout.unsetf(ios::scientific | ios::fixed);
   cout << setprecision(6);
   cout << resetiosflags(ios::showpos);
   cout << resetiosflags(ios::showpoint);

   // All settings reamins throught the stream unless changed again

   return 0; 
}

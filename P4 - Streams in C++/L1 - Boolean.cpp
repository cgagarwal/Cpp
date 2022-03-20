#include <iostream>
#include <iomanip>    // for manipulators
using namespace std;

int main() {

   // Stream Manipulators  ----- Boolean

   bool a = true, b = false;

   // Default boolean values 1 and 0 (i.e noboolalpha)

   cout << a << '\t' << b << endl;      //  1    0

   cout << boolalpha;
   cout << a << '\t' << b << endl;      // true   false
   cout << noboolalpha;
   cout << a << '\t' << b << endl;      //  1    0

   // Using setf method  --> Toogle to true/false

   cout.setf(ios::boolalpha);
   cout << a << '\t' << b << endl;      // true   false

   // Toogle to default 0/1 

   cout << resetiosflags(ios::boolalpha);
   cout << a << '\t' << b << endl;      //  1    0

   // All the settings reamain same unless flags are again changed

   return 0;
  
}

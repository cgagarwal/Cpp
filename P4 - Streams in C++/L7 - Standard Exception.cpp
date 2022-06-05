#include <iostream>
#include <exception>   // standard exception class
using namespace std;

/*          All standard exceptions can be caught by catching this type by reference.
class exception {
public:
  exception () throw();
  exception (const exception&) throw();
  exception& operator= (const exception&) throw();
  virtual ~exception() throw();
  virtual const char* what() const throw();
}
*/

int main() {
    
    string s = "bac";
    try {
        // used to convert string to integer
        cout << stoi(s) << endl;    // standard error
    }
    catch(invalid_argument &ex) {
        // what() :  null terminated character sequence that may be used to identify the exception
        cout << ex.what() << endl;
    }

    try {
        if (isalpha(s[0]))
            throw invalid_argument("There are alphabets");
    }
    catch(exception &ex) {
        cout << ex.what() << endl;
    }
    
    return 0;
}

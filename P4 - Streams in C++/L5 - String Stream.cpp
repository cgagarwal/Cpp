#include <iostream>
#include <sstream>      // for string stream
using namespace std;

int main() {

    // allow us to read and write in string just like files

    stringstream ss;    // for both read and write
    ostringstream oss;  // only for writing
    istringstream iss;  // only for reading
    
    int k = 56;
    ss << k;            // 56 inserted in ss
    string s;
    ss >> s;           // 56 extracted from ss in s
    cout << s << endl;          // 56 (string)

    oss << 96 << 23.6 << "Chirag";
    cout << oss.str() << endl;      // 9623.6Chirag
    
    
    string str = "This     is Chirag Goyal";

    stringstream st(str);       // used to break the string 
    cout << st.str() << endl;       // ss == This     is Chirag Goyal

    string word;            
    while (st >> word) {        // 4 times
        cout << word << endl;
    }
    
    return 0;
}

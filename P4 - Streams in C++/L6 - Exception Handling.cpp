#include <bits/stdc++.h> 
using namespace std;

class DivideByZero {};

double calculate_avg(int sum, int tot) {
    if (tot == 0)
        throw 1;
    if(sum < 0 || tot < 0)
        throw string("Negative Value Error");
    return static_cast<double>(sum) / tot;
}

int main() {
    
    // Exception Handling

    int tot = 0 , sum = 89;
    double avg;

    try {
        if (tot == 0)
            throw 0;        // throw the exception   ; throw(0) -- also VALID
        avg = float(sum)/tot;
    }
    catch (int &ex) {
        cerr << "------------ERROR------------" << endl;
        cerr << "can't divide by zero" << endl;         // cerr for error output ; just like cout
    }
    cout << "\nProgram Continues\n" << endl;

    // Catch Multiple Exceptions

    try {
        avg = calculate_avg(sum,tot-1);
        cout << avg << endl;
    }
    catch (int &ex) {
        cerr << "------------ERROR------------" << endl;
        cerr << "can't divide by zero" << endl;
    }
    catch(string &ex) {
        cerr << "------------ERROR------------" << endl;
        cerr << ex << endl;
    }
    catch(...) {            // catch-all handler must come last
        cerr << "Unknown Excption" << endl;
    }
    cout << "\nProgram Continues\n" << endl;

    // User Defined Exception Classes

    try {
        if (tot == 0)
            throw DivideByZero();
    }
    catch (const DivideByZero &ex) {
        cerr << "------------ERROR------------" << endl;
    }
  
    // cassert  --- library
    assert(false);      // abort the program ; results in termination of program
    // assert(true)         --> nothing happens ; program runs as it is
    // assert(any_statement)    -- VALID        statement true or false
    
    
    return 0;
}

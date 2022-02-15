#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 4) {
        cout << i << endl;
        i++;
    }  // 0 to 3

    
    i = 0;
    do {
        cout << i << endl;
        i++;
    }while(i < 4);
    // 0 to 3
    // always executed once whether the condition is true or not
    // after first execution checks the condition and run accordingly

  
    // break;    --> to terminate loop or switch statements.
    // continue; --> to suspend current loop iteration and transfer contol to next loop iteration.

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    // initialize ; condition ; updation;
    for(int i = 0 ; i < 3 ; i++) {
        // i has only scope within these braces
        // declare i again to use outside these
        cout << i << endl;
    }

    // intializtion part removed by writing outside the loop
    // updatation part removed by writing inside the loop

    int i = 7;
    for(;i<9;) {
        cout << i << endl;
        i++;
    }

    /* removing the condition or condition always true ---> result in infinte loop
            for(;;)
                cout << "Infinte Loop";
    */

    for(int i = 0 , j = 3 ; i < 3 && j > 0 ; i++, j--) {
        cout << i+j << endl;
    }


    // Ternary Operators
    int a,b,c;
    a = 2 , b = 4;
    // short hand if else
    c = (a > b) ? a : b;      // if a>b then c = a else c = b
    cout << c << endl;  // 4
    // check the condition (-------)
    // if condition true then (? ---)  else (: ---)

    return 0;
}

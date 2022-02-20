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


    // Range based For Loop (compiler warning: C++11 Extension)
    
    int scores[] = {12,3,45,56,6,7,7,8};
    for(int score : scores)            // auto is used instead of int so it automatically set the type of score
        cout << score << " ";
    cout << endl;           // 12 3 45 56 6 7 7 8
    
    for(auto c : "Chirag Goyal")        // char is also used instead of auto
        cout << c;
    cout << endl;           // Chirag Goyal
    
    
    return 0;
}

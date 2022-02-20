#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 12) {
        cout << "Minor Children" << endl;
        return 0;
    }
    else if (age >= 12 && age < 18)
        cout << "Young Child" << endl;
    else {
        cout << "ADULT" << endl;
    }

    // Switch Statement
    int a = age % 10;

    switch(a) {
        case 2:                 //  execute if a = 2
            cout << "Found\n";
            break;
        case 3:                 // execute if a = 3
            cout << "Found\n";
            break;
        default:                //  execute if a is other than 2 or 3
            cout << "NOT FOUND\n";
            break;
    }
    // once a match occurs all following case executes until a break is reached
    
    
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

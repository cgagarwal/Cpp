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

    return 0;
}

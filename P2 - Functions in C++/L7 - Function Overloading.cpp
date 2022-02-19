#include <iostream>
using namespace std;

int add(int x , int y) {
    return x+y + 1;
}   // fun1

float add(float x , float y) {
    return x+y+ 1.4;
}   // fun2


int vol(int l , int b , int h) {
    cout << "Cuboidal\t";
    return l*b*h;
}

int vol(int a) {
    cout << "Cube\t";
    return a*a*a;
}

int main() {
  
    // overwriting functions feature of C++

    cout << add(2,4) << endl;       // add via fun1
    cout << add(2.1f,4.3f) << endl; // add via fun2

    cout << vol(2,4,6) << endl;     // Cuboidal     48
    cout << vol(3) << endl;         // Cube         27

    return 0;
}

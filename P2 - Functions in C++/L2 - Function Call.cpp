#include <iostream>
using namespace std;

// Call by value    (value copied)
void nswap(int x , int y) {
    // actual variable copied in formal
    int temp = x;
    x = y;
    y = temp;
    // formal a and b not change but actual and b change
    return;
}

// Call by Reference using pointer  (memory address goes)
void swap(int *x , int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

// Call by Reference using reference variables (value goes)
void rswap(int &x , int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4 , b = 5;
    nswap(a,b);
    cout << a << ' ' << b << endl;      // 4 , 5    --> not swapped
    swap(&a,&b);
    cout << a << ' ' << b << endl;      // 5 , 4    --> swapped
    rswap(a,b);
    cout << a << ' ' << b << endl;      // 4 , 5    --> swapped

    return 0;
}

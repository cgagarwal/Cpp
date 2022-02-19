#include <iostream>
using namespace std;

int main() {

    //  XOR operator -->    n^n  = 0

    // Get bit  (bit start from zero) --> find bit at position
    // n & (1<<i)
    if ((5 & (1 << 2)) != 0)      // 101 & 100   -->  1 at 2 bit
        cout << 1 << endl;
    else
        cout << 0 << endl;

    // Set bit (set bit 1 at position)
    // n | (1<<i)
    cout << (5 | (1 << 1)) << endl;    // 101 | 10 ---> 111 (7)

    // Clear bit (set bit 0 at position)
    // n & ~(1 << i)
    cout << (5 & (~(1<<2))) << endl;    // 100 -> 011 & 101

    // update bit (this position to this bit)
    // clear bit and then set bit (1<<i  && 0<<i)


    // flip all the bits from rightmost 1 of n ---> n-1
    // n_is_power_of_2 --> (n & n-1) == 0;
    cout << (16 & 15) << endl;  // 10000  --- 01111
    // n && !(n & n-1)      ---> n for 0

    // (n & n-1) has same bit as n except rightmost set bit
    // count no. of ones
    int n = 19;
    int one = 0;
    while(n) {
        n = n & n-1;
        one++;
    }
    cout << one << endl;

    // find all subsets of array
    // generate all the binary from 0 to 2^n-1 (1 << n)
    // set bit represents presence of that index character

    return 0;
}

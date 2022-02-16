#include <iostream>
using namespace std;

int main() {
    // array is collection of values of similar datatype stored in contiguous memory location

    // <datatype> arr_name[size];
    int arr[6] = {2,5,7,8};     // at 4 and 5 ---> 0
    arr[4] = 12;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl;     // default 0

    int a[3];   // initialize randomly

    int ary[] = {3,2,3,2};  // size = 4 ; not necessary to give

    // ------------------ Pointer Arithmetic ------------------
    cout << *ary << endl;           //  ary[0]
    cout << *(ary + 1) << endl;     //  ary[1]
    cout << *(ary + 2) << endl;     //  ary[2]
    cout << *(ary + 3) << endl;     //  ary[3]


    // ----------------- Multidimension Array -----------------
    int mdarr[2][2] = {{1,2} ,{3,4}};
    // mdarr[2][2] = {1,2,3,4}      ----> also admissible
    
    cout << mdarr[0][0] << endl;    // 1

    return 0;
}

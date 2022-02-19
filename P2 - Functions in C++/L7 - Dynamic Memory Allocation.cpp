#include <iostream>
using namespace std;

int main() {

    // new keyword ---> dynamically allocate memory
    int* p = new int(4);      // memory allocated in heap
    cout << p << endl;
    cout << *p << endl;             // 4

    float *pt = new float(5.67);
    cout << pt << endl;
    cout << *pt << endl;            //  5.67

    int *arr = new int[2];          // dynamically allocate space to array
    arr[0] = 12;
    *(arr+1) = 9;
    cout << *arr << endl;             //  12


    // delete keyword   ---> free the memory i.e. deallocate it from heap
    delete p;

    delete[] arr;           // deallocate the array i.e. block of memory

    // nullptr or NULL ----> both are null pointers
    pt = nullptr;
    cout << pt << endl;         // 0x0
    
    return 0;
}

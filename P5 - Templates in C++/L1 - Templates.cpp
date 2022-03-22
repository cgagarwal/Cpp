#include <iostream>
using namespace std;

template <class T>              // templates are parameterized classes
class Array {
    public:
        T * arr;
        int size;
        Array(int m) {
            size = m;
            arr = new T[size];
        }
        T sum() {
            T d = 0;
            for(int i = 0 ; i < size ; i++) {
                d += arr[i];
            }
            return d;
        } 
};

template <class T1 = int , class T2 = int>    // defalut parameters ; multiple parameters Template
class twoNum {
    T1 data1;
    T2 data2;
    public:
        twoNum(T1 t1 , T2 t2) {
            data1 = t1;
            data2 = t2;
        }
        void display() {
            cout << data1 << " and " << data2 << endl;
        }
};

int main() {
  
    Array<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 5;
    v1.arr[2] = 2;

    Array<float> v2(3);
    v2.arr[0] = 2.4;
    v2.arr[1] = 0.5;
    v2.arr[2] = 1.7;

    cout << v1.sum() << endl;       // 11
    cout << v2.sum() << endl;       // 4.6

  
    twoNum<char,char> t('6','C');
    t.display();            // 6 and C
    
    twoNum<int> t1(8,9);
    t1.display();          //   8 and 9

    twoNum<> t2(5,7);           // <> ---> important to define template
    t2.display();       //  5 and 7

    return 0;
}

#include <iostream>
using namespace std;

template <class T>              // template <typename T>  ---> Also VALID
T sum(T a , T b) {
    cout << "Template : " << a+b << endl;
    return a+b;
}
int sum(int a , int b) {
    cout << "Function : " << a+b << endl;
    return a+b;
}

template <class T>
class Fun {
    T data;
    public:
        Fun(T a) {
            data = a;
        }
        void display();
};

template <class T>
void Fun<T> :: display() {
    cout << data << endl;
}

int main() {
    
    sum(4,5);           // 9  (Function)        ; exact match takes highest priority
    sum(4.3,7.5);       // 11.8 (Template)

    Fun<int> a(3);
    a.display();                // 3

    Fun<char> b('C');
    b.display();                // C

    return 0;
}

#include <iostream>
#include <memory>       // for Smart Pointers
using namespace std;

int main() {

    // Smart Pointers are object and only point to heap allocated memory
    // They destroyed automatically when no longer needed


    /* --------------------------- Unique Pointers ---------------------------
    unique_ptr<T>
            --- points to an object of type T on heap
            --- it is unique ; only unique_ptr point to object on heap
            --- own what it points to and can not be assigned or copied
            --- it can be moved ; when ptr is destoryed ; what it points to is automatically destroyed
    */

    unique_ptr<int> p1(new int(10));

    cout << *p1 << endl;
    *p1 = 12;
    cout << *p1 << endl;

    cout << p1.get() << endl;   // memory address
    p1.reset();         // p1 is now a nullptr

    // unique_ptr<int> p2 = make_unique<int>(12);       --- C++14 extension


    /* --------------------------- Shared Pointers ---------------------------
    shared_ptr<T>
            --- points to an object of type T on heap
            --- it is not unique ; there can be many shared_ptr point to same object on heap
            --- establish shared ownership ; can be assigned , copied or moved
            --- when use_count is zero, object on heap destroyed
    */    

    shared_ptr<int> p2(new int(10));

    cout << *p2 << endl;
    *p2 = 12;
    cout << *p2 << endl;

    cout << p2.use_count() << endl;     // 1 (ptr manage memory on heap)
    shared_ptr<int> p3(p2);
    cout << p2.use_count() << endl;     // 2

    p2.reset();             // decrease use_count ; p1 is nulled out
    cout << p2.use_count() << endl;     // 0
    cout << p3.use_count() << endl;     // 1

    shared_ptr<int> s1 = make_shared<int>(10);
    shared_ptr<int> s2(s1);
    shared_ptr<int> s3;
    s3 = s1;
    cout << s1.use_count() << endl;     // 3


    /* --------------------------- Weak Pointers ---------------------------
    weak_ptr<T>
            --- points to an object of type T on heap
            --- always created from shared_ptr
            --- not participate in ownership ; no change in use_count
            --- used to prevent object from being deleted
    */    


    return 0;
}

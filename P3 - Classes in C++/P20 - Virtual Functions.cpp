#include <bits/stdc++.h>
using namespace std;

// Virtual Functions is used to invoke the function of the Derived Class with Base class pointer, which points to derived class object.
// Abstact Base Class can not instantiated (their objects are not allowed).
// Abstract Base Classes have atleast one Pure Virtual Function.
// If Dervied Class does not override it then it is also a derived class.
// Derived class overriding pure virtual function is concrete class.
// Only use pointers and reference of Abstract Class to dynimacally refer to concrete class.

class Movie {           // Abstract
    protected:
        string title;
        float imdb;
    public:
        Movie(string s, float r) {
            title = s;
            imdb = r;
        }
        virtual ~Movie() {
            cout << "Movie Class Destructor" << endl; 
        }

        virtual void display() {}   // defined to access display() of derived class

        virtual void imdbShow() = 0;    // Pure Virtual Function
        // must override in concrete Classes
};

class Bollywood: public Movie {         // Concrete
    int rupee;
    public:
        Bollywood(string s , float r , int rs) : Movie(s,r) {
            rupee = rs;
        }
        ~Bollywood() {
            cout << "Bollywood Class Destructor" << endl;
        }
        void display() {
            cout << "Budget of " << title << " is " << rupee << "cr INR.\n"
                 << "IMDB Rating of " << title << " : " << imdb << endl;
        }
        void imdbShow() {
            cout << imdb << endl;
        }

};

class Hollywood: public Movie {             // Concrete
    int dollar;
    public:
        Hollywood(string s , float r , int d) : Movie(s,r) {
            dollar = d;
        }
        ~Hollywood() {
            cout << "Hollywood Class Destructor" << endl;
        }
        void display() {
            cout << "Budget of " << title << " is $" << dollar << " millions." << endl
                 << "IMDB Rating of " << title << " : " << imdb << endl;
        }
        void imdbShow() {
            cout << imdb << endl;
        }

};

// Virtual Functions Override the base class function
// For dynamic binding, both the functions should have exact same signature

int main() {
    
    // Dynamic Binding
  
    Movie *m1, *m2;
    m1 = new Hollywood("Shutter Island" , 8.2, 80);
    m2 = new Bollywood("Shershaah" , 8.7 , 55);

    // if display is not virtual in Movie class , then Movie::display() invoked (in both cases)

    m1 -> display();            // Hollywood::display()
    m2 -> display();            // Bollywood::display()

    // if derived class has no display() function then display() of base class invoked
    
    // Virutal Destructor   --> Use to delete Derived class objects via Base Class Pointer

    delete m1;      // Hollywood --> Movie
    delete m2;      // Bollywood --> Movie

    // Refernces (&) --> are binded dynamically

    return 0;
}

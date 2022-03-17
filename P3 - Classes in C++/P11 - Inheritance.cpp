/* ---------------------------- Inheritance in C++ -------------------------------
---- Existing class ; BASE CLASS        ---- Inherited class ; DERIVED CLASS.

----------------------------  Types of Inheritance ----------------------------
Single Inheritance          --->    derived class with only one base class
Multiple Inheritance        --->    derived class with more than one base class
Hierarchical Inheritance    --->    several derived class from single base class
Multilevel Inheritance      --->    deriving a class from already derived class
Hybrid Inheritance          --->    combination of multiple and multilevel inheritance

A Derived Class does not inherit:-
                               --- Base Class Constructor
                               --- Base Class Destructor
                               --- Base Class overloaded assignment operator
                               --- Base Class friend functions
*/

#include <bits/stdc++.h>
using namespace std;

// Base Class
class IndianActor {
    string name;            //  private members of base class are never inherited
    
    public:
        string firstmovie;
        IndianActor() {};   // default constructor needed to inherit this class
        IndianActor(string a, string b) {
            name = a;
            firstmovie = b;
        }
};

// Derived class
class Tollywood : public IndianActor{
    int movies;
    public:
        Tollywood(int m) {
            movies = m;
        }
        void info() {
            cout << "He started his carrer with "<< firstmovie << " in Tollywood." << endl
                 << "He Successfully Completed " << movies << " movies in Tollywood." << endl;
        }
};

int main() {

    IndianActor ak("Akshay Kumar" , "Saugandh");

    Tollywood allu(21);
    allu.firstmovie = "Gangotri";
    
    allu.info();

    return 0;
}

/* ----------------------- Obeject Oriented Programming --------------------------
--- OOPs works on concept of classes and objects.
--- A class is template to create objects.
--- It decompose the problem in objects and build data and functions around the object.

---- C++   -->  initially called  --> C with classes
---- class -->  extension of structures (in C)
*/

#include <bits/stdc++.h>
using namespace std;

// variables declared inside classes are ----> class attributes
// functions declared inside classes are ----> class methods
class Info {

    private:
        float imdb;             //  by default, members of class are private
        int project_no;
        // not accessible by user ; only accessible inside this class

    public:
        int year;
        void setinfo(float imdb , int project_no);
        void getinfo() {
            cout << "Release year is " << year <<endl;
            cout << "Project no.   " << project_no <<endl;
            cout << "Reported IMDB  " << imdb <<endl;
        }
};

// define the functions of class outside the class by :: operator
void Info::setinfo(float a , int p) {
    imdb = a;
    project_no = p;
}

int main() {

    Info pushpa;
    pushpa.year = 2021;
    pushpa.setinfo(8.1, 23);
    pushpa.getinfo();
    
    return 0;
}

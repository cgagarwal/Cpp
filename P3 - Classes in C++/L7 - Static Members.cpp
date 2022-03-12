#include <bits/stdc++.h>
using namespace std;

class Actor{
    string name;
    static int no;  // belong to class not object i.e. one time initialized than updated
    static int active;

    public:
        void setname(string s) {
            name = s;
            active++;
        }
    
        static void get() {           // they only have access to static variables of class
            cout << "Total Actors in indusrty : " << no << endl;
            cout << "Active Actors in indusrty : " << active << endl;
        }
};

// necessary to declare here
int Actor::active;         // default value of static member is zero

int Actor::no = 100;

int main() {
    
    Actor allu , vijay, ravi;

    allu.setname("Allu Arjun");
    vijay.setname("Vijay");
    ravi.setname("Ravi Teja");

    Actor::get();         // Active -- 3 ; Total -- 100

    return 0;
}

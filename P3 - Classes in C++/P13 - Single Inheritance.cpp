#include <bits/stdc++.h>
using namespace std;

class IndianActor {
    string name;
    string firstmovie;

    public:

        void setinfo(string a, string b) {
            name = a;
            firstmovie = b;
        }

        string getname() {
            return name;
        }
        string getmovie() {
            return firstmovie;
        }
};

class Tollywood : public IndianActor {
    int movies;
    public:
        Tollywood(int m) {
            movies = m;
        }
        void info() {
            cout << getname() << " debuted with " << getmovie() << endl;
        }
};

int main() {

    Tollywood allu(21);
    allu.setinfo("Allu Arjun" , "Gangotri");

    allu.info();

    return 0;
}

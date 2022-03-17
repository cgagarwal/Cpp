#include <bits/stdc++.h>
using namespace std;

class Actor {
    protected:
        string name;
        string debut;
    public:
        void setinfo(string a, string b) {
            name = a;
            debut = b;
        }
        void getinfo() {
            cout << name << " debuted with movie " << debut << endl;
        }
};

class IndianActor : public Actor {
    protected:
        string latest;
        string heroine;
    public:
        void set_latest(string a, string c) {
            latest = a;
            heroine = c;
        }
        void get_latest() {
            cout << name << " has done "<< latest << " movie with " << heroine << endl;
        }
};

class Tollywood : public IndianActor {
    int movies;
    public:
        void set_num(int k) {
            movies = k;
        }
        void get_num() {
            cout << name << " has done " << movies << " movies in Telugu Cinema." << endl;
        }
};

int main() {

    Tollywood allu;
    allu.setinfo("Allu Arjun" , "Gangotri");
    allu.set_latest("Pushpa" , "Rashmika Mandanna");
    allu.set_num(21);

    allu.getinfo();
    allu.get_latest();
    allu.get_num();

    return 0;
}

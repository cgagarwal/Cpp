#include <iostream>
using namespace std;

typedef struct movieInfo {
    int year;
    float imdb;
}film;
// also called film now

union info {
    int budget;
    char car;
    float dollar;
};
// one at a time used (all have one shared memory)

int main() {
    struct movieInfo pushpa;
    pushpa.year = 2021;
    pushpa.imdb = 8.1;
    cout << pushpa.imdb << endl;     // 8.1
  
    film ngk;   //    --> struct movieInfo ngk

  
    union info allu;
    allu.budget = 256;
    allu.car = 'B';     // overwrites at budget
    cout << allu.budget << endl;    // not correct
    // budget memory crashed because car used after that 

    cout << allu.car << endl;   // B  --> correct

  
    enum dhanush{maari , maari2 , kodi , vip , vip2};
            //      0       1       2      3    4

    cout << maari << endl;      //  0
    cout << maari2 << endl;     //  1
    cout << vip2 << endl;       //  4

    // dhanush is now a datatype
    dhanush dualrole = kodi;
    cout << dualrole << endl;   // 2

    return 0;
}

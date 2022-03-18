#include <bits/stdc++.h>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void setno(int n) {
            roll_no = n;
        }
        void getno() {
            cout << "Roll Number : " << roll_no << endl;
        }
};

class Test : virtual public Student {
    protected:
        float math, phy , chem;
    public:
        void setmarks(float m , float p , float c) {
            math = m;
            phy = p;
            chem = c;
        }
        void getmarks() {
            cout << "Maths Marks : " << math << endl
                 << "Physics Marks : " << phy << endl
                 << "Chemistry Marks : " << chem << endl;
        }
};

class Sports : public virtual Student {
    protected:
        float score;
    public:
        void setscore(float s) {
            score = s;
        }
        void getscore() {
            cout << "Score in Sports : " << score << endl;
        }
};

class Result : public Test, public Sports {
    float total;
    public:
        void display() {
            total = math + phy + chem + score;
            getno();
            getmarks();
            getscore();
            cout << "Total Score : " << total << endl;
        }
};

/* ------------------------- Virtual Base Class ---------------------------
--- to prevent multiple instances of class.
--- virual public or public virtual ---> valid syntax
Explain:-
        class Student inherited by class Test and class Sports.
        class Test and class Sports both inherited by class Result.
        This leads to ambiguity of the functions and members of class Student in class Result.
        To overcome this problem , we inherit Student in Test and Sprot as Virtual Base Class.
*/

int main() {
    Result rk;
    rk.setno(34);
    rk.setmarks(96.5 , 86.7 , 92.7);
    rk.setscore(91);

    rk.display();
    return 0;
}

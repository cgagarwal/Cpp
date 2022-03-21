#include <iostream>
#include <fstream>          // for working with files
using namespace std;

int main() {
  
    // for inserting in file  ; ----> fstream fin("KGF.txt" , ios::in)
  
    ifstream fin("KGF.txt");        // open in read mode
    // ifstream fin;            fin.open("KGF.txt");        ---> also valid
  
    /*    -------------- IN BINARY --------------
          fstream fin("KGF.txt", ios::in | ios::binary)
          ifstream fin("KGF.txt", ios::binary);
    */
  
    string s, st;
    fin >> s >> st;            // read till whitespace  ---> s = Yash, st = played
    cout << s << st;      //  Yashplayed
    getline(fin , s);        // for reading whole line
    cout << s << endl;      //  the lead role in KGF as Rocky Bhai.

    cout << fin.is_open() << endl;    // 1
    fin.close();            // closes the file
    cout << fin.is_open() << endl;    // 0
  

  
    // for writing in file  ; ----> fstream fout("KGF.txt" , ios::out)
  
    ofstream fout("KGF.txt");        // open in write mode
    //  ofstream fout;        fout.open("KGF.txt");       ---> also valid
  
    /*    -------------- IN BINARY --------------
          fstream fout("KGF.txt", ios::out | ios::binary)
          ofstream fout("KGF.txt", ios::binary);
          
          ofstream fout("KGF.txt", ios::trunc);         --- default ; clear all previous data
          ofstream fout("KGF.txt", ios::app);           --- append in file
    */
  
    string str = "Yash played the lead role in KGF as Rocky Bhai.\n";
    fout << str;                        // write the content of str in file
    fout << "Srinidhi Shetty is lead actress in KGF.\n";
    char x = 'c';
    fout.put(x);         // for writing a character 

    fout.close();           // closes the file

   
  
    // uses of end of file function
  
    ifstream kgf;
    kgf.open("KGF.txt");
    char c;
    kgf.get(c);         // for reading a character  
    
    string str1;
    while (!kgf.eof()) {        //  while(getline(kgf, str1))   ---> VALID
        getline(kgf, str1);
        cout << str1 << endl;
    }
  
    cout << kgf.eof();  // 1 (if we are at end of file)
    kgf.close();
   
    return 0;
}

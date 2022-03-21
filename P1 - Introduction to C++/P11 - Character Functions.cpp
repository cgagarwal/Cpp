#include <iostream>
#include <cctype>     // for functions on character
using namespace std;

int main() {

    char c = 'a';

    cout << isalpha(c) << endl;     // if character is alphanumeric
    cout << isalnum(c) << endl;     // if character is alphabetic
    cout << isdigit(c) << endl;     // if character is decimal digit
    cout << islower(c) << endl;     // if character is lowercase letter
    cout << isupper(c) << endl;     // if character is uppercase letter
    cout << isspace(c) << endl;     // if character is a white-space


    c = tolower(c);         // Convert uppercase letter to lowercase
    c = toupper(c);         // Convert lowercase letter to uppercase

    return 0;
}

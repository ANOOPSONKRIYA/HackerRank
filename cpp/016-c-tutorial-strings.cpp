#include <iostream>   // Provides cin and cout
#include <string>     // Provides string class and related functions

using namespace std;

int main() {
    string a, b;

    // Read first string (may contain spaces)
    getline(cin, a);

    // Read second string (may contain spaces)
    getline(cin, b);

    // Print lengths of both strings
    cout << a.length() << " " << b.length() << endl;

    // Print concatenation of the two strings
    cout << a + b << endl;

    /*
        Swap the first characters of strings a and b:
        - b[0] is printed first, followed by remaining part of a
        - a[0] is printed first, followed by remaining part of b
        substr(1) means substring from index 1 till end
    */
    cout << b.substr(0, 1) + a.substr(1)<< " "<< a.substr(0, 1) + b.substr(1)<< endl;

    return 0;   // End of program
}

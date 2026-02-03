#include <iostream>     // Provides cin and cout for input/output
#include <string>       // Provides string class
#include <sstream>      // Included as part of template (not directly used here)
#include <exception>    // Provides base exception class

using namespace std;

/*
    Custom exception class to handle short username length
*/
class BadLengthException : public exception {
private:
    int length;   // Stores the length of the username

public:
    // Constructor to initialize length
    BadLengthException(int n) : length(n) {}

    // Returns the invalid length (as required by the problem)
    int what() {
        return length;
    }
};

/*
    Function to check whether the username is valid
*/
bool checkUsername(string username) {
    bool isValid = true;           // Flag to track validity
    int n = username.length();     // Length of the username

    // If username length is less than 5, throw exception
    if (n < 5) {
        throw BadLengthException(n);
    }

    // Check if username contains consecutive 'w'
    for (int i = 0; i < n - 1; i++) {
        if (username[i] == 'w' && username[i + 1] == 'w') {
            isValid = false;
        }
    }

    return isValid;                // Return validity status
}

int main() {
    int T;
    cin >> T;                      // Number of test cases

    while (T--) {
        string username;
        cin >> username;           // Read username

        try {
            // Validate username
            bool isValid = checkUsername(username);

            // Print result based on validity
            if (isValid) {
                cout << "Valid" << '\n';
            } else {
                cout << "Invalid" << '\n';
            }
        }
        // Catch custom exception for short username
        catch (BadLengthException e) {
            cout << "Too short: " << e.what() << '\n';
        }
    }

    return 0;                      // End of program
}
 
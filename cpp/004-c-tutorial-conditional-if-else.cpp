#include <iostream>   // For cin and cout

using namespace std;

int main() {
    int n;          // Variable to store the number
    cin >> n;       // Read integer input

    // If number is greater than 9
    if (n > 9) {
        cout << "Greater than 9";
    }
    // If number is between 1 and 9
    else {
        if (n == 1) cout << "one";
        else if (n == 2) cout << "two";
        else if (n == 3) cout << "three";
        else if (n == 4) cout << "four";
        else if (n == 5) cout << "five";
        else if (n == 6) cout << "six";
        else if (n == 7) cout << "seven";
        else if (n == 8) cout << "eight";
        else if (n == 9) cout << "nine";
    }

    return 0;       // Program ends successfully
}

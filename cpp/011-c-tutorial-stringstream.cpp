#include <sstream>   // Provides stringstream for parsing strings
#include <vector>    // Provides vector container
#include <iostream>  // Provides cin and cout

using namespace std;

// Function to parse integers separated by commas from a string
vector<int> parseInts(string str) {
    vector<int> result;        // Vector to store parsed integers
    stringstream ss(str);      // Create stringstream from input string
    int number;                // Variable to store each integer
    char comma;                // Variable to store and discard comma

    // Read integer values one by one from the stringstream
    while (ss >> number) {
        result.push_back(number);  // Store the integer in vector
        ss >> comma;               // Read and discard the comma
    }

    return result;              // Return the vector of integers
}

int main() {
    string str;
    cin >> str;                 // Read the input string (comma-separated integers)

    vector<int> integers = parseInts(str);  // Parse integers from string

    // Print each integer on a new line
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;                   // End of program
}

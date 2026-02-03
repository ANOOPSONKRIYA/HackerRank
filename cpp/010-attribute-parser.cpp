#include <iostream>        // For cin, cout
#include <vector>          // For vector
#include <unordered_map>   // For unordered_map
#include <sstream>         // For stringstream
#include <string>          // For string

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;          // N = number of HRML lines, Q = number of queries
    cin.ignore();           // Ignore leftover newline after integer input

    // Map to store full attribute path as key and its value as value
    unordered_map<string, string> mp;

    // Stack to maintain current hierarchy of tags
    vector<string> tagStack;

    // Read N lines of HRML code
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);     // Read entire HRML line

        // If it is a closing tag (starts with </)
        if (line[1] == '/') {
            tagStack.pop_back();   // Remove last opened tag
        }
        // If it is an opening tag
        else {
            // Remove '<' from start and '>' from end
            line = line.substr(1, line.size() - 2);

            stringstream ss(line);
            string tagName;
            ss >> tagName;        // Read tag name

            // Push tag name into stack to maintain hierarchy
            tagStack.push_back(tagName);

            string attr, equalSign, value;
            // Read attribute name, '=', and value
            while (ss >> attr >> equalSign >> value) {
                // Remove double quotes from attribute value
                value = value.substr(1, value.size() - 2);

                // Build full key using tag hierarchy
                string key = tagStack[0];
                for (int j = 1; j < tagStack.size(); j++) {
                    key += "." + tagStack[j];
                }
                key += "~" + attr;   // Append attribute name

                // Store attribute value in map
                mp[key] = value;
            }
        }
    }

    // Process Q queries
    while (Q--) {
        string query;
        cin >> query;        // Read query string

        // If query exists in map, print value
        if (mp.count(query))
            cout << mp[query] << endl;
        // Otherwise print Not Found!
        else
            cout << "Not Found!" << endl;
    }

    return 0;                // End of program
}

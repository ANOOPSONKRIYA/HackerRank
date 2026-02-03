#include <iostream>   // Provides cin and cout
#include <string>     // Provides string support

using namespace std;

// Class Box represents a 3D box with length, breadth, and height
class Box {
private:
    int l;   // Length of the box
    int b;   // Breadth of the box
    int h;   // Height of the box

public:
    // Default constructor: initializes all dimensions to 0
    Box() {
        l = b = h = 0;
    }

    // Parameterized constructor: initializes dimensions with given values
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }

    // Copy constructor: creates a new box as a copy of another box
    Box(const Box &B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    // Returns the length of the box
    int getLength() {
        return l;
    }

    // Returns the breadth of the box
    int getBreadth() {
        return b;
    }

    // Returns the height of the box
    int getHeight() {
        return h;
    }

    // Calculates and returns the volume of the box
    long long CalculateVolume() {
        return static_cast<long long>(l) * b * h;
    }

    // Overloads the < operator to compare two boxes
    // Comparison is done first by length, then breadth, then height
    bool operator<(const Box &B) const {
        if (l < B.l) return true;
        if (l == B.l && b < B.b) return true;
        if (l == B.l && b == B.b && h < B.h) return true;
        return false;
    }

    // Overloads the << operator to print box dimensions
    friend ostream& operator<<(ostream &out, const Box &B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

// Function to process queries related to the Box class
void check2() {
    int n;
    cin >> n;          // Number of queries

    Box temp;          // Temporary box object used for operations

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;   // Type of query

        // Type 1: Print the current box
        if (type == 1) {
            cout << temp << endl;
        }

        // Type 2: Create a new box and assign it to temp
        if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }

        // Type 3: Compare a new box with temp
        if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp) {
                cout << "Lesser\n";
            } else {
                cout << "Greater\n";
            }
        }

        // Type 4: Print the volume of temp
        if (type == 4) {
            cout << temp.CalculateVolume() << endl;
        }

        // Type 5: Create a copy of temp and print it
        if (type == 5) {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main() {
    check2();   // Execute the query handling function
    return 0;   // End of program
}

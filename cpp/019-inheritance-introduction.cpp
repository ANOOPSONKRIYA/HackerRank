#include <iostream>   // Provides cout for output

using namespace std;

/*
    Base class Triangle
    Represents a general triangle
*/
class Triangle {
public:
    // Prints a generic triangle message
    void triangle() {
        cout << "I am a triangle\n";
    }
};

/*
    Derived class Isosceles
    Inherits from Triangle and adds specific behavior
*/
class Isosceles : public Triangle {
public:
    // Prints that this is an isosceles triangle
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }

    // Prints description specific to isosceles triangles
    void description() {
        cout << "In an isosceles triangle two sides are equal\n";
    }
};

int main() {
    // Create an object of Isosceles class
    Isosceles isc;

    // Call function specific to Isosceles class
    isc.isosceles();

    // Call description function of Isosceles class
    isc.description();

    // Call inherited function from Triangle class
    isc.triangle();

    return 0;   // End of program
}

#include <iostream>   // Provides cout for output

using namespace std;

/*
    Base class Triangle
    Contains a function to identify a triangle
*/
class Triangle {
public:
    // Prints that this object is a triangle
    void triangle() {
        cout << "I am a triangle\n";
    }
};

/*
    Derived class Isosceles
    Inherits from Triangle
*/
class Isosceles : public Triangle {
public:
    // Prints that this object is an isosceles triangle
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }
};

/*
    Derived class Equilateral
    Inherits from Isosceles (and indirectly from Triangle)
*/
class Equilateral : public Isosceles {
public:
    // Prints that this object is an equilateral triangle
    void equilateral() {
        cout << "I am an equilateral triangle\n";
    }
};

int main() {
    // Create an object of the most derived class
    Equilateral eqr;

    // Call function of Equilateral class
    eqr.equilateral();

    // Call function of Isosceles class (inherited)
    eqr.isosceles();

    // Call function of Triangle class (inherited)
    eqr.triangle();

    return 0;   // End of program
}

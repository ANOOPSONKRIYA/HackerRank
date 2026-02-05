#include <iostream>   // Provides cin and cout for input and output

using namespace std;

/*
    Base class Rectangle
    Stores width and height and displays them
*/
class Rectangle {
public:
    int height;   // Height of the rectangle
    int width;    // Width of the rectangle

    // Displays width and height
    void display() {
        cout << width << " " << height << endl;
    }
};

/*
    Derived class RectangleArea
    Inherits from Rectangle and adds area functionality
*/
class RectangleArea : public Rectangle {
public:
    // Reads width and height from input
    void read_input() {
        cin >> width >> height;
    }

    // Displays the area of the rectangle
    void display() {
        cout << width * height;
    }
};

int main() {
    // Declare an object of RectangleArea
    RectangleArea r_area;

    // Read width and height values
    r_area.read_input();

    // Call base class display() to print width and height
    r_area.Rectangle::display();

    // Call derived class display() to print area
    r_area.display();

    return 0;   // End of program
}

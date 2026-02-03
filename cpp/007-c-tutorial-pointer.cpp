#include <iostream>   // For cin and cout
#include <cstdlib>    // For abs()

using namespace std;

/*
  This function updates two integers using pointers:
  - a becomes the sum of the two numbers
  - b becomes the absolute difference of the two numbers
*/
void update(int *a, int *b) {
    int sum = *a + *b;          // Calculate sum
    int diff = abs(*a - *b);    // Calculate absolute difference

    *a = sum;   // Update value at address a
    *b = diff;  // Update value at address b
}

int main() {
    int a, b;          // Declare two integers
    int *pa = &a;      // Pointer to a
    int *pb = &b;      // Pointer to b

    // Read input values
    cin >> a >> b;

    // Call update function with pointers
    update(pa, pb);

    // Print updated values
    cout << a << endl << b;

    return 0;          // Program ends successfully
}

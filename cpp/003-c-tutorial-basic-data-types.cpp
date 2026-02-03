#include <iostream>   // Required for cin and cout
#include <iomanip>    // Required for fixed and setprecision

using namespace std;

int main() {
    int i;        // Integer variable
    long l;       // Long integer variable
    char c;       // Character variable
    float f;      // Floating-point variable
    double d;     // Double-precision variable

    // Read input values using C++ input stream
    cin >> i >> l >> c >> f >> d;

    // Print integer
    cout << i << endl;

    // Print long integer
    cout << l << endl;

    // Print character
    cout << c << endl;

    // Print float with exactly 3 decimal places
    cout << fixed << setprecision(3) << f << endl;

    // Print double with exactly 9 decimal places
    cout << fixed << setprecision(9) << d << endl;

    return 0;  // Program ends successfully
}

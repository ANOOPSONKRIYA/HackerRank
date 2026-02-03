#include <iostream>   // Required for cin and cout

using namespace std;

/*
  Function to find the maximum value among four integers.
*/
int max_of_four(int a, int b, int c, int d) {
    int mx = a;        // Assume first number is the maximum

    if (b > mx) mx = b;
    if (c > mx) mx = c;
    if (d > mx) mx = d;

    return mx;         // Return the largest value
}

int main() {
    int a, b, c, d;

    // Read four integers from standard input
    cin >> a >> b >> c >> d;

    // Call the function to get the maximum value
    int ans = max_of_four(a, b, c, d);

    // Print the result
    cout << ans;

    return 0;          // Program ends successfully
}

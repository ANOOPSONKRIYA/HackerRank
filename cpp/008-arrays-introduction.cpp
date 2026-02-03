#include <iostream>
#include <vector>    // Required for vector (dynamic array)

using namespace std;

int main() {
    int N;
    cin >> N;        // Read number of elements

    vector<int> arr(N);   // Create a dynamic array of size N (pure C++)

    // Input elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Output elements in reverse order
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;        // Program ends successfully
}

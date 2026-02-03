#include <iostream>   // Provides cin and cout for input and output
#include <vector>     // Provides vector for dynamic arrays

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;    // n = number of arrays, q = number of queries

    // Create a 2D vector with n rows (each row can have different size)
    vector<vector<int>> arr(n);

    // Input values for each array
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;             // Number of elements in the current array

        arr[i].resize(k);     // Resize current array to hold k elements

        // Read k elements into the current array
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    // Process each query
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;        // x = array index, y = element index

        // Output the element at arr[x][y]
        cout << arr[x][y] << endl;
    }

    return 0;                 // End of program
}

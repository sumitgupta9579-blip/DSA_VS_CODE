#include <iostream>
using namespace std;

int main() {

    int grid[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int m = 2;
    int n = 3;
    int k = 2;

    for (int shift = 0; shift < k; shift++) {

        // Save the last element
        int temp = grid[m - 1][n - 1];

        // Move elements from right to left
        for (int i = m - 1; i >= 0; i--) {

            for (int j = n - 1; j >= 0; j--) {

                if (j > 0) {
                    grid[i][j] = grid[i][j - 1];
                }
                else if (i > 0) {
                    grid[i][j] = grid[i - 1][n - 1];
                }
            }
        }

        // Put last element at first position
        grid[0][0] = temp;
    }

    // Print the shifted grid
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
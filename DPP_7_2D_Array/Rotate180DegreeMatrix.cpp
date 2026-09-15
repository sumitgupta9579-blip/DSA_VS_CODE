#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1,8,4},
        {3,2,9},
        {6,7,5}
    };

    int n = 3;
    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < n; j++) {

            swap(arr[i][j],
                 arr[n - 1 - i][n - 1 - j]);
        }
    }
    
    // Print matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
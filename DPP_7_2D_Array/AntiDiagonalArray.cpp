#include <iostream>
using namespace std;

int main() {

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m = 3;
    int n = 3;

    for (int diagonal = 0; diagonal <= m + n - 2; diagonal++) {

        for (int i = 0; i < m; i++) {

            int j = diagonal - i;

            if (j >= 0 && j < n) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
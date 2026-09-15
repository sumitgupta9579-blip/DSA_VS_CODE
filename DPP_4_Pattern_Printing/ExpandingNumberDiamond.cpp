#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // Increasing numbers
        for (int j = i; j <= 2 * i - 1; j++)
            cout << j << " ";

        // Decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--)
            cout << j << " ";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {

        // Leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";

        // Increasing numbers
        for (int j = i; j <= 2 * i - 1; j++)
            cout << j << " ";

        // Decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}
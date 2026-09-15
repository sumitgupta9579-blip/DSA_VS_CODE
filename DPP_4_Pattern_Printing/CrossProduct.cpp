#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of alphabets: ";
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {

        // Leading spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        char ch = 'A' + i;
        cout << ch;

        // Middle row
        if (i == n - 1) {
            cout << " " << ch;
        }
        else {
            // Middle spaces
            for (int j = 0; j < 4 * (n - i - 1) - 1; j++)
                cout << " ";

            cout << ch;
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {

        // Leading spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";

        char ch = 'A' + i;
        cout << ch;

        // Middle spaces
        for (int j = 0; j < 4 * (n - i - 1) - 1; j++)
            cout << " ";

        cout << ch;

        cout << endl;
    }

    return 0;
}
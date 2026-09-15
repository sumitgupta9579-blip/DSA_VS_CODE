#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors are: ";

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is still greater than 1, it is a prime factor
    if (n > 1)
        cout << n;

    return 0;
}
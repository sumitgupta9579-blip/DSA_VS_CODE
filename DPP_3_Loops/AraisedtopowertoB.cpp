#include <iostream>
using namespace std;

int main() {
    double a, result = 1;
    int b;

    cout << "Enter base and exponent: ";
    cin >> a >> b;

    int exp = b;

    if (exp < 0)
        exp = -exp;

    for (int i = 1; i <= exp; i++) {
        result *= a;
    }

    if (b < 0)
        result = 1 / result;

    cout << result;

    return 0;
}
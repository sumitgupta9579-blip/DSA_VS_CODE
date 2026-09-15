#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    // Ensure a is smaller than b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << "Prime numbers between " << a << " and " << b << " are: ";

    for (int num = a + 1; num < b; num++) {
        bool isPrime = true;

        if (num <= 1)
            isPrime = false;
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}
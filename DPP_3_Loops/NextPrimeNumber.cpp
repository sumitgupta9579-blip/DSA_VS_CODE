#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 500) {
        cout << "Invalid Input";
        return 0;
    }

    int num = n + 1;

    while (true) {
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

        if (isPrime) {
            cout << num;
            break;
        }

        num++;
    }

    return 0;
}
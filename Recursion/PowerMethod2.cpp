#include <iostream>
using namespace std;

long long power(long long a, long long b) {

    // Base case
    if (b == 0)
        return 1;

    // Recursive call for b/2
    long long half = power(a, b / 2);

    // If b is even
    if (b % 2 == 0)
        return half * half;

    // If b is odd
    else
        return a * half * half;
}

int main() {

    long long a = 2;
    long long b = 10;

    cout << a << "^" << b << " = " << power(a, b);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int ans = (7-(n%7))%7;

    cout << "Minimum number to be added: " << ans;

    return 0;
}
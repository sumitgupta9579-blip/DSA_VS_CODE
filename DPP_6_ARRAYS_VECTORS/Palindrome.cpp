#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = n - 1;
    bool flag = true;

    while (i < j) {
        if (arr[i] != arr[j]) {
            flag = false;
            break;
        }

        i++;
        j--;
    }

    if (flag)
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
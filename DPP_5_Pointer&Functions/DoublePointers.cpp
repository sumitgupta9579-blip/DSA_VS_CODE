#include <iostream>
using namespace std;

// Function to change the pointer's target
void changeTarget(int **ptr, int *newAddress) {
    *ptr = newAddress;
}

int main() {
    int a = 10;
    int b = 20;

    int *p = &a;

    cout << "Before changing pointer:" << endl;
    cout << "*p = " << *p << endl;

    changeTarget(&p, &b);

    cout << "After changing pointer:" << endl;
    cout << "*p = " << *p << endl;

    return 0;
}
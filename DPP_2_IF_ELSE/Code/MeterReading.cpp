#include <iostream>
using namespace std;

int main() {
    int units;
    double bill, surcharge, total;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 300) {
        bill = (100 * 1.50) + (units - 100) * 2.50;
    }
    else {
        bill = (100 * 1.50) + (200 * 2.50) + (units - 300) * 4.00;
    }

    surcharge = bill * 0.15;
    total = bill + surcharge;

    cout << "Bill Amount = $" << bill << endl;
    cout << "Surcharge = $" << surcharge << endl;
    cout << "Total Bill = $" << total << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double m , d, t;
    cout << "Enter a value : ";
    cin >> m >> d >> t;
    double discounted_price = m-(d/100)*m;
    double final_price = discounted_price*(1+(t/100));
    cout<<final_price;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double mass , vel ;
    cout << "Enter a number: ";
    cin >> mass >> vel;
    double kinetic_energy = (1.0/2.0 )*mass*vel*vel;
    cout<<kinetic_energy;
    
    return 0;
}
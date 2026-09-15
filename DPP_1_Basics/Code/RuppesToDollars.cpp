#include <iostream>
using namespace std;

int main() {
    double rupees;
    cout<<"Enter an rupees amount :";
    cin>>rupees;
    double rupees_to_dollar = rupees/100;
    cout<<rupees_to_dollar;
    return 0;
}
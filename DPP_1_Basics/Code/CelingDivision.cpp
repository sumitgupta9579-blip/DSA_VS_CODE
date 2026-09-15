#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a number: ";
    cin >>a>>b;
    int Celling_Value =(a+b-1)/b;
    cout<<Celling_Value;

    
    return 0;
}
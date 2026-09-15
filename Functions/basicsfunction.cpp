#include<iostream>
using namespace std;
void Sumit(){
    cout<<"sumit "<<endl;
}
void arjun(){
    cout<<"arjun "<<endl;
    Sumit();
}
void Anu(){
    cout<<"Anu "<<endl;
    arjun();
}
void bhola(){
    cout<<"bhola "<<endl;
}
int main(){
    // bhola();
    // arjun();
    Anu();
    // Sumit();
}


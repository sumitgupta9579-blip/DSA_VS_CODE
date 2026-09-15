#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter an number :";
    cin>>n;
    if((n>=1000 && n<=9999) || (n<=-1000 && n>=-9999))cout<<"4 Digit number";
    else cout<<"Not a 4 digit number";
}
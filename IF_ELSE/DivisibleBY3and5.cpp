#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter an number :";
    cin>>n;
    if(n%3==0 || n%5==0) cout<<"Divisible by 3 or 5";
    else cout<<"Not Divisible by 3 or 5 ";
}
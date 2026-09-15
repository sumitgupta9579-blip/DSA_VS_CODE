#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int product(int a , int b){
    return a*b;
}
int mini(int a , int b){
    if(a>b) return b;
    else return a;
}
int main(){
    cout<<product(4,11)<<endl;
    cout<<max(51,70)<<endl;
    cout<<mini(464,545)<<endl;
    cout<<sqrt(5)<<endl;
    cout<<pow(2,7)<<endl;
    cout<<cbrt(8)<<endl;
    cout<<abs(-5)<<endl;
}   
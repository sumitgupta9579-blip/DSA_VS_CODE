#include<iostream>
using namespace std;
int hcf(int a , int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int GCD(int a , int b ){
    if(b==0) return a;
    return GCD(b,a%b);
}
int main(){
    int a ,b ;
    cout<<"Enter an first num :"<<endl;
    cin>>a;
    cout<<"Enter an second num :"<<endl;
    cin>>b;
    cout<<GCD(a,b);
    // cout<<hcf(a,b);
}
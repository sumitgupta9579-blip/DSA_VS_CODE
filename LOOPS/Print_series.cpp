#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter an number : ";
    cin>>n;
    int a =99 , d=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a-=d;
    }
}
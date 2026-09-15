#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter an number : ";
    cin>>n;
    int a =2;
    int d =3;
    int x = a+(n-1)*d;
    for(int i=a;i<=x;i+=d){
        cout<<i<<" ";
    }

}
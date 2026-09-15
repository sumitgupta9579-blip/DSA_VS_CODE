#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter an number : ";
    cin>>n;
    int a =1 , r =2 ;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=r;
    }

    //  nth term = a*r(n-1);

}
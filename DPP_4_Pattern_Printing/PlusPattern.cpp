#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number >=3 :";
    cin>>n;
    if(n<3) return n ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if( i==1 || i==(n/2)+1 || i==n ) cout<<"*";
            else if( j==1 || j==(n/2)+1 || j==n ) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
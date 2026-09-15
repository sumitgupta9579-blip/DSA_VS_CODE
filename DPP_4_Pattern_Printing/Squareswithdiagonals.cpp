#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter an number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n) cout<<"*";
            else if(j==1 || j==n) cout<<"*";
            else if(i==j || i+j==n+1) cout<<"*";
            else cout << " ";
        }
        cout<<endl;
    }
}
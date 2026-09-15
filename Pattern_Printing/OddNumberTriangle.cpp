#include<iostream>
using namespace std;
int main(){
    // int m;
    // cout<<"Enter an rows :";
    // cin>>m;
    int n;
    cout<<"Enter an rows :";
    cin>>n;
    // int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }

    
   
}
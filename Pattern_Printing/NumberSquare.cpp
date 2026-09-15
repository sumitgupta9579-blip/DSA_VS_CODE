#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an rows :";
    cin>>n;
    // int col;
    // cout<<"Enter an cols :";
    // cin>>col;


    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}
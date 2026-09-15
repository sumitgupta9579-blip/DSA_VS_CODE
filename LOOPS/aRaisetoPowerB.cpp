#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"Enter an number : ";
    cin>>base;
    int power;
    cout<<"Enter an number : ";
    cin>>power;
    int ans=1;

    // for(int i=1;i<=power;i++){
    //      if(base==1) break;
    //     ans*=base;
    // }
    // cout<<ans;
    if(base==0 && power==0) cout<<"Indeterminate Form";
    else cout<<ans;

    while (power!=0)
    {
        ans*=base;
        power--;
    }
    cout<<ans;
    
}
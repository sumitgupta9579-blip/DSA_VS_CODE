#include<iostream>
#include<cmath>
using  namespace std ;
int main(){
    int n ;
    cout<<"Enter an number : ";
    cin>> n;

    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }


    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         if(i!=n/i)cout<<n/i<<" ";
    //     }
    // }

    // int factors =0;

    bool flag = false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=true;
            // factors++;
            break;
        } 
    }
    // cout<<factors <<endl;
    // if(factors==1) cout<<"Neither Prime Nor Composite ";
    // else if(factors>=3) cout<<"Composite Number ";
    // else cout<<"Prime Number ";
    if(n==1) cout<<"Neither Prime nor Composite ";
    else if(flag==true) cout<<"Composite Number ";
    else cout<<"Prime Number ";
    
}
#include<iostream>
using namespace std;
int fct(int n ){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n ,int r){
    return fct(n)/(fct(r)*fct(n-r)) ;
}
int main(){
    int n  ;
    cout<<"Enter an number +: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
    
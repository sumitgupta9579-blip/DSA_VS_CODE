#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number : ";
    cin>>n;

    int nsp=n-1 , nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        cout<<endl;
        nsp--;
        nst+=2;
    }
    nst=2*n-3,nsp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        cout<<endl;
        nsp++;
        nst-=2;
    }
}
#include<iostream>
using namespace std;
int pow(int n , int m ){
    if(m==0) return 1;
    return n*pow(n,m-1);
   
}
int main(){
    int n ,m ;
    cout<<"Enter an base :"<<endl;
    cin>>n;
    cout<<"Enter an Power :"<<endl;
    cin>>m;
    cout<<pow(n,m);
}
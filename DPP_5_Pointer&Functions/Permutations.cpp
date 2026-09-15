#include<iostream>
using namespace std;
int fct(int n ){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int permutation(int n , int r){
    return fct(n)/fct(n-r);
}
int main(){
    int n=5 , r=2;
    cout<<permutation(n,r);
   
}
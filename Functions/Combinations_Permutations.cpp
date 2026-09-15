#include<iostream>
using namespace std;
int fct(int n ){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n , r ;
    cout<<"Enter an n and r as input : ";
    cin>>n>>r;
    cout<<"Combination :"<<fct(n)/(fct(r)*fct(n-r))<<endl;
    cout<<"Permutations :"<<fct(n)/(fct(n-r));
}
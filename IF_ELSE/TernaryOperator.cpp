#include<iostream>
using namespace std ;
int main(){
    int x ;
    cin>>x;
    // (x%2==0 )? cout<<"Even" : cout<<"odd";
    // cout<<((x%2==0)?"Even":"odd"); 

    int z = (x>12) ? x-4 :x*4;
    cout<<z;

    int y = (x++>12) ? x-4 :x*4;
    cout<<y;
}
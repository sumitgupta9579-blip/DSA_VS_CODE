#include<iostream>
using namespace std ;
int main(){
   int x , y, z ;
    cout<<"Enter an number :";
    cin>>x;
    cout<<"Enter an number :";
    cin>>y;
    cout<<"Enter an number :";
    cin>>z;
    // if(x>=y && x>=z) cout<<x<<" Greatest number ";
    // else if(y>=x && y>=z) cout<<y<<" Greatest number ";
    // else cout<<z<<" Greatest number ";

    if(x>y){
        if(x>z) cout<<x<<" is greatest number ";
        else cout<<z<< " is greatest ";
    }
    else{
        if(y>z) cout<<y<<" is greatest ";
        else cout<<z<< " is greatest ";
    }
}
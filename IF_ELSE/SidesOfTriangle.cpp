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
    if(x+y>z && y+z>x && z+x>y) cout<<"Triangle is valid";
    else cout<<"Invalid sides of triangle";
    
}
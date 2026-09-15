#include<iostream>
using namespace std ;
int main(){
    int x , y ;
    cout<<"Enter two Number ";
    cin>> x , y ;
    if(x%2!=0  && y%2!=0) cout<<"Both are odd ";
    else if (x%2!=0  || y%2!=0) cout<<"One is odd";
    else cout<<"None is odd";
}

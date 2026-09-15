#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"Enter two integers :";
    cin>> x >> y;
    if(x*y >0) cout<<"Product is Positive ";
    else if (x*y<0) cout<<"Product is Negative ";
    else cout<<"Product is Zero";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int sides , angle ;
    cout<<"Enter an sides and angle of a polygon ";
    cin>> sides >> angle ;
    int S = (sides-2)*180;
    if(S==angle) cout<<"Valid Polygon ";
    else cout<<"Invalid Polygon";
}
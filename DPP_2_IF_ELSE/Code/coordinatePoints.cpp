#include<iostream>
using namespace std ;
int main(){
    float x1 ,y1 ;
    cout<<"Enter an A Cordinates points :";
    cin>> x1 >> y1 ;
    float x2 ,y2 ;
    cout<<"Enter an B Cordinates points :";
    cin>> x2 >> y2 ;
    float x3 ,y3 ;
    cout<<"Enter an C Cordinates points :";
    cin>> x3 >> y3 ;

    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)) cout<<"Points are Collinear ";
    else cout<<"Points are non-collinear";
}
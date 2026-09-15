#include<iostream>
using namespace std;
int main(){
    int num1 , num2 ;
    cout<<"Enter an  first number :";
    cin>>num1;
    cout<<"Enter an  second number :";
    cin>>num2;
    if(num1>0 && num2>0) cout<<"Points are in first Qudrant";
    else if (num1<0 && num2>0) cout<<"Points are in second Quadrant";
    else if(num1<0 && num2<0) cout<<"Points are in third Quadrant";
    else if(num1>0 && num2<0) cout<<"Points are in fourth Quardrant";
    else if(num1==0 && num2==0) cout<<"Points are at Origin";
    else cout<<"Invalid input";
    
}
#include<iostream>
using namespace std;
int main(){
    float p , r , t;
    cout<<"Enter principle value : ";
    cin>>p;
    cout<<"Enter rate of interest : ";
    cin>>r;
    cout<<"Enter time of period : ";
    cin>>t;
    float si =(p*r*t)/100;
    cout<<si;

    
}
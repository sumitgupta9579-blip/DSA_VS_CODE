#include<iostream>
using namespace std ;
int main(){
    char ch ;
    cout<<"Enter an alphabet : ";
    cin>>ch;
    if(int(ch)>=65 && int(ch)<=95) cout<<"Capital Letters";
    else cout<<"Small Letters";
}
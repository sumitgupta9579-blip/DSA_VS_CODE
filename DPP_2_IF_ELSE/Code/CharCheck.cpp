#include<iostream>
using namespace std ;
int main(){
    char ch ;
    cout<<"Enter an  character :";
    cin>>ch;
    if(int(ch)>=48 && int(ch)<=57) cout<<"Digits (0-9)";
    else if(int(ch)>=65 && int(ch)<=90) cout<<"Upper Case Alphabet(A-Z)";
    else if (int(ch)>=97 && int(ch)<=122) cout<<"LowerCase Aplhabet(a-z)";
    else if(int(ch)>=32 && int(ch)<=47 || int(ch)>=58 && int(ch)<=64 || int(ch)>=91 && int(ch)<=96 || int(ch)>=123 && int(ch)<=126) cout<<"Special Character Symbol :";
    else cout<<"Invalid Input";
}
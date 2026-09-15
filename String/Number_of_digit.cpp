#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number :";
    cin>>n;

    string s =to_string(n);
    if(n>0) cout<<s.length()<<endl;
    else cout<<s.length()-1<<endl;
}
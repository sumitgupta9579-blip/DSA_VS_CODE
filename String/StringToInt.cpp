#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number :";
    cin>>n;

    string s =" ";
    while (n!=0)
    {
        int last =n%10;
        char ch = last +48;
        s.push_back(ch);
        n/=10;
    }
    cout<<s<<endl;

    
}
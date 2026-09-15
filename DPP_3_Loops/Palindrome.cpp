#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number : ";
    cin>>num;
    int original=num;
    int rev=0;
    int i=1;
    while(num>0){
        rev=rev*10;
        rev+=num%10;
        num/=10;
    }
    if(rev==original) cout<<"Palindrome number ";
    else cout<<"Not Palindrome number ";
}
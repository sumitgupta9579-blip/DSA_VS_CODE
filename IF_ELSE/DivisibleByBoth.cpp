#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter an number :";
    cin>>num;
    if(num%3==0 && num%5==0) cout<<"Divisible by both 3 and 5";
    else if(num%3==0) cout<<"Divisible by 3 only ";
    else if (num %5==0) cout<<"Divisible by 5 only ";
    else cout<<"Not divisible by both 3 and 5";
}
#include<iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter an number :";
    cin>>num;
    if(num%3==0){
        if(num%5==0){
            cout<<"Divisible by both 3 and 5";
        }
        else{
            cout<<" Not Divisible by both 3 and 5";
        }
    }
    else {
        cout<<" Not Divisible by both 3 and 5";
    }
}
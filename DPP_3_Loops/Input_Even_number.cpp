#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter an number :";
    cin>>num1;
    int num2;
    cout<<"Enter an number :";
    cin>>num2;
    for(int i=num1+1;i<num2;i++){
        if(i%2==0) cout<<i<<endl;
    }
    
}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number :";
    cin>>num;
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0) {
            sum=sum+i;
        }
    }
    if(sum==num) cout<<"Perfect Number";
            else cout<<"Not a Perfect Number";
}
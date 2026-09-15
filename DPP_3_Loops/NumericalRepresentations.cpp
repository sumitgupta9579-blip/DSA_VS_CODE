#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        if(i%10==2 || i%10==7){
            cout<<i<<" ";
        }
        else if((i/10)%10==2 || (i/10)%10==7){
            cout<<i<<" ";
        }
        else if((i/100)%10==2 || (i/100)%10==7){
            cout<<i<<" ";
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number :";
    cin>>num;
    int pro =1;
    int i=1;
    while(i<=num){
        pro*=num%10;
        num=num/10;
        i++;
    }
    cout<<pro;
}
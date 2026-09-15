#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number :";
    cin>>num;
    int sum =0;
    int i=1;
    while(i<=num){
        sum=sum+i;
        i++;
    }
    cout<<"The sum of given all natural number is :"<<sum;
}
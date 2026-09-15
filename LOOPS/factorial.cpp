#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number : ";
    cin>>num;
    // int fact = 1;
    long long fact = 1;
    while (num!=0)
    {
        fact*=num;
        num--;
    }
    cout<<fact;
}
#include<iostream>
using namespace std;
int main(){
    int x=7;
    int y=7;

    // cout<<&x<<endl;
    // cout<<&y<<endl;

    int* p1=&x;
    int* p2=&x;

    cout<<p1 <<" "<<&p1<<endl;
    cout<<p2 <<" "<<&p2<<endl;

    int a=7;
    int* p=&a;
    cout<<a<<endl;
    *p=70;
    cout<<*p<<endl;
}
#include<iostream>
using namespace std;
int sortTwo(int &a , int &b){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
}
int main(){
    int a =55, b =6;
    sortTwo(a ,b);
    cout<<a <<" "<<b;
}
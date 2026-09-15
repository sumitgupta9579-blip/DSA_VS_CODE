#include<iostream>
using namespace std;
int max(int a , int b ,int c){
    if(a>b && a>c) return a;
    else if(b>c && b>a) return b;
    else return c;
}
int main(){
    cout<<max(12,45,9);
}
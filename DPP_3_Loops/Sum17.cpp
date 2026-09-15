#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=1000;i++){
        int a=i%10;
        int b=(i/10)%10;
        int c=(i/100)%10;
        int d=(i/1000)%10;
        if(a+b+c+d==17) cout<<i<<" ";
    }
}
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=1000;i++){
        // int a=i%10;
        // int b=(i/10)%10;
        // int c=(i/100)%10;
        // int d=(i/1000)%10;
        int num = i;
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if(sum==23) break;
        else cout<<i<<" ";
    }
}
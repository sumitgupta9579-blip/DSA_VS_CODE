#include<iostream>
using namespace std;
int reverse(int n ){
    int rev=0;
    while(n>0){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    return rev;
}
int main(){
    cout<<reverse(1234);
}
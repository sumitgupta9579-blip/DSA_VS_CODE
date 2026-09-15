#include<iostream>
using namespace std;
int sumFirstandLast(int n){
    int last = n%10;
    int first;
    while(n>=10){
        n/=10;
    }
    first=n;
    return first+last;
}
int main(){
    cout<<sumFirstandLast(4529);
}
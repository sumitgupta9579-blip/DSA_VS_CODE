#include<iostream>
using namespace std;
void Evennum(int start , int end){
    for(int i=start;i<=end;i++){
        if(i%2==0) cout<<i<<" ";
    }
}
int main(){
    Evennum(10,15);
}
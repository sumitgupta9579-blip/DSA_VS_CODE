#include<iostream>
using namespace std;
int main(){
    // 0 1 1 2 3 5
    int num;
    cout<<"Enter an number :";
    cin>>num;
    int k=0 ,j=1;
    cout<<k<<" "<<j<<" ";
    for(int i=1;i<=num-2;i++){
        int sum =k+j;
        k=j;
        j=sum;
        cout<<sum<<" ";
    }
}
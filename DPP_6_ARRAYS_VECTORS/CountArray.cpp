#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,8,1,9};
    int tar =6;
    int n =sizeof(arr)/4;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]<tar){
            count++;
        }
    }
    cout<<count;
}
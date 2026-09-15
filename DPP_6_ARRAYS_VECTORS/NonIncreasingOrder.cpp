#include<iostream>
using namespace std;
int main(){
    int arr[]={8,5,5,2};
    int n = sizeof(arr)/4;
    bool flag = true;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"true";
    else cout<<"false";
}
#include<iostream>
using namespace std;
int main(){
    int arr[]={10, 5, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even = 0 , odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    int diff = even - odd ;
    if(diff<0) diff*=-1;
    cout<<diff;
}
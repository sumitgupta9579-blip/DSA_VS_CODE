#include<iostream>
using namespace std;
int main(){
    int arr[]={10, 20, 15, 30, 28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = INT16_MAX;
    for(int i=0;i<n;i++){
        int diff = arr[i+1]-arr[i];
        if(diff<0) diff*=-1;
        if(diff<min) min=diff;
    }
    cout<<min<<" ";
}
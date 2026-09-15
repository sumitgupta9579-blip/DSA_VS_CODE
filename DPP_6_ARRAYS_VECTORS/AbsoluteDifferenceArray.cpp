#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int brr[n];
    vector<int> brr(n);
    int first=arr[0];
    for(int i=0;i<n;i++){
        int diff;
        if(i==n-1) diff = arr[i]-first;
        else {
            diff = arr[i+1]-arr[i];
        }
        if(diff<0) diff*=-1;
        brr[i]=diff;
    }
    for(int ele :brr){
        cout<<ele<<" ";
    }
}
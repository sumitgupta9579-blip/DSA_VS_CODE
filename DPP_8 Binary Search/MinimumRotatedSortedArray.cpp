#include<iostream>
#include<vector>
using namespace std;
int minimum(vector<int>& arr){
    int n = arr.size();
    int l = 0 , r = n-1 ;
    while(l<r){
        int mid = l +(r-l)/2;
        if(arr[mid]>arr[r]) l = mid+1;
        else r = mid;
    }
    return arr[l];
}
int main(){
    vector<int> arr = {3,4,5,1,2};
    cout<<minimum(arr);
}
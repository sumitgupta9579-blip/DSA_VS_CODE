#include<iostream>
#include<vector>
using namespace std;
int rotate(vector<int>& arr){
    int n = arr.size();
    // int min = arr[0] , minidx = 0;
    int low = 0 , high  = n-1;
    while(low < high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[high]){
            low = mid + 1;
        }
        else{
            high = mid;;
        }
    }
    return low ;
}
int main(){
    vector<int> arr = {15,18,2,3,6,12};
    cout<<rotate(arr);
}
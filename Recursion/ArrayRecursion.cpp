#include<iostream>
#include<vector>
using namespace std ;
void printRec(vector<int>& arr , int idx){
    if(idx == arr.size()) return;
    cout<<arr[idx]<<" ";
    printRec(arr,idx+1);
}
int main(){
    vector<int> arr = {5,8,2,45,94,78,14,35,-45,17};
    printRec(arr,0);
}
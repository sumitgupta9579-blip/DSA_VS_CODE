#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr ={7,4,9,1,3,6,2,5};
    int n = arr.size();
    print(arr);
    for(int i=0;i<n-1;i++){
        int min = INT16_MAX , min_idx=i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j]; 
                min_idx=j; 
            } 
        }
        swap(arr[i],arr[min_idx]);
    }
    print(arr);
}
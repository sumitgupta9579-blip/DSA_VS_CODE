#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int> &arr ){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={5,4,3,2,1};
    int n = arr.size();
    print(arr);
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
         print(arr);
    }
    
}
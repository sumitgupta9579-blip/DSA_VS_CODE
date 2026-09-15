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
    vector<int> arr={9,5,8,2,7,3,4,6};
    int n = arr.size();
    print(arr);
    for(int i=1;i<=n-1;i++){
        int j=i;
        while (j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        } 
    } 
    print(arr);
    
    
}
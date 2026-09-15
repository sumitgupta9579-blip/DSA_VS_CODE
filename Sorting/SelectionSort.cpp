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
        int max=INT16_MIN , max_idx=0;
        for(int j=i;j<n-1;j++){
            if(arr[j]>max){
                max=arr[j];
                max_idx=j;
            }
        }
        swap(arr[i],arr[max_idx]);
    }
    print(arr);
}
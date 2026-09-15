#include<iostream>
using namespace std;
int main(){
    int arr[]={0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while (j<n){
        arr[j]=0;
        j++;
    }
    for(int ele :arr){
        cout<<ele<<" ";
    }

}
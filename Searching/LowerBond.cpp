#include<iostream>
using namespace std ;
int main(){
    int arr[]={1,3,5,7,9,10};
    int tar = 8;
    int n=sizeof(arr)/4;
    int low = 0 , high = n-1 ,lower_bound = 0;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]<tar) low = mid + 1 ;
        else{
            lower_bound=mid;
            high=mid-1;
        }
        
    }
}
#include<iostream>
using namespace std ;
int main(){
    int arr[]={-4,-3,-3,1,1,1,1,1,1,2,4,4,8,9};
    int tar = 1;
    int n=sizeof(arr)/4;
    int low = 0 , high = n-1;
    int temp;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>tar) high = mid - 1 ;
        else if(arr[mid]<tar) low = mid + 1 ;
        else {
            temp=arr[mid];
            if(arr[mid]==arr[mid+1]) low=mid+1;
            else{
                cout<<arr[mid]<<" last occurence "<<mid;
                return arr[mid];
            }
        } 
    }
    
}
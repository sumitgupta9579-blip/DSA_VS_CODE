#include<iostream>
using namespace std ;
int main(){
    int arr[]={179,124,120,99,87,79,44,22,19,-4};
    int tar = 44;
    int n=sizeof(arr)/4;
    int low = 0 , high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]<tar) high = mid + 1 ;
        else if(arr[mid]>tar) low = mid - 1 ;
        else {
            cout<<arr[mid]<<" is found at "<<mid;
            return arr[mid];
        } 
    }
    
}
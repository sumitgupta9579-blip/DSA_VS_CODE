#include<iostream>
using namespace std ;
int main(){
    int arr[]={-30,-20,-10,10,20,30,40,50,60,70,80};
    int tar = 60;
    int n=sizeof(arr)/4;
    int low = 0 , high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>tar) high = mid - 1 ;
        else if(arr[mid]<tar) low = mid + 1 ;
        else {
            cout<<arr[mid]<<" is found at "<<mid;
            return arr[mid];
        } 
    }
    
}
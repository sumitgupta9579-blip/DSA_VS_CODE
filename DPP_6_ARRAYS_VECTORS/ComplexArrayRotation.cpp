#include<iostream>
using namespace std;
void rev( int arr[], int i , int j){
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j] ;
        arr[j] = temp;
        i++;
        j--;
    }
    
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/4;
    int x = 2 , y = 1;
    // right-rotation
    rev(arr,0,n-1);
    rev(arr,0,x-1);
    rev(arr,x,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // left rotation
    rev(arr,0,y-1);
    rev(arr,y,n-1);
    rev(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
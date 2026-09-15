#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    int m = sizeof(arr)/sizeof(arr[0]) , n = sizeof(arr[0])/sizeof(arr[0][0]);
    int i=0 , j=n-1 , count =0;
    while(i<m && j>=0){
        if(arr[i][j]<0){
            count+=m-i;
            j--;
        }
        else {
            i++;
        }
    }
    cout<<count;

}
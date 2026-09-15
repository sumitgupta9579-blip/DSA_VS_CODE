#include<iostream>
using namespace std;
bool check(int arr[3][4] ,int m , int n){
    for(int i=1;i<m;i++){
        for(int j=i;j<n;j++){
            if(arr[i][j]!=arr[i-1][j-1]) return false;
        }
    }
    return true;
}
int main(){
    int arr[3][4]={{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};
    int m = sizeof(arr)/sizeof(arr[0]) , n = sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<check(arr, m ,n);

}
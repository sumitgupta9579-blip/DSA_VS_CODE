#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = sizeof(arr)/sizeof(arr[0]) , n = sizeof(arr[0])/sizeof(arr[0][0]);
    int row_arr[m] , col_arr[n];
    
    for(int i=0;i<m;i++){
        int row_min=INT16_MAX;
        for(int j=0;j<n;j++){
            if(arr[i][j]<row_min) row_min=arr[i][j];  
        }
        row_arr[i]=row_min;
    }

    for(int i=0;i<m;i++){
        cout<<row_arr[i]<<" ";
    }

    cout<<endl;

    for(int j=0;j<n;j++){
        int col_max=INT16_MIN;
        for(int i=0;i<m;i++){
            if(arr[i][j]> col_max) col_max=arr[i][j]; 
        }
        col_arr[j]=col_max;
    }

    for(int i=0;i<n;i++){
        cout<<col_arr[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            if(arr[i][j] == row_arr[i] &&
               arr[i][j] == col_arr[j]) {

                cout << arr[i][j];
                return 0;
            }
        }
    }

    cout << -1;


}
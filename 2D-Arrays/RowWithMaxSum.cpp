#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][4] ={{5,8,1,2},{9,9,4,4},{7,0,9,5}};
    int maxRow =-1 , maxSum =INT16_MIN;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxRow=i;
        }
    }
    cout<<maxRow<<" "<<maxSum;
}
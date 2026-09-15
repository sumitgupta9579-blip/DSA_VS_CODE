#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][4]={{9,4,8,4},{6,1,1,51},{2,2,3,6}};
    vector<int> v;
    for(int i=0;i<3;i++){
        int max = 0;
        for(int j=0;j<4;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        v.push_back(max);
    }
    int min=INT16_MAX;
    for(int ele:v){
        if(ele<min){
            min=ele;
        }
    }
    cout<<min;
}
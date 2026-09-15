#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,9,7,2};
    int n = sizeof(arr)/4;
    int first_max = INT16_MIN , sec_max = INT16_MIN , third_max = INT16_MIN;
    for(int i=0;i<n;i++){
        if(n<3) return -1;
        if(arr[i]>first_max){
            third_max=sec_max;
            sec_max=first_max;
            first_max=arr[i];
        }
        else if(arr[i]>sec_max){
            third_max=sec_max;
            sec_max=arr[i];
        }
        else if (arr[i]>third_max){
            third_max=arr[i];
        }
    }
    cout<<third_max<<" ";

}
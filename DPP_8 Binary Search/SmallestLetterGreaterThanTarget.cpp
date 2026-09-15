#include<iostream>
#include<vector>
using namespace std;
char nextgreater(vector<char>& arr , char tar){
    int n = arr.size();
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] > tar){
            high = mid-1;
        }
        else{
            low = mid + 1 ;
        }
    }
    return arr[low % n];
}
int main(){
    vector<char> arr = {'c','f','j'};
    char tar = 'a';
    cout<< nextgreater(arr , tar) ;
}
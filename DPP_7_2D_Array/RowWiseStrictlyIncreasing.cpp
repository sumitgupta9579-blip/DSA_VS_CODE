#include<iostream>
using namespace std;
bool check_order(int arr[2][3]){
    // bool flag = true;
    for(int i=0;i<2;i++){
        for(int j=0;j<3-1;j++){
            if(arr[i][j]>=arr[i][j+1]) return false;
        }
    }
    return true;

}
int main(){
    int arr[2][3]={{1, 5, 9}, {2, 3, 4}};
    cout<<check_order(arr);

}
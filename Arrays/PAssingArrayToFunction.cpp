#include<iostream>
using namespace std;
void change(int x[]){
    x[0]=20;
}
int main(){
    int x[]={6,1,2};
    change(x);
    cout<<x[0]<<endl;
    // int arr[] ={74,96,91,57,60,35,78,15};
    // int n =sizeof(arr)/4;
    

}
#include<iostream>
using namespace std;
int main(){
    int table ;
    cout<<"Enter an num : ";
    cin>>table;
    for(int i=1;i<=10;i++){
        cout<<table<< " x "<<i<<" = "<<i*table<<endl;
    }
}
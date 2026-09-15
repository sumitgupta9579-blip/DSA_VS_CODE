#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter an rows :";
    cin>>row;
    int col;
    cout<<"Enter an cols :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
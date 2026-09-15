#include<iostream>
using namespace std;
int main(){
    int marks[] ={74,96,91,57,60,35,78,15};
    int tar=60;
    bool flag=false;
    int n =sizeof(marks)/sizeof(int);
    for(int i=0;i<n;i++){
        flag=true;
        break;
    }
    if(flag==true){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }
}
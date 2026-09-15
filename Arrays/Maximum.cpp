#include<iostream>
using namespace std;
int main(){
    int marks[] ={74,96,91,57,60,35,78,15};
    int n =sizeof(marks)/sizeof(int);
    int max=marks[0];
    for(int i=0;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
        }
    }
    cout<<max;
}
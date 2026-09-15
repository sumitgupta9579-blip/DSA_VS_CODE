#include<iostream>
using namespace std;
int main(){
    int marks[] ={74,96,91,57,60,35,78,15};

    cout<<sizeof(marks)/sizeof(marks[0])<<endl;
    cout<<sizeof(marks)/sizeof(int)<<endl;

    cout<<marks[2];
    marks[2]=23;
    cout<<marks[2];

}
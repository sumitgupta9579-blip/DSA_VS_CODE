#include<iostream>
using namespace std;
// Pass by reference

// void swap(int &a , int &b){
//     int temp =a;
//     a=b;
//     b=temp;
// }

// Pass by pointer

void swap(int* a , int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5, b=9;
    // swap(a,b);
    swap(&a,&b);
    cout<<a<<" "<<b;
}
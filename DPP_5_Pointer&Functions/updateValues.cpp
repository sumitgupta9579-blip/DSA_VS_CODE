#include<iostream>
using namespace std;
void update(int* a , int*b){
    int temp1 =*a;
    int temp2=*b;
    *a=temp1+temp2;
    *b=(temp1-temp2);
    if(*b<0) *b*=-1;
}
int main(){
    int a =4;
    int b=5;
    update(&a,&b);
    cout<<a<<" "<<b;
    
}
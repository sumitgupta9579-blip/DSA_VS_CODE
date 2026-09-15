#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){ 
    cout<<"Good Morning"<<endl;
}
void fun(int x=7){  
    // default parameter 
    cout<<"Good Morning"<<endl;
}
void fun(int x,int y){
    cout<<"Kaise ho sumit"<<endl;
}
int main(){
    // fun();
    // fun(7);
    // fun(5,4);
}
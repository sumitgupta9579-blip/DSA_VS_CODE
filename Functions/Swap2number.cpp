#include<iostream>
using namespace std;
void swap(int& x , int& y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=10;
    int y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    // Method-1 using extra variable (temp)

    // int temp=x;
    // x=y;
    // y=temp;
    
    // Method-2 addition subtraction

    x=x+y;
    y=x-y;
    x=x-y;

    // cout<<x<<endl;
    // cout<<y<<endl;

    // Method -3 Built in function

    // swap(x,y);
    // cout<<x<<" "<<y<<endl;

    // Method - 4 XOR operator
    x=x^y;
    y=x^y;
    x=x^y;

    // cout<<x<<endl;
    // cout<<y<<endl;

    // Method - 5 one line mathematical operations


}
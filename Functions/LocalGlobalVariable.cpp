#include<iostream>
using namespace std;
// Global variable
int x=10;
void change(){
    x=45;
}
int main(){
    int x=80; 
    cout<<x<<endl;
    change();
    // Local variable
    cout<<x<<endl;
}
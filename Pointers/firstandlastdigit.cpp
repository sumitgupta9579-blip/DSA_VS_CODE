#include<iostream>
using namespace std;
void digit(int n,int* ptr){
    int count =0;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    *ptr=count;
}
int main(){
    int n;
    cin>>n;
    int c =0;
    digit(n,&c);
    cout<<c;

}
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number :";
    cin>> num;
    int Nnum;
    if(num>0) Nnum=num-293;
    else Nnum=num+293;
    int rev=0;
    while (Nnum!=0)
    {
        int last = Nnum%10;
        rev=rev*10+last;
        Nnum=Nnum/10;
        
    }
    cout<<rev<<endl;

}
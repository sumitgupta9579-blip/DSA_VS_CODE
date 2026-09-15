#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number : ";
    cin>>num;
    int rev=0;
    int sum=0;
    while (num!=0)
    {
        int last = num%10;
        rev=rev*10+last;
        // rev=rev+last;
        sum=sum+last;
        num=num/10;
        
    }
    cout<<rev<<endl;
    cout<<sum;
   
}
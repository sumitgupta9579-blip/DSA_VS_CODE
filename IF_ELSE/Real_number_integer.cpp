#include<iostream>
using namespace std ;
int main(){
   float x ;
   cout<<"Enter your number : " ;
   cin>>x;
   if(int(x)==x){
    cout<<"Given number is Integer " ;
   }
   else{
    cout<<"Given number is not Integer ";
   }
}
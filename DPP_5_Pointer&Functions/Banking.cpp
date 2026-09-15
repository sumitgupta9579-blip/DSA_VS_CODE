#include<iostream>
using namespace std;
double balance =0.0;
int deposit(double amount){
    return balance+=amount;
}
int withdraw(double amount){
    return balance-=amount;
}
int main(){
    cout<<balance<<endl;
    deposit(500);
    withdraw(200);
    cout<<balance;

}
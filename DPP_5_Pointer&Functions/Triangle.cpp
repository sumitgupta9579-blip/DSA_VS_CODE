#include<iostream>
#include<cmath>
using namespace std;
int hypo(int base , int per){
    float hypo = sqrt(base*base + per*per);
    return hypo;
}
int main(){
    int base =3;
    int per =5;
    cout<<hypo(base,per);
}
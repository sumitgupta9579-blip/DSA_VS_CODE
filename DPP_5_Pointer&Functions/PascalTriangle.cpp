#include<iostream>
using namespace std;
int fct(int n ){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n , int r){
    return fct(n)/(fct(r)*fct(n-r));
}
int main(){
    int n=4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
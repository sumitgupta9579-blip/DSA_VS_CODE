#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string s ="Sumit Gupta";
    int n =s.length();
    for(int i=0;i<n;i++){
        if(i%2==0) s[i]='a';
    }
    for(char ch:s){
        cout<<ch;
    }
}
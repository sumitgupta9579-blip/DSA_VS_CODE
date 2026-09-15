#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string s ="Raghav Garg";
    int n =s.length();
    int i=0 ,j=n/2;
    while (i<j)
    {
        swap(s[i],s[j]);
    }
    for(char ch:s){
        cout<<ch;
    }
    
}
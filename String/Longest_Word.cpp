#include<iostream>
using namespace std;
int main(){
    string str = "Arjun is the smallest boy";
    int n = str.length();
    int max_len = 0 , len = 0;
    int i = 0 , j = 0;
    string ans = "";
    while(j<n){
        if(str[j]!=' ') j++;
        else{
            len=j-i;
            if(len>max_len) {
                max_len=len;
                ans=str.substr(i,len);
            }
            i=j;
            while (i<n && str[i]==' ')
            {
                i++;
                j++;
            }
        }

    }
    cout<<max_len<<" "<<ans<<endl;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str = "geeksforgeeks";
    int n = str.length();
    vector<int> freq(26,0);
    for( char ch :str){
        int idx =ch-97;
        freq[idx]++;   
    }
    for(int i=0;i<26;i++){
        if(freq[i]==1){
            cout<<(char)(i+97)<<" ";
            break;
        }
    }
    cout<<"$";

}
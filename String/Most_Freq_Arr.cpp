#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str = "testsample";
    int n = str.length();
    vector<int> freq(26,0);
    for( char ch :str){
        int idx =ch-97;
        freq[idx]++;   
    }
    int maxfreq=0;
    for(int i=0;i<26;i++){
        maxfreq=max(freq[i],maxfreq);
    }
    for(int i=0;i<26;i++){
        if(freq[i]==maxfreq)
            cout<<(char)(i+97)<<" ";
    }

}
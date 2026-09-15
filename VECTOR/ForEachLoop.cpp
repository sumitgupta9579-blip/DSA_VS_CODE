#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v={4,3,8,2,9};
    // sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());

    // reverse(v.begin()+1,v.end());
    // sort(v.begin(),v.end()-1);
    
    for(int ele:v){
        cout<<ele<<" ";
    }
}
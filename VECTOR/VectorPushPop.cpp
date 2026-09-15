#include<iostream>tr
#include<vector>
using namespace std;

int main(){
    vector<int> v(7);
    v.push_back(10);
    cout<<v.size()<<" "<<v.capacity()<<endl;

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }
}
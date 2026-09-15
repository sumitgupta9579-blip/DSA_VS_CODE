#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Vector is pass by value and array is pass by reference
// void change(vector<int>v){
//     v[2]=99;
// }

void change(vector<int>& v){
    v[2]=99;
}
int main(){
    vector<int> v={4,3,8,2,9,1,5,7};
    change(v);
    cout<<v[2]<<endl;
}

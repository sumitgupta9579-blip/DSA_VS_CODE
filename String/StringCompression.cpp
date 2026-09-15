// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string str = "aaaazzcccdaa";
//     int n = str.length();
//     int len = 0;
//     int i = 0 , j = 0;
//     vector<char> ans;
//     while(j<n){
//         if(str[i]==str[j]) j++;
//         else{
//             len=j-i;
//             ans.push_back(str[i]);
//             if(len != 1) ans += to_string(len);
//             i=j;
//         }

//     }
//     int len = j-i;
//     ans.push_back(str[i]);
//     if(len!=1) ans += to_string(len);

//     vector<char> ans2;
//     for(char ch:ans) ans2.push_back(ch);
//     str = ans2;
//     return s.size();
// }
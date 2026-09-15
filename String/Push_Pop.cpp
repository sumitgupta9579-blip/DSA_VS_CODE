#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "Shubham";

    // Push one character at the back
    s.push_back('B');
    // s.push_back('o');
    // s.push_back('y');

    cout << "After push_back: " << s << endl;

    // Pop one character from the back
    s.pop_back();

    cout << "After pop_back: " << s << endl;

    sort(s.begin(),s.end());
    cout<<s<<endl;
    reverse(s.begin()+1,s.end()-1);
}
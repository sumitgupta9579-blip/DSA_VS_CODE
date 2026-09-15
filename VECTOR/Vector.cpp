#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr(8, -1);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << "\nSize = " << arr.size() << endl;

    arr.push_back(5);
    arr.push_back(14);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << "\nSize = " << arr.size() << endl;

    arr.pop_back();

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << "\nSize = " << arr.size() << endl;

    return 0;
}
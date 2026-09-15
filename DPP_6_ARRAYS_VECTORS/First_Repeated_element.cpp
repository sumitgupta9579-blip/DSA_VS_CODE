#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / 4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<"First Repeated ele form left side is :"<<arr[i];
    //             return 0;
    //         }
    //     }
    // }

    int freq[100001] = {0};

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > 1)
        {
            cout << arr[i];
            return 0;
        }
    }

    cout << -1;
}
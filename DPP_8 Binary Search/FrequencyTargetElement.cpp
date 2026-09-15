#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int tar) {
    int low = 0, high = arr.size() - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == tar) {
            first = mid;
            high = mid - 1;   // search on left side
        }
        else if (arr[mid] > tar) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return first;
}

int lastOccurrence(vector<int>& arr, int tar) {
    int low = 0, high = arr.size() - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == tar) {
            last = mid;
            low = mid + 1;    // search on right side
        }
        else if (arr[mid] > tar) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return last;
}

int frequencyCount(vector<int>& arr, int tar) {
    int first = firstOccurrence(arr, tar);
    int last = lastOccurrence(arr, tar);

    if (first == -1) {
        return 0;             // target not present
    }

    return last - first + 1;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
    int tar = 2;

    cout << frequencyCount(arr, tar);

    return 0;
}
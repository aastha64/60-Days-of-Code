#include <bits/stdc++.h>
using namespace std;

int Search(vector<int> &arr, int n, int k){
    // using binary search we are finding an elememt k in the array which is rotated at some position (we don't know)
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == k){
            return mid;
        }

        // check whether the left half is sorted or not
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        // check whether the right half is sorted or not if left half is not sorted
        else{
            if(arr[mid] <= k && k <= arr[high]){
                low =mid + 1;
            }

            else{
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9;
    int k = 1;
    int ans = Search(arr, n, k);
    if(ans == -1)
    {
        cout << "Target is not present in the array" << "\n";
    }
    else{
        cout << "The target is present in the array at index" << " " << ans << "\n";
    }
    return 0;
}
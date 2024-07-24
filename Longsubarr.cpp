#include <bits/stdc++.h>
using namespace std;

int longest_subarray(vector<int> &arr ,  long long k){
    int n = arr.size();
    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            long long sum = 0;
            for (int K = i; K <= j; K++) {
                sum += a[K];
            }

            if (sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
    
}

int main(){
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = longestSubarray(arr, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
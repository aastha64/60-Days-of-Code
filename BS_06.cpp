#include <bits/stdc++.h>
using namespace std;
// LeetCode Problem 875 based on binary searching
int TotalBananas(int n, int arr(), int h){
    int t = 0;
    int k; int sum = 0;
    while(h > 0){
        for(int i = 0; i <= n-1; i++){
            if(arr[i] <= k){
                t = 1; 
            }
            else {
                t = arr[i] % k;
            }
        }
        sum += t;
    }

    return sum;
}

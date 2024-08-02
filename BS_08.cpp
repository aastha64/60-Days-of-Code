#include <bits/stdc++.h>
using namespace std;

// Capacity to Ship Packages within D Days using Binary Searching

int daysReq(vector<int> &arr, int cap){
    int n = arr.size();
    int days = 1; // first day
    int load = 0; // initial load of packages
    for(int i = 0; i < n; i++){
        if((load + arr[i]) > cap){
            days += 1;
            load = arr[i]; // load the weight
        }
        else{
            load += arr[i];  // the weight on the same day
        }
    }

    return days;
}

int leastWeightCapacity(vector<int> & arr, int d){
    
    int maxi = *max_element(arr.begin() , arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);

    for(int i  = maxi; i <= sum; i++){

        if(daysReq(arr, i) <= d){
            return i;
        }
    }

    return -1;

}

int main(){
    vector<int> arr = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(arr, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;

}

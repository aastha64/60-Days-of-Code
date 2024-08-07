#include <bits/stdc++.h>
using namespace std;

/* 
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.    
*/

vector<vector<int>> threeSum(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin() , nums.end());
    set<vector<int>> s;
    vector<vector<int>> output;
    for(int i = 0; i < n; i++){
        // Uisng two pointers
        int j = i+1;
        int k = n-1;
        while(j < k){
            if(nums[i] + nums[j] + nums[k] == 0){
                s.insert({nums[i] , nums[j], nums[k]});
                j++;
                k--;
            }
            else if ( nums[i] + nums[j] + nums[k] < 0) j++;
            else k--;
        }

        for(auto triplets : s)
          output.push_back(triplets);
        return output;
    }
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    string ans = threeSum(nums);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

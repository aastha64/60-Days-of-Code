#include <bits/stdc++.h>
using namespace std;

// Find LEADER in the given array  :  Leader is an element that is greater than all of the elements on its right side in the array.

vector<int> printLeaders(int arr[], int n){
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(arr[n-1]);

    for(int i = n-2; i >= 0; i--){
        if(arr[i] > max){
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }

    return ans;

}

int main() {
    
  // Array Initialization.
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeaders(arr,n);
  
  for(int i = 0; i < ans.size(); i++){
      
      cout << ans[i] << " ";
  }
  
  cout<<endl;
  return 0;
}
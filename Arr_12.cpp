#include <bits/stdc++.h>
using namespace std;

// Find the duplicate in an array of N+1 integers


    // OPTIMAL APPROACH 1
int findDuplicate(vector < int > & arr){
    int n = arr.size();
    int freq[n+1] = {0};
    for(int i = 0; i < n; i++){
        if(freq[arr[i]] == 0){
            freq[arr[i]] += 1;
        }
        else{
            return arr[i];
        }
    }


    // Optimal Approach 2

    int slow = arr[0];
    int fast = arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);

    fast = arr[0];
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
 return slow;

}

int main() {
  vector < int > arr;
  arr = {1,3,4,2,3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}

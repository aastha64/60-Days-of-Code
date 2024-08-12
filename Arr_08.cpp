#include <bits/stdc++.h>
using namespace std;

vector<int> printSpiral(vector<vector<int>> matrix){
    vector<int> ans;

    int n = matrix.size(); // no of rows
    int m = matrix[0].size(); // no. of columns
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
 
    while (top <= bottom && left <= right) {
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int j = top; j <= bottom; j++){
            ans.push_back(matrix[j][right]);
        }
        right--;

        if(top <= bottom){
            for(int k = right; k >= left; k--){
                ans.push_back(matrix[bottom][k]);
            }
            bottom--;
        }

        if(left <= right){
            for(int l = bottom; l >= top; l--){
                ans.push_back(matrix[l][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    
  //Matrix initialization.
  vector<vector<int>> matrix {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans = printSpiral(matrix);

  for(int i = 0; i < ans.size(); i++){
      
      cout << ans[i] << " ";
  }
  
  cout << endl;
  
  return 0;
}

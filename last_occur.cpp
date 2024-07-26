#include <bits/stdc++.h>
using namespace std;

int Last_Occurence(int n, int x, vector<int> & a){
    int low = 0;
    int high = n-1;
    int res = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(a[mid] == x){
            res = mid;
            high = mid -1;
        }
        else if(a[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }

    return res;
}
int main(){
    vector<int> a = {3,4,13,13,13,20,40};
    int x = 13;
    int n = 7;
    cout << Last_Occurence(n, x, a) << "\n";
    return 0;
}

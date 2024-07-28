#include <bits/stdc++.h>
using namespace std;

                    // To find the square root of a number n and if it is not a perfect square , return the floor value of 'sqrt(n)'.
// Naive Approach
int findSqrt(int n){
    int ans  = 0;
    for(long long i = 1; i <= n-1; i++){
        if(i*i <= n){
            ans  = i;
        }
        else{
            break;
        }
    }

    return ans;
}

                                    // OR

// Optimal solution 1
int findsqrt(int n){
    int ans = sqrt(n);
    return ans; 
}

                                    // OR
// Optimal approach 2
int findsqrt(int n) {
    int low = 1, high = n;
    //Binary search on the answers:
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
}


int main(){
    int n = 28;
    int res = findSqrt(n);
    cout << "The square root is:" << res << " ";
    cout << endl;
    return  0;

}
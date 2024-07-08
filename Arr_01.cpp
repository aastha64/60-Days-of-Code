#include <iostream>
using namespace std;
// Initialisation of any array with any value

int main(){

    int i, n, a ; 

    /*
    here i = represents array index
    n = represents no of elements in is_array
    a = represents the value assigning to the array 
    */

    cin >> n >> a;

    int nums[n];
    for(i = 0; i < n; i++){
        nums[i] = a;
    }
    return nums[10];
    return 0;
} 

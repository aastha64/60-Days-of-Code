#include <bits/stdc++.h>
using namespace std;

/* the only change we will do the recursive insertion sort algorithm and the rest of the part
   will be completely the same as it was in the case of iterative insertion sort. */

void ins_sort(int arr[], int i , int n){
        
        if(i == n) // base case
        return ;
     
        int j = i;
        while(j > 0  &&  arr[j] < arr[j-1])
        {
            int temp  = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        } 
    
    
    ins_sort(arr, i+1, n);

}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting:" <<" \n";
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    ins_sort(arr, 0, n);
    cout << "After sorting:" << " \n";
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
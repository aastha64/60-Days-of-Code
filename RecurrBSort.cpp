#include <bits/stdc++.h>
using namespace std;

/* The only change we will do the recursive bubble sort algorithm and the rest of the
   part will be completely the same as it was in the case of iterative bubble sort. */

void bubble_sort(int arr[], int n){
    if(n == 1){
        return; // base case
    }
    for(int i = 0; i <= n-2; i++){
        if(arr[i] > arr[i+1])
        {
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
        }
    }
    
    bubble_sort(arr , n-1);

}


int main(){
    int arr[] = { 13, 46, 24, 52, 20, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting:" << "\n";
    for(int  i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubble_sort(arr, n);
    cout << "After sortung:" <<"\n";
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
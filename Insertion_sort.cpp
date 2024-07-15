#include <iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i = 0; i <= n-1; i++)
    {
       int j = i;
       while (j > 0   &&   arr[j-1]  > arr[j]) //  used for swapping
       {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
       }
    }

    cout << "Sorted array is:" <<"\n";
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
}

int main(){
    int n;
    int arr[] = {13,46,24,52,20,9};
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array is:" << "\n";
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    insertion_sort(arr, n);
    return 0;
}
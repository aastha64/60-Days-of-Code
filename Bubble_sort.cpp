#include <iostream>
using namespace std;

/* Bubble sorting will sort the array by considering the last index value as max element.
     Here, after each iteration, the array becomes sorted up to the last index of the range.
     That is why the last index of the range decreases by 1 after each iteration.
     This decrement is achieved by the outer loop and the last index is represented by variable i in the following code. 
      And the inner loop(i.e. j) helps to push the maximum element of range [0….i] to the last index(i.e. index i).
*/

void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0; 
        /*
        we will check whether the given array is already sorted or not,if it is already sorted then 
        no swapping will be done and outer loop will iterate only once.    
        */  
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}

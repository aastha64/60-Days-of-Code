#include <bits/stdc++.h>
using namespace std;

/* Quick Sort is another sorting algorithm that works similar to merge sort. Unlike merge sort there is no neeed of taking additional array. Here we choose
    a random element from the array i.e Pivot Element that will divide the array in two parts in such a away that all the elements less tha pivot element will 
    be considered as left half and all those elements which are greater then pivot are considered as right half
    */ 

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;   // pointer that will traverse array in forward direction to get larger elements than pivot 
    int j = high;  // pointer that will traverse array in backward direction to get smaller elements than pivot
   
    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
   
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

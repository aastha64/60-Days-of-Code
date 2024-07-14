#include <iostream>
using namespace std;
// Sorting is a kind of operation we perform on our data structures to organise them either in ascending order or descending order.
// Selection Sort -  Focuses on finding the minimum element and swap its location with the miminum index 
void selection_sort(int arr[], int n){
    for(int i = 0; i <= n-2; i++){
        int min = i;                  // We are considering the i = 0 as our first minimum element.
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]  = temp;
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        selection_sort(arr , n);
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    
}

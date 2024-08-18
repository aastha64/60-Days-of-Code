#include <iostream>
using namespace std;

// Accessing the array - can be done with the help of indexes

int main(){

    int nums[15];

    cout << nums[4] << endl;

    cout << nums[14] << endl;

    cout << nums[25]  << endl; // can't be possible beacuse the size of array is 15, so elements ranging from index 0 to 14 only can be accessed.

    cout << endl << "Everything is fine" << endl << endl; 
}

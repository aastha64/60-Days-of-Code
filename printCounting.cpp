// To print counting using functions
#include <iostream>
using namespace std;

void printCounting(int n){  // void data type declares that this function has no return type i.e. not returning anything
    for (int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

int main(){

    int n ;
    cin >> n;
    printCounting(n);

}
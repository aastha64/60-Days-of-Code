#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    if (n >= 3){
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){

    int n ;
    cin >> n ;
    int nth_term = fibonacci(n);
    cout << "The nth term will be:" << " " << nth_term <<endl;
    return 0 ;

}


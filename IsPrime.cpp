// To check whether the given number is prime or not using functions
#include <iostream>
using namespace std;

// 1 -> prime no.
// 0 -> non prime no.
bool isPrime(int num){
    for(int i = 2; i <= num; i++){
        // if divides completely, then not a prime no.
        if( num % i ==  0){
           return 0;
        }
        else {
           return 1;
        }
    }
    
}

int main(){
     
    int num;
    cin >> num;
    int result = isPrime(num);
    cout << "The result is a :" << " " << result << endl;

}

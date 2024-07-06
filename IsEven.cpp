// To check whether the given number is even or odd
#include <iostream>
using namespace std;

// for even = return 1
// for odd =  return 0
bool IsEven(int num){
    if(num % 2 == 0){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){

    int num;
    cin >> num;
    int answer = IsEven(num);
    cout << "The answer is:" << " " << answer << endl;
    return  0;
}
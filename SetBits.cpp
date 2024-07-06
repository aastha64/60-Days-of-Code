#include <iostream>
using namespace std;

// Set Bits = No. of 1's in that number

int SetBitsA (int a){
    int count = 0;
    while(a != 0 ){
      if(a & 1){
        count ++;
      }
      a = a >> 1;
    }
    return count;
}

int SetBitsB(int b){
    int count = 0;
    while(b != 0){
      if(b & 1){
        count ++;
      }
      b = b >> 1;
    }
    return count;
}

int main(){

    int a , b; 
    cin >> a >> b;
    int ans1 = SetBitsA(a);
    int ans2 = SetBitsB(b);
    int result = ans1 + ans2;
    cout << "Total Set Bits of A & B are:" << " " << result << endl;
    return 0;

}
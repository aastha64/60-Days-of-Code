#include <iostream>
using namespace std;

// Indexing in Array with negative size

int main(){

    
    int arr[-8];                       
    arr[0] = {-1};

    cout << arr[0] << endl;

   return  0;

}

  /*
  
  Whenever we try to run this code , it will show compile error because array size can't
  be negative i.e. as per array declaration convention whenever an array is evaluated ,
  it shall have a size greater than '0' otherwise it will break shall condition
  
   */

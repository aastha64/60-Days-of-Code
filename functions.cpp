//functions are programs that are designed to perform a well defined task
#include <iostream>
#include <cmath>
using namespace std;

//function declaration
int add(int a, int b, int c){
    // function body
    int sum = a + b + c;
    return sum;
}

float add(float num1, float num2){
    //function body
    float sum = num1 + num2;
    return sum;
}

int main(){
    //function calling
    add(3, 8); // here we have given only two parameters but it can take up the third parameter while returning the answer
    cout << add(3 , 8, 1) << endl; // we have returning all the three parameters
    return 0;
}

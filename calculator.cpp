#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a , b;
    cin >> a >> b;
    char op;
    cin >> op;
    switch (op) {
        case  '+' : cout<< "The result is :" << a + b << endl;
                    break;
        
        case  '-' : cout<< "The result is :" << a - b << endl;
                    break;

        case  '*' : cout<< "The result is :" <<  a * b << endl;
                    break;

        case  '/' : cout<< "The result is :" <<  a / b << endl;
                    break;

        case  '%' : cout<< "The result is :" << a % b << endl;
                    break;
        
        default : cout << "None"  << endl;

    }

    return 0;

}
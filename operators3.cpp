#include <iostream>
using namespace std;
int main(){
    int a=5;
    cout<<(sizeof(a))<<endl;//4

    bool flag;
    a==4? flag=true:flag=false;
    cout<<flag<<endl;//false
    
    float b=4.37;
    cout<<int (b)<<endl;//4
    
    int c=10;
    cout<<&c<<endl;//memory address
     
    return 0;

   
     

    

}

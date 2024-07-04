#include <iostream>
using namespace std;
int main(){
    //code 1
    int num;
    cin>>num;
    if(num%2!=0){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }

    //code 2
    int marks;
    cin>>marks;
    
    if (marks>=90){
        cout<<"Good"<<endl;
    }
    else if(marks<80 && marks>70){
         cout<<"Average"<<endl;
    }
    else{
        cout<<"Poor"<<endl;
    }


     return 0; 
}
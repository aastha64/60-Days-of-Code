#include <iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    while(ch == 'a'){
        switch(ch)
    {
        case 'a':
        cout<< "First"<<endl;
          

        case 'e':
        cout<< "Second"<<endl;


        case 'i':
        cout<< "Third"<<endl;
        

        case 'o':
        cout<< "Fourth"<<endl;


        case 'u':
        cout<< "Fifth"<<endl;
        

        default:
        cout<<"consonant"<<endl;
    }
    return 0;

    }
      
   exit(0);  
}

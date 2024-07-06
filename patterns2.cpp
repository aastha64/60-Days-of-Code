#include <iostream>
using namespace std;
int main(){
     int n,m;
     cin>>n,m;
      for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
      }


    
     for (int i=1 ; i<=n ; i++){
        for (int j=i ; j<=1 ; j++ ){
            cout<<"*";
        }
        cout<<endl;

    }


      return 0;
 }      
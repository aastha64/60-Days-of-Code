#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;

    for (int i=1 ; i<=n ; i++){ // i denotes row
        for (int j=1; j<=m; j++){ // j denotes column
            cout<<"*";
        }
        cout<<endl;
    }


    for(int i=1 ;i<=n ;i++){
        for (int j=1 ; j<=m ; j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
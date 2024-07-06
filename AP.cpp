#include <iostream>
using namespace std;
 
int AP(int n)
{
    int ans = (3 * n) + 7;
    return ans;
}

int main(){

    int n ;
    cin >> n;
    int result = AP(n);
    cout << "The result is:" << " " << result << endl;
    return 0;
}
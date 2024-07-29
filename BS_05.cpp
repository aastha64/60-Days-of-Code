


#include <bits/stdc++.h>
using namespace std;

// Power exponential method:
long long func(int i, int n) {
    long long  ans = 1;
    long long base = i;
    while (n > 0) {
        if (n % 2) {
            n--;
            ans = ans * base;
        }
        else {
            n /= 2;
            base = base * base;
        }
    }
    return ans;
}

int NthRoot(int n, int m) {
    //Use linear search on the answer space:
    for (int i = 1; i <= m; i++) {
        long long val = func(i, n);
        if (val == m * 1ll) return i;
        else if (val > m * 1ll) break;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}


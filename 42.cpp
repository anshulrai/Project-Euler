#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long k = sqrt(2*n);
        if(k*(k+1) == 2*n)
            cout << k << "\n";
        else if((k-1)*k == 2*n)
            cout << k-1 << "\n";
        else if((k+1)*(k+2) == 2*n)
            cout << k+1 << "\n";    
        else
            cout << -1 << "\n";
    }
    return 0;
}

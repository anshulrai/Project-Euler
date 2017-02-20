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
    while (t--){
        long long n;
        cin >> n;
        long long fib1= 1, fib2 = 1, c = 0, sum = 0;
        while (fib2 <= n){
            if(fib2%2 == 0)
                sum += fib2;
            c = fib2;
            fib2 += fib1;
            fib1 = c;
        }
        cout << sum << "\n";
    }
    return 0;
}


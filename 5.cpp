#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long m, long long n)
{
    long long r;
    do
    {
        r = m % n;
        if(r == 0)
            return n;
        m = n;
        n = r;
    }while(1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        long long n, j = 1;
        cin >> n;
        for(long long i=2; i<=n; i++){
            j = i*j/gcd(i,j);
        }
        cout << j <<"\n";
    }
    return 0;
}

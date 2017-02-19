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
        long long N, sum = 0;
        cin >> N;
        long long x3 = N%3 ? N/3 : N/3 -1;
        long long x5 = N%5 ? N/5 : N/5 -1;
        long long x15 = N%15 ? N/15 : N/15 -1;
        sum = (3*x3*(x3+1))/2 + (5*x5*(x5+1))/2 - (15*x15*(x15+1))/2;
        cout<< sum << "\n";
    }
    return 0;
}


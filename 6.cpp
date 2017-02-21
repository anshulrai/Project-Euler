#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        cout << (n*(n+1)*(n-1)*(3*n+2))/12<<"\n";
    }
    return 0;
}


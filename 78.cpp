#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<long long> p;
    long long val = 0;
    p.push_back(0);
    for(long long l = 1; l<=60000; l++){
        val = 0;
        for(long long i = 1; i<=l; i++){
            val += p[i-1]+p[l-i-1];
        }
        p.push_back(val);
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << p[0]<<" "<<p[3]<<" "<<p[4]<<"\n";
    }
    return 0;
}

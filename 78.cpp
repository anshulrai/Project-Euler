#pragma GCC diagnostic ignored "-Wunused-result"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    int t, n;
    scanf("%d", &t);
    std::vector<long long> den(6e4,0), table(1+6e4,0);
    table[0] = 1;
    
    for(int i = 0; i<den.size(); i++){
        den[i] = i+1;
        for(int j = den[i]; j<=6e4;j++){
            table[j] = (table[j] + table[j-den[i]]) % (long long)(7+1e9);
        }
    }
    while(t--){
        scanf("%d", &n);
        printf("%lld\n", table[n]);
    }
    return 0;
}

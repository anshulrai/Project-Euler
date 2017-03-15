#pragma GCC diagnostic ignored "-Wunused-result"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int t, n;
    std::vector<long long> denum(1e3,0), table(1+1e3, 0);
    for(int i = 0; i<1e3;i++)
        denum[i] = i+1;
    table[0] = 1;
    for(int i = 0; i<denum.size(); i++){
        for(int j = denum[i]; j<=1e3; j++){
            table[j] = (table[j] + table[j - denum[i]]) % (long long)(7+1e9);
        }
    }
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%lld\n", table[n]-1);
    }
    return 0;
}

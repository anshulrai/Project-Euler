#pragma GCC diagnostic ignored "-Wunused-result"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

int main() {
    int t, n;
    long long count;
    scanf("%d", &t);
    int den[8] = {1,2,5,10,20,50,100,200};
    std::vector<long long> table(1+1e5, 0);
    table[0] = 1;
    for(int i=0; i<8; i++)
        for(int j=den[i]; j<=1e5; j++)
            table[j] = (table[j]+table[j-den[i]])%(long long)(7+1e9);
    while(t--){
        scanf("%d", &n);
        printf("%lld\n", table[n]);
    }
    return 0;
}

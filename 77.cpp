#pragma GCC diagnostic ignored "-Wunused-result"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int t,n;
    long long table[1001] = {0};
    std::vector<int> primes;
    std::vector<bool> flag;
    
    scanf("%d", &t);
    
    for(int i = 2; i<=1000; i++){
        primes.push_back(i);
        flag.push_back(true);
    }
    for(int i=2; i<=sqrt(1000); i++){
        if(flag[i-2]){
            for(int j = i*i; j<=1000; j+=i){
                flag[j-2] = false;
            }   
        }        
    }
    primes.clear();
    
    table[0] = 1;
    table[1] = 0;
    
    for(int i = 0; i<flag.size(); i++){
        if(flag[i])
            primes.push_back(i+2);
    }
    
    for(int i = 0; i<primes.size(); i++){
        for(int j = primes[i];j<=1000; j++){
            table[j] += table[j - primes[i]];
        }
    }
    
    while(t--){
        scanf("%d", &n);
        printf("%lld\n", table[n]);
    }
    return 0;
}

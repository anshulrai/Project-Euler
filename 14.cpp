#pragma GCC diagnostic ignored "-Wunused-result"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    std::vector<long long> table(1+5e6, 0), max_in(1+5e6, 0);
    table[0] = 1ll;
    table[1] = 1ll;
    for(long long i = 2;i<table.size(); i++){
        if(!table[i]){
            long long next = i, count =0;
            while(table[next] == 0){
                if(next%2 == 0)
                    next/=2;
                else
                    next = 3*next + 1;
                count++;
                if(next>(long long)5e6){
                    while(next>(long long)5e6){
                        if(next%2 == 0)
                            next/=2;
                        else
                            next = 3*next + 1;
                        count++;
                    }
                }
            }
            table[i] = count + table[next];
        }               
    }
    int t;
    scanf("%d", &t);
    max_in[1] = 1;
    long long max_el = 0;
    for(long long i = 2;i<table.size(); i++){
        if(table[i]>= max_el){
            max_el = table[i];
            max_in[i] = i;
        }
        else
            max_in[i] = max_in[i-1];
    }    
    while(t--){
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", max_in[n]);
    }
    
    return 0;
}

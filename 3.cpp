#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(long long N){
    for (long long j = 2; j <=sqrt(N); j++){
        if(N%j == 0 && N != j){           
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n, max = 0, count = 0;
        cin >> n;
        if(isprime(n))
            max = n;
        else{
            for (long long i = 2; i <= n; i++){
                count++;
                if(n%i == 0){
                    max = i;
                    while(n%i == 0){
                        n /= i;
                    }
                    
                }
                
            }
        }
        cout << max <<"\n";
    }
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits> 
using namespace std;

int main() {
    vector<int> primes, primes_list;
    bool flag[1000000];
    
    for (int i = 0; i < 1000000; i++){
        flag[i] = true;
        primes.push_back(i+2);
    }
    
    for(int i = 0; primes[i] <= sqrt(primes.size()); i++){
        if(flag[primes[i]]){
            for( int j = 2; primes[i]*j <= primes.size(); j++){
                flag[primes[i]*j] = false;
            }
        }                
    }
    
    for(int i = 0; i < primes.size(); i++){
        if(flag[primes[i]])
            primes_list.push_back(primes[i]);
    }
    
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        cout << primes_list[N-1] << "\n";
    }
}

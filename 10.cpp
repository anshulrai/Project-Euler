#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int t, n;
    cin >> t;
    bool flag[1000000];
    vector<int> possible_primes;
    vector<long long> sum;
    
    for(int i = 0; i<1000000; i++){
        flag[i] = true;
        possible_primes.push_back(i);
    }
    flag[0] = false; flag[1] = false;
    for(int i = 2; i<=sqrt(possible_primes.size()); i++){
        if(flag[i]){
            for(int j = pow(possible_primes[i],2); j<=possible_primes.size(); j+=possible_primes[i]){
                flag[j] = false;
            }
        }
    }
    sum.push_back(0);sum.push_back(0);
    for(int i=2; i<=possible_primes.size(); i++){
        if(flag[i])
            sum.push_back(sum[i-1]+possible_primes[i]);
        else
            sum.push_back(sum[i-1]);
    }
    while(t--){
        cin >> n;
        cout << sum[n] <<"\n";
    }
}

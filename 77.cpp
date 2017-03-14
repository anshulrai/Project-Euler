#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    long long sum[1001] = {0};
    vector<int> primes;
    vector<bool> flag;
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
    sum[0] = 1;
    for(int i = 0; i<flag.size(); i++){
        if(flag[i])
            primes.push_back(i+2);
    }

    for(int i = 2; i<=1000; i++){
        int visited[i] = {0};
        for (int j = 0; primes[j]<=i; j++){
            if(!visited[primes[j]-1]){
                sum[i] += sum[i-primes[j]];
                visited[i-primes[j]-1] = 1;
            }
        }
    }
    for(int i = 0; i<=1000; i++){
        cout << sum[i] <<"\n";
    }
    return 0;
}

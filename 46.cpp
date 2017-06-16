#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    vector<int> primes;
    vector<bool> flag;
    for(int i = 2; i<=5e5; i++){
        primes.push_back(i);
        flag.push_back(true);
    }
    for(int i=2; i<=sqrt(5e5); i++){
        if(flag[i-2]){
            for(int j = i*i; j<=5e5; j+=i){
                flag[j-2] = false;
            }   
        }        
    }
    primes.clear();
    for(int i = 0; i<flag.size(); i++){
        if(flag[i])
            primes.push_back(i+2);
    }
    while(t--){
        int n,count = 0;
        cin >> n;
        for(int i = 0; primes[i]<n; i++){
            if((n-primes[i]) % 2 == 0){
                int j = sqrt((n-primes[i])/2);
                if((n-primes[i]) == 2*j*j)
                    count++;
            }
        }
        cout <<count << "\n";
    }
    return 0;
}

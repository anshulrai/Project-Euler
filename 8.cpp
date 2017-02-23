#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n ,k;

    cin >> t;
    while(t--){
        cin >> n >> k;
        string num;
        cin >> num;
        long long max_product = 0;
        for (int i = 0; i < n-k; i++){
            long long product = (long long)num[i] - '0';
            for(int j = 1; j<k; j++){
                product *= (long long)num[i+j] - '0';
            }
            if(product > max_product)
                max_product = product;
        }
        cout << max_product <<"\n";
    }
    return 0;
}


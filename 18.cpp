#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, max, var, prev = 1, sum = 0;
        cin >> n;
        for (int i = 1; i<= n; i++){
            max = 0;
            for (int j = 1; j<= i; j++){
                cin >> x;
                //cout << x <<" "<< abs(j-prev)<< " ";
                if(x>max && abs(j-prev) <= 1){
                    max = x;
                    var = j;
                }
            }
            prev = var;
            //cout <<"\n";
            sum+=max;
        }
        cout << sum << "\n";
    }
    return 0;
}

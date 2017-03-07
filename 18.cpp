#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n, val;
    cin >> t;
    while(t--){
        cin >> n;
        int sum[n*(n+1)/2], maxv = 0;
        vector<int> arr, level;
        for(int i=1;i<=n;i++){
            for(int j = 0; j<i; j++){
                cin >> val;
                arr.push_back(val);
                level.push_back(i);
            }
        }
        for(int i = 0; i<arr.size();i++)
            sum[i] = 0;
        
        sum[0] = arr[0];
        
        for(int i = 0; i<arr.size()-n;i++){
            sum[i+level[i]] = max(sum[i+level[i]], sum[i]+arr[i+level[i]]);
            sum[i+level[i]+1] = max(sum[i+level[i]+1], sum[i]+arr[i+level[i]+1]);
        }
        maxv = sum[0];
        for(int i = 0; i<arr.size();i++){
            if(maxv < sum[i])
                maxv = sum[i];
        }
        cout << maxv << "\n";
    }
    return 0;
}

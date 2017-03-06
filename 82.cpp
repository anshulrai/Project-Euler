#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    long long arr[n][n], c[n][n], var;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
            c[i][j] = 0;
        }
    }
    c[0][0] = arr[0][0];
    
    for(int i = 0;i<n;i++){
        c[i][0]=arr[i][0];
    }
    
    for(int j = 1;j<n;j++){
        c[0][j]=c[0][j-1]+arr[0][j];
        for(int i=1; i<n;i++){
            c[i][j] = min(c[i-1][j]+arr[i][j], c[i][j-1]+arr[i][j]);
        }
        for(int i=n-2; i>=0;i--){
            c[i][j] = min(c[i+1][j]+arr[i][j], c[i][j]);
        }
    }
    var = c[0][n-1];
    for(int i = 1;i<n;i++){
        var = min(c[i][n-1],var);
    }
    
    cout << var;
    return 0;
}

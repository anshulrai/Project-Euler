#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    long long arr[n][n], c[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
            c[i][j] = 0;
        }
    }
    c[0][0] = arr[0][0];
    
    for(int i = 1;i<n;i++){
        c[i][0]=c[i-1][0]+arr[i][0];
    }
    
    for(int j = 1;j<n;j++){
        c[0][j]+=c[0][j-1]+arr[0][j];
    }
    
    for(int i = 1;i<n;i++){
        for(int j = 1; j<n; j++)
            c[i][j] = min(c[i][j-1]+arr[i][j],c[i-1][j]+arr[i][j]);            
    }
    
    cout << c[n-1][n-1];
    return 0;
}

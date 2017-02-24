#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, N; 
    cin >> t;
    while(t--){
        cin >> N;
        bool flag = false;
        long long prod = 1;
        if(N%2 != 0)
            flag = false;
        else{
            for (int a = 1; a <N/3; a++){
                    int b = N/2 - (N*a / (2*(N-a)));
                    int c = sqrt(pow(a,2)+pow(b,2));
                if(a+b+c == N && N*a % (2*(N-a)) == 0 && a*b*c > prod){
                    prod = a*b*c;
                    flag = true;
                    }
                }
            }
        if(!flag)
            prod = -1;
        cout << prod << "\n";
        }
    return 0;
}

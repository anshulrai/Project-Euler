#pragma GCC diagnostic ignored "-Wunused-result"
#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::set<std::string> pal;
    std::set<std::string>::iterator it;
    
    scanf("%d", &t);
    
    for(int i = 100; i<1000;i++){
        for(int j = 100*sqrt(10); j<1000; j++){
            if(i*j >= 100000){
                std::string s = std::to_string(i*j);
                if(s == std::string(s.rbegin(),s.rend()))
                    pal.insert(s);
            }
        }
    }

    while(t--){
        unsigned int n;
        std::string flag;
        
        scanf("%d", &n);
        
        for(it = pal.begin(); it!=pal.end(); it++){
            if(std::to_string(n)<=*it){ 
                it--;
                flag = *it;
                printf("%s\n", flag.c_str());
                break;
            }           
        }
    }
    return 0;
}

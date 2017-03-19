import math

def ltr(el, size):
    return True

def rtl(el, size):
    return True

n = int(input())
prime_sum = 0
flag = [1]*(n-1)
tprime = []

for i in range(2,int(math.sqrt(n) + 1)):
    if flag[i-2]:
        for j in range(i*i, n+1, i):
            flag[j-2] = 0
            
for j in range(len(flag)):
    if flag[j]:
        tprime.append(j+2)
        
for i in range(len(tprime)):
    s = str(tprime[i])
    if(ltr(s, len(s)) == False):
        continue
    if(rtl(s, len(s)) == False):
        continue    
    prime_sum = prime_sum + tprime[i]

print(prime_sum)

import math

def ltr(el, psize):
    if(psize == 1):
        if(int(el) in tprime):
            return True
        else:
            return False
    if(ltr(el[1:], psize-1)):
        if(int(el) in tprime):
            return True
        else:
            return False
    else:
        return False

def rtl(el, psize):
    if(psize == 1):
        if(int(el) in tprime):
            return True
        else:
            return False
    if(rtl(el[:-1], psize-1)):
        if(int(el) in tprime):
            return True
        else:
            return False
    else:
        return False

n = int(input())
prime_sum = 0
flag = [1]*(n-1)
tprime = []

for i in range(2,int(math.sqrt(n)) + 1):
    if flag[i-2]:
        for j in range(i*i, n+1, i):
            flag[j-2] = 0
            
for j in range(len(flag)):
    if flag[j]:
        tprime.append(j+2)
        
for i in range(len(tprime)):
    s = str(tprime[i])
    if(len(s) == 1 or ltr(s, len(s)) == False):
        continue
    if(len(s) == 1 or rtl(s, len(s)) == False):
        continue   
    #print(tprime[i])
    prime_sum = prime_sum + tprime[i]

print(prime_sum)

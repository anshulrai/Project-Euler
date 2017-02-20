import math

def lpf(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        x, y = divmod(n, i)
        if y == 0:
            return lpf(x) 
    return n


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(lpf(n))

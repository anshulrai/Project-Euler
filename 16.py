n = int(input())

for i in range(n):
    x = int(input())
    s = str(pow(2,x))
    sum_pow = 0
    for x in list(s):
        sum_pow = sum_pow + int(x) 
    print(sum_pow)

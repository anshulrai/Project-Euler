n = int(input().strip())
l = []

for i in range(n):
   x = int(input().strip())
   l.append(x)
    
print(str(sum(l))[:10])

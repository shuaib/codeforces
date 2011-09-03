import math

n = int(raw_input())
f = [-100000 for i in range(0, 100001)]
for j in range(0, n):
    x, y  = tuple(int(i) for i in raw_input().strip().split(" "))
    c = 0
    for i in xrange(1, int(math.sqrt(x)+1)):
        if x%i==0:
            q = x/i
            p = i
            if(f[p]<j-y):
                c+=1
            f[p] = j 
            if(f[q]<j-y):
                c+=1
            f[q] = j
    print c

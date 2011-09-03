from sys import stdin

n = int(next(stdin))
f = [-100000] * 100001
for j in range(0, n):
    x, y  = [int(i) for i in next(stdin).split()]
    c = 0
    for i in xrange(1, int(x**0.5)+1):
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

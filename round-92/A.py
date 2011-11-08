n, a, b = [int(x) for x in raw_input().split()]

count = 0
for i in xrange(1, n+1):
    ax = i-1
    bx = n-i
    if ax>=a and bx<=b:
        count+=1
print count

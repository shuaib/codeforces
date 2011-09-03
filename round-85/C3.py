n, x, y = tuple(int(i) for i in raw_input().strip().split(" "))

l = [1 for i in range(0, n)]
l[0] = y-(n-1)
sq = sum(i*i for i in l)
s = sum(l)
if l[0]<=0:
    print "-1"
elif sq>=x and s<=y:
    for i in l:
        print i
else:
    print "-1"

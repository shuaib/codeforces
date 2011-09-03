n, x, y = tuple(int(i) for i in raw_input().strip().split(" "))

l = [1 for i in xrange(0, n)]

sq = sum(i*i for i in l)
s = sum(l)
counter = 0
while sq<x and s<=y:
    l[counter] += 1
    counter += 1
    if counter==len(l):
        counter = 0
    sq = sum(i*i for i in l)
    s = sum(l)

if sq>=x and s<=y:
    for i in l:
        print i
else:
    print "-1"


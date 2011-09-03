n, x, y = tuple(int(i) for i in raw_input().strip().split(" "))
nums = y/n
rem = y%n
l = [nums for i in range(0, n)]

sq = sum(i*i for i in l)
s = sum(l)

while sq<x and rem>0:
    l[0] += 1
    rem -= 1
    sq = sum(i*i for i in l)
    s = sum(l)
if sq>=x and s<=y:
    for i in l:
        print i
else:
    print "-1"



n, x, y = tuple(int(x) for x in raw_input().strip().split(" "))

nn = n/2

if (x==nn and y==nn) or (x==nn and y==nn+1) or (x==nn+1 and y==nn) or (x==nn+1
        and y==nn+1):
    print "NO"
else:
    print "YES"


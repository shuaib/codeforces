import sys

def lucky(n):
    s = str(n)
    for i in s:
        if i!="4" and i!="7":
            return False
    return True


n = input()
for i in xrange(1, n+1):
    if lucky(i):
        if n%i==0:
            print "YES"
            sys.exit()
print "NO"


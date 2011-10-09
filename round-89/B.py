n = input()
n = int(n)

l = []
for r in range(0, n+1):
    row = []
    for i in range(0, r+1): 
        row.append(str(i))
    for i in range(r-1, -1, -1):
        row.append(str(i))
    l.append(row)

for r in l:
    print "%s%s" % (" "*(len(l[-1])-len(r)), " ".join(r))
spaces = 2
for r in range(len(l)-2, -1, -1):
    print "%s%s" % (" "*spaces, " ".join(l[r]))
    spaces += 2


l1 = raw_input()
l2 = raw_input()
l3 = raw_input()
lines = [l1, l2, l3]

vowels = ['a', 'e', 'i', 'o', 'u']

c = [0, 0, 0]

for i in range(0, 3):
    for ch in lines[i]:
        if ch in vowels:
            c[i]+=1
if c == [5, 7, 5]:
    print "YES"
else:
    print "NO"

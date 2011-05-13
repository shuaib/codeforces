n = input()

c = ['R', 'O', 'Y', 'G', 'B', 'I', 'V']
r = ""
i = 0

s = (n/7)*7
for k in range(0, (n/7)*7):
    if i>6:
        i = 0
    r+=c[i]
    i+=1

i = 3
for k in range((n/7)*7, n):
    if i>6:
        i=3
    r+=c[i]
    i+=1

print r




s = raw_input()

n = ""
vowels = ["a", "e", "i", "o", "u", "y"]
s = s.lower()
for i in s:
    if i in vowels:
        continue
    else:
        n+="."+i

print n

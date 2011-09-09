import sys
line = raw_input().split()
genders = set()
speeches = []

MAdj = "lios"
MNoun = "etr"
MVerb = "initis"
FAdj = "liala"
FNoun = "etra"
FVerb = "inites"

def gender(w):
    if w.endswith(MAdj) or w.endswith(MNoun) or w.endswith(MVerb):
        return "M"
    elif w.endswith(FAdj) or w.endswith(FNoun) or w.endswith(FVerb):
        return "F"
    else:
        return "NA"

def speech(w):
    if w.endswith(MAdj) or w.endswith(FAdj):
        return "Adj"
    elif w.endswith(MNoun) or w.endswith(FNoun):
        return "Noun"
    elif w.endswith(MVerb) or w.endswith(FVerb):
        return "Verb"
    else:
        return "NA"

def sentence(s):
    a = 0
    n = 0
    v = 0
    if len(s)==1:
        return True
    for i in s:
        if i=="Adj":
            if n!=0 or v!=0:
                return False
            else:
                a+=1
        if i=="Noun":
            if v!=0:
                return False
            else:
                n+=1
        if i=="Verb":
            if n!=1:
                return False
            else:
                v +=1
    if n!=1:
       return False
    else:
       return True


for i in line:
    g = gender(i)
    s = speech(i)
    if g=="NA" or s=="NA":
        print "NO"
        sys.exit()
    else:
        genders.add(g)
        speeches.append(s)

if len(genders)!=1:
    print "NO"
    sys.exit()
else:
    if sentence(speeches):
        print "YES"
    else:
        print "NO"
    sys.exit()

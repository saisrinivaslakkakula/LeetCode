'''
aaaaaaaa 8
b 1
c 1
d 1
e 1
f 1
gggg 4
h 1
i  1
----
j 2
k 2
llllllllll - 20
mmm - 6
oooo - 8
ppp - 6
nnn - 6
'''
from collections import Counter
class Solution:
    def minimumKeypresses(self, s: str) -> int:
        count = Counter(s)
        if len(count.keys())<=9:
            return len(s)
        else:
            keys = count.keys()
            values = count.values()
            kvp = []
            for k1,v1 in count.items():
                kvp.append((v1,k1))
            kvp.sort(key = lambda x: x[0], reverse=True)
            presses_required = {}
            c = -1
            for v,k in kvp:
                c+=1
                presses_required[k] = (c//9)+1
            res = 0
            for k,v in presses_required.items():
                res+= count[k]*v
            return res
            
        
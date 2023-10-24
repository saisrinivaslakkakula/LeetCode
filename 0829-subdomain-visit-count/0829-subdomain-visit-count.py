from collections import defaultdict
class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        visits = defaultdict(int)
        for cpdomain in cpdomains:
            count,domain = cpdomain.split()
            count = int(count)

            frags = domain.split(".")
            for i in range(len(frags)):
                frag = ".".join(frags[i:])
                visits[frag] += count
        
        ans = []
        for key,val in visits.items():
            ans.append(str(val) + " "+key)
        return ans

        
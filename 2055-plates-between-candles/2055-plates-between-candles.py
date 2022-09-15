import bisect
class Solution:
    def platesBetweenCandles(self, s: str, queries: List[List[int]]) -> List[int]:
        cand_idx = []
        ans = []
        for i,c in enumerate(s):
            if c == "|": cand_idx.append(i)
        for q in queries:
            left,right = q
            l = bisect_left(cand_idx,left)
            r = bisect_right(cand_idx,right)
            if l ==r: 
                ans.append(0)
                continue
            l_idx = cand_idx[l]
            r_idx = cand_idx[r-1]
            num_cand = r-l
            cand_between = r_idx - l_idx +1
            ans.append(cand_between-num_cand)
        return ans
            
            
            
            
                    
                    
        
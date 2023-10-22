class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        days = set(days)
        max_days = max(days)
        dp = [-1] * (max_days+1)
        #print(dp)

        def helper(d):
            #print(dp[d])
            
            if d >max_days: return 0
            if d not in days:
                return helper(d+1)
            if dp[d] != -1: 
                return dp[d]
            min_ = min(costs[0]+helper(d+1), costs[1]+helper(d+7), costs[2]+helper(d+30))
            dp[d] = min_
            return min_
        
        
        min_ans = helper(1)
        
        return(min_ans)



        
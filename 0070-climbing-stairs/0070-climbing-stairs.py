class Solution:
    def climbStairs(self, n: int) -> int:
        memo = [0 for i in range(n)]
        def climb_helper(step):
            if step > n: return 0
            if step == n: return 1
            if memo[step] >0: return memo[step]
            memo[step] = (climb_helper(step+1) + climb_helper(step+2))
            return memo[step]
        
        return(climb_helper(0))
        
from collections import defaultdict
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        memo = {}

        def coinchange_helper(amt):
            if amt <0: return -1
            if amt == 0: return 0
            if amt in memo:
                return memo[amt]
            min_ = float("inf")
            for c in coins:
                res = coinchange_helper(amt-c)
                if res != -1:
                    min_ = min(min_,res+1)
            memo[amt] = min_
            if min_ != float("inf"):
                return min_
            else: return -1

        return(coinchange_helper(amount))
        

        
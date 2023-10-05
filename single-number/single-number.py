from collections import Counter
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        cnt = Counter(nums)
        for n,count in cnt.items():
            if count == 1: return n
        
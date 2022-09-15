class Solution:
    # Time O(n) Space O(1)
    # neg: Length of longest negative-product subarray ending with nums[i].
    # pos: Length of longest positive-product subarray ending with nums[i].
    def getMaxLen(self, nums: List[int]) -> int:
        pos = neg = res = 0                                     # reset result, len of +ve and -ve streak
        for num in nums:
            if num > 0:                                         # if num is +ve
                pos += 1                                        # - add to +v streak; 
                neg += 1 if neg != 0 else 0                     # - add to -ve streak, if neg is not zero, else reset to 0
            elif num < 0:                                       # if num is -ve
                pos, neg = neg+1 if neg > 0 else 0, pos + 1     # reset pos if prevNeg > 0 and turn the entire +ve streak to -ve streak
            else:
                pos = neg = 0                                   # reset len of +ve and -ve streak
                
            res = max(res, pos)                                 # max length is in +ve streak
        return res
        
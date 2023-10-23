class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if len(nums) == 0: return [-1,-1]
        i = 0
        j = len(nums)-1
        tmp = []
        while i <= len(nums)-1:
            if nums[i] == target:
                tmp.append(i)

            i+=1
        #print(tmp)
        
        if len(tmp) >=1:
            return [tmp[0],tmp[-1]]
        else: return [-1,-1]
        
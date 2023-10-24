class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        left = [1]
        right = [1]
        nums_rev = nums[::-1]
        for i in range(len(nums)-1):
            left.append(left[-1]*nums[i])
        for i in range(len(nums_rev)-1):
            right.append(right[-1]*nums_rev[i])
        right = right[::-1]

        ans = []
        for i,l in enumerate(left):
            ans.append(l*right[i])
        return(ans)
        
        



        

        
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        left = [1]
        right = [1]
        nums_rev = nums[::-1]
        for n in nums:
            left.append(left[-1]*n)
        for n in nums_rev:
            right.append(right[-1]*n)
        
        #print(left)
        #print(right)
        ans = []
        for i in range(len(left)-1):
            ans.append(left[i])
        i =0
        j = len(right)-2
        for i,a in enumerate(ans):
            ans[i] = ans[i]*right[j]
            j-=1
        return ans



        

        
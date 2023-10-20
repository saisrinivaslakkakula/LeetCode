class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        left = [1]
        for n in nums:
            left.append(left[-1]*n)
        left = left[:-1]
        #print (left)

        right = [1]
        for n in nums[::-1]:
            right.append(right[-1]*n)
        right = right[::-1]
        right = right[1:]
        #print(right)
        i = 0
        ans = []
        while i<len(left):
            ans.append(left[i]*right[i])
            i+=1
        return(ans)

        

        
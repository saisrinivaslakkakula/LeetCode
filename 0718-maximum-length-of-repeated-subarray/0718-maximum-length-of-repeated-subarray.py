class Solution:
    def findLength(self, nums1: List[int], nums2: List[int]) -> int:
        m = len(nums1)
        n = len(nums2)

        dp = [[0]*n for i in range(m)]
        
        
        max_ = 0
        for i in range(m):
            for j in range(n):
                if nums1[i] == nums2[j]:
                    if  i-1 >=0 and j-1 >=0:
                        dp[i][j] = dp[i-1][j-1] +1
                    else:
                        dp[i][j] = 1
                    max_ = max(max_, dp[i][j])
        return(max_)


        
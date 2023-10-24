class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        ans = [intervals[0]]
        for i in range(1,len(intervals)):
            lower,upper = intervals[i]
            if lower>=ans[-1][0] and lower<=ans[-1][1]:
                ans[-1][1] = max(upper,ans[-1][1])
            else:
                ans.append([lower,upper])
        return(ans)
        
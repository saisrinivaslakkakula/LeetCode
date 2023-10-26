class Solution:
    # Refer to notes attahced as a github link to notes in LC
    def minTaps(self, n: int, ranges: List[int]) -> int:
        startEnd = [0 for i in range(n+1)]
        #print(ranges)
        for i in range(n+1):
            start = max(0,i-ranges[i])
            end = min(n,i+ranges[i])
            startEnd[start] = max(startEnd[start],end)
        #print(startEnd)

        max_end = 0
        allowable_end = 0
        taps = 0
        for i in range(n+1):
            if i > max_end: return -1
            if i > allowable_end:
                taps+=1
                allowable_end = max_end
            max_end = max(max_end,startEnd[i])
        
        return(taps)

            
        
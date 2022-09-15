import heapq
class Solution:
    def minMeetingRooms(self, intervals: List[List[int]]) -> int:
        if not intervals: return 0
        intervals.sort(key= lambda x:x[0])
        ih = []
        heapq.heappush(ih,intervals[0][1])
        for i in intervals[1:]:
            if ih[0] <= i[0]:
                heapq.heappop(ih)
            heapq.heappush(ih,i[1])
        return len(ih)
        
        
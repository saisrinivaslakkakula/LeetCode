from collections import defaultdict
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        if len(prerequisites) == 0:
            return [i for i in range(numCourses)]
        graph = defaultdict(list)
        for dest,src in prerequisites:
            graph[src].append(dest)
        
        indegree = defaultdict(int)

        for n in range(numCourses):
            indegree[n] = 0
        for neighbors in graph.values():
            for neighbor in neighbors:
                indegree[neighbor]+=1
        q = deque()
        for key in indegree:
            if indegree[key] == 0:
                q.append(key)
        ans = []
        while q:
            cur = q.popleft()
            ans.append(cur)
            for n in graph[cur]:
                if indegree[n] !=0 :
                    indegree[n] -=1
                if indegree[n] == 0:
                    q.append(n)
        
        if len(ans) == numCourses: return ans
        else: return []

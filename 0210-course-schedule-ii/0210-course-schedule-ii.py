from collections import defaultdict
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        if numCourses == 0: return [i for i in range(numCourses)]
        graph = defaultdict(list)
        for dst,src in prerequisites:
            graph[src].append(dst)
        in_degree = [0]*numCourses

        for neighbours in graph.values():
            for n in neighbours:
                in_degree[n]+=1
        
        q = deque()
        for node_num,id_ in enumerate(in_degree):
            if id_ == 0:
                q.append(node_num)
        
        ans = []
        while q:
            cur = q.popleft()
            ans.append(cur)
            for n in graph[cur]:
                if in_degree[n] !=0:
                    in_degree[n] -= 1
                if in_degree[n] == 0:
                    q.append(n)
        
        if len(ans) == numCourses: return ans
        else: return []
                

        
        
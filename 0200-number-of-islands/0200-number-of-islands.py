class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        count = 0
        visited = set()
        m = len(grid)
        n = len(grid[0])

        def bfs(node):
            q = deque()
            q.append(node)
            while q:
                i,j = q.popleft()
                visited.add((i,j))
                for x,y in [(0,1),(0,-1),(1,0),(-1,0)]:
                    new_i , new_j = i+x , j+y
                    if (new_i >=0 and new_i < m) and (new_j >=0 and new_j < n):
                        if grid[new_i][new_j] == "1" and (new_i,new_j) not in visited:
                            q.append((new_i,new_j))
                            visited.add((new_i,new_j))
            
        for i,row in enumerate(grid):
            for j,col in enumerate(row):
                if col == "1" and (i,j) not in visited:
                    count+=1
                    bfs((i,j))
        
        return(count)
        
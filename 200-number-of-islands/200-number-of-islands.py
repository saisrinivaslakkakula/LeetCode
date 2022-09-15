class Solution:
    def DFS(self,grid,row,col,m,n):
        grid[row][col] = "0"
        if row-1 >=0 and grid[row-1][col] =="1":
            self.DFS(grid,row-1,col,m,n)
        if row+1 <=m and grid[row+1][col] =="1":
            self.DFS(grid,row+1,col,m,n)
        if col-1 >=0 and grid[row][col-1] =="1":
            self.DFS(grid,row,col-1,m,n)
        if col+1 <=n and grid[row][col+1] =="1":
            self.DFS(grid,row,col+1,m,n)
            
                
    def numIslands(self, grid: List[List[str]]) -> int:
        m = len(grid)-1
        n = len(grid[0])-1
        count = 0
        for r,row in enumerate(grid):
            for c,col in enumerate(row):
                if grid[r][c] == "1":
                    count+=1
                    self.DFS(grid,r,c,m,n)
        return(count)
                    
        
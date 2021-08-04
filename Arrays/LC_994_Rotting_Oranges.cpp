//
// Created by sai srinivas lakkakula on 7/17/21.
//
#include "LC_994_Rotting_Oranges.h"
int orangesRotting(vector<vector<int>>& grid){
    int rows = grid.size();
    int columns = grid[0].size();
    int count = 0,cell=0;
    queue<std::pair<int,int>> queue;
    unordered_set<string> visited ;
    bool aloneFlag = false;
    if(rows==1 && columns ==1 && grid[0][0] ==1)
        return -1;
    for(int i=0;i<rows;i++){
        cell++;
        for(int j=0;j<columns;j++){
            if (grid[i][j] == 2){
                queue.push(std::pair<int,int>(i,j));
                string ins = i+""+j;
                visited.insert(ins);
            }

        }

    }
    if(queue.empty())
        return 0;
    while(!queue.empty()){
        std::pair<int,int> pair = queue.front();
        bool rotted = false;
        if(pair.first+1<rows){
            //std::cout<<grid[pair.first+1][pair.second]<<std::endl;
                if(grid[pair.first+1][pair.second] == 1 && !visited.empty()){
                        if(visited.find(pair.first+1+""+pair.second)== visited.end()){
                            queue.push(std::pair<int,int>(pair.first+1,pair.second));
                            rotted = true;
                            grid[pair.first+1][pair.second] = 2;
                            visited.insert(pair.first+1+""+pair.second);
                        }

                }
        }
        if(pair.first-1>=0){
            if(grid[pair.first-1][pair.second] == 1&& !visited.empty()&&visited.find(pair.first-1+""+pair.second)== visited.end()){
                queue.push(std::pair<int,int>(pair.first-1,pair.second));
                rotted = true;
                grid[pair.first-1][pair.second] = 2;
                visited.insert(pair.first-1+""+pair.second);
            }
        }
        if(pair.second+1<columns){
            if(grid[pair.first][pair.second+1] == 1&& !visited.empty()&&visited.find(pair.first+""+pair.second+1)== visited.end()){
                queue.push(std::pair<int,int>(pair.first,pair.second+1));
                rotted = true;
                grid[pair.first][pair.second+1] = 2;
                visited.insert(pair.first+""+pair.second+1);
            }
        }
        if(pair.second-1>=0){
            if(grid[pair.first][pair.second-1] == 1&& !visited.empty()&&visited.find(pair.first+""+pair.second-1)== visited.end()){
                queue.push(std::pair<int,int>(pair.first,pair.second-1));
                rotted = true;
                grid[pair.first][pair.second-1] = 2;
                visited.insert(pair.first+""+pair.second-1);
            }
        }
        if(rotted){
            count++;
        }
        queue.pop();
    }
   for(int i=0;i<rows;i++){
       for(int j=0;j<columns;j++){
           if(grid[i][j] == 1)
               return -1;
       }
   }

    return count;
}

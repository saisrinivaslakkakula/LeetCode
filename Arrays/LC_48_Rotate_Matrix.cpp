//
// Created by sai srinivas lakkakula on 7/2/21.
//
#include "LC_48_Rotate_Matrix.h"
void rotate(vector<vector<int>>& matrix){
    queue<int> pixels;

    for (vector<int> row: matrix){
        //std::reverse(row.begin(),row.end());
        for(int val:row){
            pixels.push(val);
        }
    }
    for(int i=matrix.size()-1;i>=0;i--){
        for(int j=0;j<matrix.size();j++){
            matrix[j][i] = pixels.front();
            pixels.pop();
        }
    }
    for(vector<int> row:matrix){
        std::cout<<"[ ";
        for(int col:row){
            std::cout<<col<<" ";
        }
        std::cout<<"]\n";
    }
}
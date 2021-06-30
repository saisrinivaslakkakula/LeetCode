//
// Created by sai srinivas lakkakula on 6/29/21.
//
/*
 * if numRows  = 5 The pascal Triangle is
 *         1
 *        1  1
       1   2  1
     1    3   3  1
   1   4    6   4  1

   At any level, the value is sum of above two cells, 2 = 1+1 at row 2 ; 3 = 1+2 at at row 3 and so on.

   The approach followed is, first build the skeleton wit all 1's so num rows is for loop from 1 to numrows
   The number of cells in each row is also equal to loop value like increases 1,2,3...
   at stage n, first and last is obviously filled with 1. the remaining cells are filled according to the pascal's triangle logic.
   so at stage n we have to look at stage n-1.
   if we're filling mth cell of nth row, we have to add m-1 and mth cells of n-1 th row;


     */
#include "LC_118_Pascal_Triangle.h"
vector<vector<int>> generate(int numRows) {

    vector<vector<int>> res;
    for(int i=0;i<numRows;i++){
        vector<int> row;
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i)
            row.push_back(1);
            else
                row.push_back(res.at(i-1).at(j-1)+res.at(i-1).at(j));
        }
        res.push_back(row);
    }
    return res;
}

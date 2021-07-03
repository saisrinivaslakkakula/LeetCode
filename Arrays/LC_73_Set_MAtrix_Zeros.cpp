//
// Created by sai srinivas lakkakula on 7/2/21.

/*Approach:
 * traverse each row in a matrix;
 * if the row has 0 (use find method in STL), fill all the columns with 0;
 * while filling, capture all columns in which 0 is already present and add it to another vector to kkep track of columns with zeros;
 *  If we dont keep track of this, the entire row is filled with zeros, and while searching for 0's in columns,
 *  all the columns will be filled with 0's resulting  0 matrix. This is not the correct approach.
 *  Hence while filling row with 0's, we keep track of all columns with 0's to another vector;
 *
 *  Later, we use another loop to traverse over captured column numbers and fill them all with zeros;
 *
 *  To avoid duplication, we can enhance the proformance by using set  to capture 0's insted of a vector;
 *
 */
//
#include "LC_73_Set_MAtrix_Zeros.h"
void setZeroes(vector<vector<int>>& matrix){
    int rows = matrix.size();
    vector<int> columnIndicesOfZero;
    for(int i=0;i<matrix.size();i++){
        auto ifZeroExists = std::find(matrix[i].begin(),matrix[i].end(),0);
        if(ifZeroExists!= matrix[i].end()){
            int j=0;
            while(j<matrix[i].size()){
                if(matrix[i][j] ==0)
                    columnIndicesOfZero.push_back(j);
                matrix[i][j] = 0;
                j++;
            }
        }
    }
    for(int ci: columnIndicesOfZero){
        int i=0;
        while(i<rows){
            matrix[i][ci] = 0;
            i++;
        }
    }
    for(vector<int> row:matrix){
        std::cout<<"[";
        for(int col:row){
            std::cout<<col<<" ";
        }
        std::cout<<"]\n";
    }
}

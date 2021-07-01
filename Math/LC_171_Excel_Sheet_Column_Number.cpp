//
// Created by sai srinivas lakkakula on 6/30/21.
/*
 * Approcah:
 * In excel sheet the column names grow exponentially.
 * if AA it's simply 26*1+26; LA = (26)*12+26 since L is 12th in alphabetic row
 * so generalising it, if there are n characters in the column name, nth character  = pow(26,size-n)*alphabetic_number
 * All the characters are summed up to give final result
 * eg: FA
 *
 *size = 2;
 * F alphanum = 6
 * 6(pow(26,(2-1)) = 26*6 = 156
 * A alphanum = 1
 * 1(pow(26,(2-2)) = 1*1 = 1
 * Total = 156+1 = 157
 *
 *
 *
 */
//
#include "LC_171_Excel_Sheet_Column_Number.h"
int titleToNumber(string columnTitle){
    int col_idx = 0;
    int col_num = 0;
    for(int i=columnTitle.size()-1;i>=0;i--){
        col_num = col_num+int(columnTitle.at(i)-64)*pow(26,col_idx);
        col_idx++;
    }
    return (col_num);
}
//
// Created by sai srinivas lakkakula on 7/3/21.
//
#include "LC_172_Factorial_Trailing_Zeros.h"
int trailingZeroes(int n){
    //int trailing = 0;
    return((n/5)+(n/25)+(n/125)+(n/625)+(n/3125));


}

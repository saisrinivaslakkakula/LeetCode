//
// Created by sai srinivas lakkakula on 6/29/21.
//
#include "LC_268_Missing_Number.h"
int missingNumber(vector<int>& nums) {
    int sum = 0;
    for(int num:nums){
        sum = sum+num;
    }
    return((nums.size()*(nums.size()+1)/2) - sum);

}
//
// Created by sai srinivas lakkakula on 7/1/21.
//
#include "LC287_Duplicat_Number.h"
int findDuplicate(vector<int>& nums){
    unordered_set<int> set;
    for(int num:nums){
        if(set.find(num) != set.end())
            return num;
        else
            set.insert(num);
    }
    return (0);

}
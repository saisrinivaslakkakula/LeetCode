//
// Created by sai srinivas lakkakula on 7/4/21.
//
#include "LC_31_Next_Permutation.h"
void nextPermutation(vector<int>& nums){
    bool found = false;
    for(int i=nums.size()-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            std::swap(nums[i-1],nums[i]);
            found = true;
            break;
        }
    }
    if(!found){
        std::sort(nums.begin(),nums.end());
    }
    for(int num:nums){
        std::cout<<num<<" ";
    }
}

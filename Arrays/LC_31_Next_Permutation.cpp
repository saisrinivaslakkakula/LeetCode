//
// Created by sai srinivas lakkakula on 7/4/21.
//
/* https://leetcode.com/problems/find-the-duplicate-number/solution/
 * Approach:
 * Traverse the array and sore the traversed element in an unordered_set; As we know unordered_set takes O(1) for insertion and deletion.
 * while traversing check if the element is already there in the map or not.
 * If it does, break the loop by returning false; else insert the element in the map and continue.
 *
 * In the worst case, the time complexity would be O(n).
 *
 */
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

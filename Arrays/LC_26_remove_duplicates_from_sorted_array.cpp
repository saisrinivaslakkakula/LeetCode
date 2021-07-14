//
// Created by sai srinivas lakkakula on 7/12/21.
//

#include "LC_26_remove_duplicates_from_sorted_array.h"
int removeDuplicates(vector<int>& nums){
    if(!nums.empty()){
        int prev = nums[0];
        int ptr = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != prev){
                nums[ptr] = nums[i];
                prev = nums[i];
                ptr++;
            }
        }
        return ptr;
    }
    else{
        return 0;
    }

}
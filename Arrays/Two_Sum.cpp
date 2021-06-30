//
// Created by sai srinivas lakkakula on 6/30/21.
//
/*
 * Approach:
 * if the array is [2,7,11,15]; target = 9;
 *
 * it is clear from the question that 2+7 makes 9 and we have to return 0 and 1;
 * to make problem easy, I have taken a hashmap(unordered map) DS called it as difference; The structure is umap<difference,index_giving_that_difference>.
 * Iterate through nums.
 * in the above example, for first element in nums,target-nums[0] = 9-1 = 7
 * This difference value is stored as a key and it's corresponding value is the index of nums at which the difference is calculated.
 * so the hashmap would be nums[7] = 0
 *  At every stage, the hashmap is checked if the current value matches any value in hash map or not. if not continue the iteration.
 *  If found return the current index of nums and value corresponding to the found key(difference).
 *  In the above example, one the iteration reaches 1st element i.e 7, it is found as key in hashmap as 9-2 = 7 is already been recorded in the hashmap.
 *  the program get the corresponding index which gave the value which is 0 in this case and current index which is 1.
 *  so [0,1] are returned.
 *
 *
 *
 */
#include "Two_Sum.h"
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int,int> umap;
    for(int i=0;i<nums.size();i++){
        auto it = umap.find(nums.at(i));
        if(it!= umap.end()){
            res.push_back(it->second);
            res.push_back(i);
            return(res);
        }
        umap[target - nums.at(i)] = i;

    }
    return (res);
}
//
// Created by sai srinivas lakkakula on 7/13/21.
//
#include "LC_496_Next_Greater_Element.h"

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
    vector<int> res;
    unordered_map<int,int> map;
    for(int i=0;i<nums2.size();i++){
        map.insert(std::pair<int,int>(nums2[i],i));
    }
    for(int num:nums1){
        if(map.find(num)!= map.end()){
            bool greaterFound = false;
            for(int i=map.find(num)->second;i<nums2.size();i++){
                    if(nums2[i]>num){
                        res.push_back(nums2[i]);
                        greaterFound = true;
                        break;
                    }
            }
            if(!greaterFound){
                res.push_back(-1);
            }
        }
    }
    return res;
}

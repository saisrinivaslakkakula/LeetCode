//
// Created by sai srinivas lakkakula on 7/12/21.
//
// keep track of previous unique element and once the uniqueness changess while iteration, replace the current element
//with the tracked pointer. then increase pointer.
/* eg:
 *  [0,0,1,1,1,2,2,2,2,3,3,4]
 *  initialize ptr->1 and start from 1 keeping first unique as arr[0]
 *  while traversing at i=2, uniqueness changes from 0 to 1, so replace element at i=2 with ptr,
 *  i.e. replace 2nd 0 with first 1 in the array and resultant becomes [0,1 *|*,1,1,1,2,2,2,2,3,3,4]
 *  the format is [ replaced *|* not replaced]. Now increment the pointer from 1 to 2;
 *  for the next replacement, the uniquness changes at i= 5, rplace i=2 and i=5 and increment pointer;
 *  resulatant -> [0,1,2,1,1,2,2,2,2,3,3,4];
 *  finally, as asked in the question, we return the pointer saying till the index which we removed duplicates.
 *  in this case we return array [0,1,2,3,4,2,2,2,2,3,3,4]; the and pointer at 5; so the remaining element after index 5 are ignored.
 *


*/

#include "LC_26_remove_duplicates_from_sorted_array.h"
int removeDuplicates(vector<int>& nums){
    if(!nums.empty()){
        int prev = nums[0];
        int ptr = 1;
        // keep track of previous unique element and once the uniqueness changess while iteration, replace the current element
        //with the tracked pointer. then increase pointer.
        // eg
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
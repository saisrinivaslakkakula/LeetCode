#include <iostream>
#include "Arrays/Two_Sum.h"

int main() {

    vector<int> nums = {3,3};
    vector<int> res = twoSum(nums,6);
    for(int i=0;i<res.size();i++){
        std::cout<<res.at(i)<<std::endl;
    }

}

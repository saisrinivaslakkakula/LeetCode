#include <iostream>
#include "Arrays/LC_56_Merge_Intervals.h"

int main() {

    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>res = merge(intervals);
    for(vector<int>res1:res){
        std::cout<<"["<<res1[0]<<","<<res1[1]<<"],";
    }

}

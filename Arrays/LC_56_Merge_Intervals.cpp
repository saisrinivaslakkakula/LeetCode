//
// Created by sai srinivas lakkakula on 7/1/21.
//
#include "LC_56_Merge_Intervals.h"
vector<vector<int>> merge(vector<vector<int>>& intervals){
       std::sort(intervals.begin(), intervals.end());
       vector<vector<int>> res;
       vector<int> prev;
       prev = intervals.at(0);
       res.push_back(prev);
       for(int i=1;i<intervals.size();i++) {
          if(intervals[i][0] >= prev[0] && intervals[i][0] <= prev[1]){
              prev[0] = std::min(intervals.at(i )[0], prev[0]);
              prev[1] = std::max(intervals.at(i)[1], prev[1]);
              res.at(res.size()-1) = prev;
          }
          else{
              res.push_back(intervals[i]);
              prev = intervals[i];
          }
       }
       return res;
}

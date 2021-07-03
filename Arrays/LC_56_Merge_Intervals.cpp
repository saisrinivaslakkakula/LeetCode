//
// Created by sai srinivas lakkakula on 7/1/21.
//
#include "LC_56_Merge_Intervals.h"
/*vector<vector<int>> merge(vector<vector<int>>& intervals){
    map<int,int> intervalsMap;
    vector<vector<int>> res;
    for(vector<int> interval:intervals){
        if(intervalsMap.find(interval[0])== intervalsMap.end())
        {
            intervalsMap.insert(std::pair<int,int>(interval[0],interval[1]));
           for(auto it=intervalsMap.begin();it!=intervalsMap.end();it++ ){
               if(interval[0] <= it->second && it->first != interval[0]){
                   intervalsMap[it->first] = interval[1];
                   if(interval[0] >= it->first)
                        intervalsMap.erase(interval[0]);
                   else
                        intervalsMap.erase(it->first);

                   break;
               }
           }
        }
        else{
            if(interval[1] >intervalsMap[interval[0]])
                intervalsMap[interval[0]] = interval[1];

        }
    }
    for(auto it = intervalsMap.begin(); it!=intervalsMap.end();it++){
        vector<int> interval;
        interval.push_back(it->first);
        interval.push_back(it->second);
        res.push_back(interval);
    }
    return res;
}*/






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

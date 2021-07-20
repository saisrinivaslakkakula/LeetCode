//
// Created by sai srinivas lakkakula on 7/14/21.
//
#include "LC_242_Valid_Anagram.h"
bool isAnagram(string s, string t){
    if(s.length() != t.length())
        return false;
    else{
        unordered_map<char,int> map;
        int i=0;
        while(i<s.length()){
            auto it=map.find(s.at(i));
            if(it!= map.end()){
                int count = it->second+1;
                //std::cout<<count<<" ";
                it->second = count;
            }
            else{
                map[s.at(i)] = 1;
            }
            i++;
        }
    int j=0;
        while(j<t.length()){
            auto it=map.find(t.at(j));
            if(it!= map.end()){
                int count = it->second-1;
                //std::cout<<count<<" ";
                it->second = count;
            }
            else{
                return false;
            }
            j++;
        }
        for(auto mapVal:map){
            if(mapVal.second >0)
                return false;
        }

    }
    return true;
}

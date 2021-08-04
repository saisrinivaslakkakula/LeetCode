//
// Created by sai srinivas lakkakula on 7/26/21.
//

#include "LC_3_Longest_substring.h"

int LC_3_Longest_substring::lengthOfLongestSubstring(string s) {
    unordered_set<char> chars;
    set<int> count_set;
    int i=0;
    int count = 0;
    while(i<s.size()){
        if(chars.find(s[i])==chars.end()){
            count++;
            chars.insert(s[i]);
        }
        else{
            count_set.insert(count);
            count = 0;
            chars.erase(chars.begin(),chars.end());
            chars.insert(s[i]);
            count++;
        }
        i++;
    }
    count_set.insert(count);
    if (!count_set.empty())
        return *(count_set.rbegin());
    else
    return(0);
}
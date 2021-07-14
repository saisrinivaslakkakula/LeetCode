//
// Created by sai srinivas lakkakula on 7/13/21.
//
#include "LC_409_Longest_Palindrome.h"
int longestPalindrome(string s){
    stack<char> char_stack;
    sort(s.begin(),s.end());
    int i=0;
    while(i<s.length()){
        if(!char_stack.empty() && char_stack.top() == s.at(i)){
            char_stack.pop();
        }
        else{
            char_stack.push(s.at(i));
        }
        i++;
    }
    if(!char_stack.empty())
        return(s.length()-char_stack.size()+1);
    else
        return(s.length());
}
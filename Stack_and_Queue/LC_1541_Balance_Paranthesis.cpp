//
// Created by sai srinivas lakkakula on 7/15/21.
//

#include "LC_1541_Balance_Paranthesis.h"
int minInsertions(string s){
    stack<char> stack1,stack2;
    int i=0,opencnt =0,total=0;

    //std::cout<<s.length();
    while(i<s.length()) {
        if(i<s.length()  &&opencnt>0){
            if(s[i] == ')' && s[i+1]==')'){
                opencnt--;
                total = total-2;
            }
            else{
                total;
            }
        }
        i++;
    }
    return(0);
}



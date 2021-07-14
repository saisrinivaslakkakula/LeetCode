//
// Created by sai srinivas lakkakula on 7/13/21.
//

#include "LC_155_Min_Stack.h"

void LC_155_Min_Stack::push(int val) {
    if(!min_stack.empty())
    {
        if(val<=min_stack.at(min_stack.size()-1))
            min_stack.push_back(val);
    }
    else{
        min_stack.push_back(val);
    }

    stack.push_back(val);
}

int LC_155_Min_Stack::top() {
    return stack.at(stack.size()-1);
}
void LC_155_Min_Stack::pop() {
   if(this->top() == min_stack.at(min_stack.size()-1))
       min_stack.pop_back();
   stack.pop_back();
}

int LC_155_Min_Stack::getMin() {
    return min_stack.at(min_stack.size()-1);
}
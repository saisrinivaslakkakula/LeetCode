//
// Created by sai srinivas lakkakula on 7/12/21.
//

#include "LC_232_Implement_Queue_using_Stack.h"

void LC_232_Implement_Queue_using_Stack::push(int x) {
    while (!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while (!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }

}

int LC_232_Implement_Queue_using_Stack::peek() {
    return s1.top();
}

int LC_232_Implement_Queue_using_Stack::pop() {
    int res = s1.top();
    s1.pop();
    return res;
}

bool LC_232_Implement_Queue_using_Stack::empty() {
    if(s1.empty())
        return true;
    else
        return false;
}
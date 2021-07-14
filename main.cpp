#include <iostream>
#include "Stack_and_Queue/LC_155_Min_Stack.h"

int main() {
    LC_155_Min_Stack minStack = LC_155_Min_Stack();
    minStack.push(0);
    minStack.push(1);
    minStack.push(0);
    std::cout<<minStack.getMin()<<" ";
    minStack.pop();
    //std::cout<<minStack.top()<<" ";
    std::cout<<minStack.getMin()<<" ";



}

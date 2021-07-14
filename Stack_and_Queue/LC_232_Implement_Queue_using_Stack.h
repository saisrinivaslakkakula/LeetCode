//
// Created by sai srinivas lakkakula on 7/12/21.
//

#ifndef LETTCODE_LC_232_IMPLEMENT_QUEUE_USING_STACK_H
#define LETTCODE_LC_232_IMPLEMENT_QUEUE_USING_STACK_H
#include <stack>
using std::stack;

class LC_232_Implement_Queue_using_Stack {
public:
    /** Initialize your data structure here. */
    LC_232_Implement_Queue_using_Stack() {

    }

    /** Push element x to the back of queue. */
    void push(int x);

    /** Removes the element from in front of queue and returns that element. */
    int pop();


    /** Get the front element. */
    int peek();

    /** Returns whether the queue is empty. */
    bool empty();

private:
    stack<int> s1,s2;
};


#endif //LETTCODE_LC_232_IMPLEMENT_QUEUE_USING_STACK_H



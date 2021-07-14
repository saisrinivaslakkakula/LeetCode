//
// Created by sai srinivas lakkakula on 7/13/21.
//

#ifndef LETTCODE_LC_155_MIN_STACK_H
#define LETTCODE_LC_155_MIN_STACK_H
#include <vector>
using std::vector;

class LC_155_Min_Stack {



public:
    LC_155_Min_Stack() {

    }
    void push(int val);


    void pop();

    int top();

    int getMin();

private:
    vector<int> stack,min_stack;
};


#endif //LETTCODE_LC_155_MIN_STACK_H

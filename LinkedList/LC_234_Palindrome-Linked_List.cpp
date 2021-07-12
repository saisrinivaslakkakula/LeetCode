//
// Created by sai srinivas lakkakula on 7/8/21.
//
#include "LC_234_Palindrome-Linked_List.h"
bool isPalindrome(ListNode* head){
    stack<int> stack;
    ListNode *traversal1 = head;
    while (traversal1!= nullptr){
        stack.push(traversal1->val);
        traversal1 = traversal1->next;
    }
    while (head!= nullptr){
        if(head->val == stack.top())
            stack.pop();
        else
            return false;
        head = head->next;
    }
    return true;
}

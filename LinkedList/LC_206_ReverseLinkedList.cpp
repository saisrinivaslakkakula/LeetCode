//
// Created by sai srinivas lakkakula on 6/30/21.
//
#include "LC_206_ReverseLinkedList.h"

ListNode* reverseList(ListNode* head){
    if(head!= nullptr||head->next == nullptr){
        return head;
    }
    ListNode *curr = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return curr;


}

void printRev(ListNode* head){
    if(head == nullptr){
        return ;
    }
    printRev(head->next);
    std::cout<<" "<<head->val;
}

 ListNode * insertNode(int val){
    ListNode *newNode = new ListNode();
    newNode->val = val;
    newNode->next = nullptr;
    return newNode;


}